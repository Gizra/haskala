<?php

$plugin = array(
  'title' => t('Term nodes list'),
  'description' => t('Displays a list of nodes related to a term.'),
  'category' => t('Haskala'),
  'required context' => new ctools_context_optional(t('Taxonomy term'), 'taxonomy_term'),
);

/**
 * Render callback.
 */
function haskala_terms_term_nodes_list_content_type_render($subtype, $conf, $args, $context) {
  if (empty($context->data)) {
    return;
  }

  $block = new stdClass();
  $block->module = 'haskala_terms';
  $block->content = array();

  $term = $context->data;
  $nids = taxonomy_select_nodes($term->tid, FALSE);
  if (!$nids) {
    $block->content['no_content'] = array(
      '#prefix' => '<p>',
      '#suffix' => '</p>',
      '#markup' => t('There is currently no content classified with this term.'),
    );

    return $block;
  }

  $nodes = node_load_multiple($nids);
  // Rebuild the nids list, to convert book sub-nodes to book nodes.
  $nids = array();
  foreach ($nodes as &$node) {
    $wrapper = entity_metadata_wrapper('node', $node);
    if (in_array($node->type, array('edition', 'production', 'mention', 'translation', 'preface'))) {
      $nids[] = $wrapper->field_book->getIdentifier();
    }
    else {
      $nids[] = $node->nid;
    }
  }
  $nodes = node_load_multiple($nids);
  uasort($nodes, '_haskala_terms_sort_nodes');
  $block->content = node_view_multiple($nodes);

  return $block;
}

/**
 * Sorting callback; Sort nodes by title.
 */
function _haskala_terms_sort_nodes($node1, $node2) {
  return $node1->title > $node2->title;
}

/**
 * Plugin settings form.
 */
function haskala_terms_term_nodes_list_content_type_edit_form($form, &$form_state) {
  return $form;
}

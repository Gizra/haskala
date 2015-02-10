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
  $term = $context->data;
  $related_node_ids = taxonomy_select_nodes($term->tid, FALSE);

  // Only display book and person nodes.
  $nodes = node_load_multiple($related_node_ids, array('type' => 'book'));
  $nodes += node_load_multiple($related_node_ids, array('type' => 'person'));

  $block = new stdClass();
  $block->module = 'haskala_terms';
  $block->content = node_view_multiple($nodes);

  return $block;
}

/**
 * Plugin settings form.
 */
function haskala_terms_term_nodes_list_content_type_edit_form($form, &$form_state) {
  return $form;
}

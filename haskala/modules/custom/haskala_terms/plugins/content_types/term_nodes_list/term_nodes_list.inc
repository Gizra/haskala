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
  $nids = haskala_terms_select_nodes($term->tid);
  if (!$nids) {
    $block->content['no_content'] = array(
      '#prefix' => '<p>',
      '#suffix' => '</p>',
      '#markup' => t('There is currently no content classified with this term.'),
    );

    return $block;
  }

  $block->content = node_view_multiple(node_load_multiple($nids));
  $block->content['pager'] = array(
    '#theme' => 'pager',
    '#weight' => 5,
  );

  return $block;
}

/**
 * Plugin settings form.
 */
function haskala_terms_term_nodes_list_content_type_edit_form($form, &$form_state) {
  return $form;
}

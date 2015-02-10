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
  $nids = haskala_terms_select_nodes($term->tid, TRUE, variable_get('haskala_nodes_on_term', 15));
  $build = array();

  if ($nids) {
    $nodes = node_load_multiple($nids);
    $build = node_view_multiple($nodes);
    $build['pager'] = array(
      '#theme' => 'pager',
      '#weight' => 5,
    );
  }
  else {
    $build['no_content'] = array(
      '#prefix' => '<p>',
      '#markup' => t('There is currently no content classified with this term.'),
      '#suffix' => '</p>',
    );
  }

  $block = new stdClass();
  $block->module = 'haskala_terms';
  $block->content = $build;

  return $block;
}

/**
 * Plugin settings form.
 */
function haskala_terms_term_nodes_list_content_type_edit_form($form, &$form_state) {
  return $form;
}

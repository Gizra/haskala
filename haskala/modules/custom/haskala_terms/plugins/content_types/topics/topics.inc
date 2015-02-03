<?php

$plugin = array(
  'title' => t('Topics'),
  'description' => t('Topics tag cloud.'),
  'category' => t('Haskala'),
);

/**
 * Render callback.
 */
function haskala_terms_topics_content_type_render($subtype, $conf, $args, $context) {
  // Fetch popular topics terms ordered by their usage.
  $query = db_select('field_data_field_topic', 't')
    ->fields('t', array('field_topic_tid'))
    ->groupBy('field_topic_tid');
  $query->addExpression('COUNT(field_topic_tid)', 'usage_count');
  $query->orderBy('usage_count', 'DESC')->range(0, variable_get('haskala_topics_limit', 23));
  $term_ids = $query->execute()->fetchAllAssoc('field_topic_tid');

  if (!$term_ids) {
    return;
  }

  $items = array();
  foreach (taxonomy_term_load_multiple(array_keys($term_ids)) as $term) {
    $items[] = l($term->name, 'taxonomy/term/' . $term->tid);
  }
  $block = new stdClass();
  $block->module = 'haskala_terms';

  $block->content = theme('item_list', array('items' => $items));

  return $block;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_terms_topics_content_type_render_edit_form($form, &$form_state) {
  return $form;
}

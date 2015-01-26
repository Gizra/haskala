<?php

$plugin = array(
  'title' => t('Book fields'),
  'description' => t('Display a book.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_book_book_fields_content_type_theme',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Render callback.
 */
function haskala_book_book_fields_content_type_render($subtype, $conf, $args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = $context->data;

  // For weight fields data.
  $node_view = node_view($node);

  $wrapper = entity_metadata_wrapper('node', $node);

  // Fields to be displayed above the book tabs.
  $top_details_group = field_group_load_field_group('group_top_details', 'node', 'book', 'default');

  // Sort fields by weight.
  $top_details_fields_sorted = array();
  foreach($top_details_group->children as $field_name) {
    if ($wrapper->$field_name->value()){
      $weight = $node_view[$field_name]['#weight'];
      $tab_fields_sorted[$weight] = $field_name;
    }
  }
  ksort($top_details_fields_sorted);

  $top_details_group_fields = array();
  foreach($top_details_fields_sorted as $field_name) {

    // Check if the field isn't empty.
    if ($wrapper->$field_name->value()) {
      $top_details_group_fields[] = render($node_view[$field_name]);
    }
  }

  $parent_tabs_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');

  $tabs_fields = array();

  foreach ($parent_tabs_group->children as $tab_name) {
    $tab = field_group_load_field_group($tab_name, 'node', 'book', 'default');

    $tabs_fields[$tab->label]['single'] = haskala_book_get_tab_fields($wrapper, $tab, $node_view, $node->nid);

    // Delete empty group.
    if (empty($tabs_fields[$tab->label]['single'])){
      unset($tabs_fields[$tab->label]);
    }
    else {
      $tabs_fields[$tab->label]['single']['weight'] = $tab->weight;
    }
  }

  // Sort groups by weight.
  uasort($tabs_fields, 'drupal_sort_weight');

  // Delete weight element.
  foreach (array_keys($tabs_fields) as $tab_name){
    unset($tabs_fields[$tab_name]['single']['weight']);
  }

  // Add Book producers tab.
  $productions_nodes = haskala_book_get_production($node->nid);
  if ($productions_nodes) {
    $tabs_fields[t('Book producers')] = array();
    foreach($productions_nodes as $production_node) {
      $producer_info = haskala_book_get_bundle_tab('production', $production_node, 'group_producers');
      $tabs_fields[t('Book producers')][] = haskala_book_get_tab_fields($producer_info['wrapper'], $producer_info['tab'], $producer_info['node_view'], $node->nid);
    }
  }

  $grouped_fields_variables = array(
    'title' => $node->title,
    'top_details_group' => $top_details_group_fields,
    'tabs' => $tabs_fields,
  );

  $variables = array(
    'nid' => $node->nid,
    'grouped_fields' => theme('haskala_book_fields', $grouped_fields_variables),
  );

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('haskala_book', $variables);

  return $block;
}

/**

/**
 * The form to add or edit a node as content.
 */
function haskala_book_book_fields_content_type_render_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Delegated hook_theme().
 */
function haskala_book_book_fields_content_type_theme(&$theme, $plugin) {
  $theme['haskala_book'] = array(
    'template' => 'haskala-book',
    'path' => $plugin['path'],
    'variables' => array(),
  );

  $theme['haskala_book_fields'] = array(
    'template' => 'haskala-book-fields',
    'path' => $plugin['path'],
    'variables' => array(),
  );
}


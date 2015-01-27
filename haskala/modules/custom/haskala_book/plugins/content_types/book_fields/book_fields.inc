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
  $book_nid = $node->nid;

  // For weight fields data.
  $node_view = node_view($node);

  $wrapper = entity_metadata_wrapper('node', $node);

  // Fields to be displayed above the book tabs.
  $top_details_group = field_group_load_field_group('group_top_details', 'node', 'book', 'default');
  $top_details_group_fields = haskala_book_get_tab_fields($wrapper, $top_details_group, $node_view, $book_nid);

  // Book tabs fields.
  $parent_tabs_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');
  $tabs_fields = array();

  foreach ($parent_tabs_group->children as $tab_name) {
    $tab = field_group_load_field_group($tab_name, 'node', 'book', 'default');

    $tabs_fields[$tab->label]['single'] = haskala_book_get_tab_fields($wrapper, $tab, $node_view, $book_nid);

    // Delete empty group.
    if (empty($tabs_fields[$tab->label]['single'])){
      unset($tabs_fields[$tab->label]);
    }
    else {
      $tabs_fields[$tab->label]['weight'] = $tab->weight;
    }
  }

  // Sort groups by weight.
  uasort($tabs_fields, 'drupal_sort_weight');

  // Delete weight element.
  foreach (array_keys($tabs_fields) as $tab_name){
    unset($tabs_fields[$tab_name]['weight']);
  }

  // Add Book producers tab.
  haskala_book_production_tab_fields($tabs_fields, $book_nid);

  $grouped_fields_variables = array(
    'title' => $node->title,
    'top_details_group' => $top_details_group_fields,
    'tabs' => $tabs_fields,
  );

  $variables = array(
    'nid' => $book_nid,
    'grouped_fields' => theme('haskala_book_fields', $grouped_fields_variables),
  );

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('haskala_book', $variables);

  return $block;
}

// Add Book producers tab.
function haskala_book_production_tab_fields(&$tabs_fields, $book_nid) {
  $productions_nodes = haskala_book_get_production($book_nid);
  if ($productions_nodes) {
    $tabs_fields[t('Book producers')] = array();
    foreach($productions_nodes as $production_node) {
      $production_wrapper = entity_metadata_wrapper('node', $production_node);
      $production_tab = field_group_load_field_group('group_producers', 'node', 'production', 'default');
      $production_node_view = node_view($production_node);
//      $producer_info = haskala_book_get_bundle_tab('production', $production_node, 'group_producers');
      $tabs_fields[t('Book producers')][] = haskala_book_get_tab_fields($production_wrapper, $production_tab, $production_node_view, $book_nid);
    }
  }
}

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


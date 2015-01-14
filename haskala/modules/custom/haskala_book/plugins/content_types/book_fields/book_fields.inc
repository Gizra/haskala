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
  $wrapper = entity_metadata_wrapper('node', $node);

  // Fields to be displayed above the book tabs.
  $top_details_group = field_group_load_field_group('group_top_details', 'node', 'book', 'default');
  $top_details_group_fields = array();
  foreach($top_details_group->children as $field_name) {

    // Check if the field isn't empty.
    if ($wrapper->$field_name->value()) {
      $top_details_group_fields[] = field_view_field('node', $node, $field_name);
    }

  }

  $parent_tabs_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');

  $tabs_fields = array();

  foreach ($parent_tabs_group->children as $tab_name) {
    $tab = field_group_load_field_group($tab_name, 'node', 'book', 'default');
    $tabs_fields[$tab->label] = array();
    foreach($tab->children as $field_name) {

      // Check if the field isn't empty.
      if ($wrapper->$field_name->value()) {
        $field = field_view_field('node', $node, $field_name);
        $tabs_fields[$tab->label][] = $field;
      }
    }
    // Delete empty group.
    if (empty($tabs_fields[$tab->label])){
      unset($tabs_fields[$tab->label]);
    }
  }

  $grouped_fileds_variables = array(
    'title' => $node->title,
    'top_details_group' => $top_details_group_fields,
    'tabs' => $tabs_fields,
  );

  $variables = array(
    'nid' => $node->nid,
    'grouped_fields' => theme('haskala_book_fields', $grouped_fileds_variables),
  );

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content =  theme('haskala_book', $variables);

  return $block;
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


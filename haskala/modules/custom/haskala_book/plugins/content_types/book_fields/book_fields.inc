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

    // Sort fields by weight
    $tab_fields_sorted = array();
    foreach($tab->children as $field_name) {
      if ($wrapper->$field_name->value()){
        $weight = $node_view[$field_name]['#weight'];
        $tab_fields_sorted[$weight] = $field_name;
      }
    }
    ksort($tab_fields_sorted);

    $tabs_fields[$tab->label] = array();
    foreach($tab_fields_sorted as $field_name) {

      // Check if the field isn't empty.
      if ($wrapper->$field_name->value()) {
        $field = render($node_view[$field_name]);
        $tabs_fields[$tab->label][] = $field;

        // Role of preface writer
        if ($field_name == 'field_writer_of_preface') {
          $production_id = haskala_book_prefaces_tab_additional_info($node->nid, $wrapper->$field_name->value()->nid);
          if ($production_id) {
            $production_node = node_load($production_id);
            $field = field_view_field('node', $production_node, 'field_role');
            $tabs_fields[$tab->label][] = $field;
          }
        }
      }
    }

    // Delete empty group.
    if (empty($tabs_fields[$tab->label])){
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
+ * Prefaces tab - role in book production of preface writer
+ */
function haskala_book_prefaces_tab_additional_info($book_id, $person_id) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'production')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->fieldCondition('field_producer', 'target_id', $person_id)
    ->fieldCondition('field_book', 'target_id', $book_id);
  $result = $query->execute();
  if (empty($result['node'])) {
    return;
  }
  else {
  return $production_id = reset($result['node'])->nid;
  }

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


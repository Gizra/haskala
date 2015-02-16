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

  // Type of book - fields to be displayed above the book tabs.
  $top_details_group = field_group_load_field_group('group_top_details', 'node', 'book', 'default');
  $top_details_group_fields = haskala_book_get_tab_fields($wrapper, $top_details_group, $node_view, $book_nid);

  // Book tabs fields.
  $parent_tabs_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');
  $tabs_fields = array();
  foreach ($parent_tabs_group->children as $tab_name) {
    $tab = field_group_load_field_group($tab_name, 'node', 'book', 'default');
    $tab_fields = haskala_book_get_tab_fields($wrapper, $tab, $node_view, $book_nid);
    if ($tab_fields && !empty($tab_fields)) {
      if (preg_grep('/^group_/', array_keys($tab_fields))) {
        $tabs_fields[$tab->label] = $tab_fields;
      }
      else {
        $tabs_fields[$tab->label]['single'] = $tab_fields;
      }
      $tabs_fields[$tab->label]['weight'] = $tab->weight;
    }
  }

  // Sort groups by weight.
  uasort($tabs_fields, 'drupal_sort_weight');

  // Delete weight element.
  foreach (array_keys($tabs_fields) as $tab_name){
    unset($tabs_fields[$tab_name]['weight']);
  }

  // Add author names field to translation tab.
  if ($wrapper->field_book->value()) {
    $production_node = haskala_book_get_production($wrapper->field_book->getIdentifier(), NULL, t('Author'));
    if ($production_node) {
      $production_wrapper = entity_metadata_wrapper('node', $production_node);
      $author_names_as_field = haskala_person_get_names($production_wrapper->field_producer->getIdentifier());

      if ($author_names_as_field) {
        // The tab fields array should contain keys: 'single', 'main'
        // and keys that beginning with 'group'.
        // The field "general notes" may be exist in 'single' or 'main' keys only.
        $key = preg_grep('/^(?!group).*$/', array_keys($tabs_fields[t('Translation')]));
        $key = reset($key);
        // Insert before the last field "general notes" if exist.
        if ($key && strstr(end($tabs_fields[t('Translation')][$key]), 'field-translation-notes')) {
          array_splice($tabs_fields[t('Translation')][$key], count($tabs_fields[t('Translation')][$key])-1, 0, render($author_names_as_field));        }
        // If field "general notes" is not exist, add to the end of translation fields array.
        else {
          $tabs_fields[t('Translation')][$key][] = render($author_names_as_field);
        }
      }
    }
  }

  // Add Book producers tab.
  haskala_book_production_tab_fields($tabs_fields, $book_nid);

  // Add editions to Editions tab.
  $editions_fields = haskala_book_get_editions($book_nid);
  if ($editions_fields) {
    $editions_tmp = array_merge($tabs_fields[t('Editions')], $editions_fields);
    $tabs_fields[t('Editions')] = $editions_tmp;
  }

  // Add translations to Editions tab.
  $translations_fields = haskala_book_get_translations($book_nid);
  if ($translations_fields) {
    $tabs_fields[t('Editions')]['sub_title'] = t('Translations');
    $translation_tmp = array_merge($tabs_fields[t('Editions')], $translations_fields);
    $tabs_fields[t('Editions')] = $translation_tmp;
  }

  // Add mentionees for PERSONS MENTIONED IN BOOK tab.
  $mentionees = haskala_book_get_mentions($book_nid);
  if ($mentionees) {
    $tabs_fields[t('Persons mentioned in book')]['sub_title'] = t('People mentioned in the book');
    $mention_tmp = array_merge($tabs_fields[t('Persons mentioned in book')], $mentionees);
    $tabs_fields[t('Persons mentioned in book')] = $mention_tmp;
  }
  
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

  drupal_add_js(drupal_get_path('module', 'haskala_book') . '/js/haskala_book.js');

  return $block;
}

/**
 * Add Book producers tab into $tabs_fields array.
 *
 *  @param &$tabs_fields
 *   The tabs array.
 *  @param $book_nid
 *   The book nid.
 */
function haskala_book_production_tab_fields(&$tabs_fields, $book_nid) {
  $productions_nodes = haskala_book_get_production($book_nid);
  if (!$productions_nodes) {
    return;
  }

  $producers = array();
  foreach($productions_nodes as $production_node) {
    $node_view = node_view($production_node);
    $producers[] = array(render($node_view));
  }
  // TODO: use node_view_multiple() instead.
  $tabs_fields[t('Book producers')] = $producers;
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


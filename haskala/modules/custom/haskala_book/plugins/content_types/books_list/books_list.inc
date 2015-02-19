<?php

$plugin = array(
  'title' => t('Nodes list'),
  'description' => t('Display a nodes list starting from some letter.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_book_books_list_content_type_theme',
  'required context' => new ctools_context_optional(t('Letter'), 'string'),
  'defaults' => array(
    'book_type' => 'regular',
    'node_type' => 'book',
  ),
);

/**
 * Render callback.
 */
function haskala_book_books_list_content_type_render($subtype, $conf, $args, $context) {
  $variables = array();

  $argument = empty($context->data) ? 'A' : strtoupper($context->data);

  $book_type = $conf['book_type'];
  $node_type = $conf['node_type'];

  $options = array(
    'node' => array(
      'node_type' => $node_type,
      'book_type' => $book_type,
    ),
  );

  // Create formatted html of block of the terms to display.
  $variables['books_blocks'] = haskala_general_build_items_list('node', $options, $argument);

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('books_list', $variables);

  return $block;
}

/**
 * Get limited count of nodes with titles starting from the certain letter.
 *
 * @param $letter
 *  String with the certain letter.
 * @param $limit
 *  Count of nodes, that should be loaded.
 * @param $node_type
 *  Node bundle.
 * @param $book_type
 *  Type of the book node. Could be regular or digital.
 *
 * @return array
 *  Array with node objects.
 */
function haskala_book_get_nodes_by_letter($letter, $limit, $node_type = 'book', $book_type = 'regular') {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->propertyCondition('type', $node_type);

  if ($node_type == 'book') {
    $query->propertyCondition('title', $letter, 'STARTS_WITH');
  }
  elseif ($node_type == 'person') {
    // Get english alphabet.
    $letters_en = range('A', 'Z');
    // Get hebrew alphabet;
    $letters_he = haskala_book_hebrew_alphabet_without_sofit();
    if (in_array($letter, $letters_en)) {
      $query->fieldCondition('field_german_name',  'value', $letter, 'STARTS_WITH');
    }
    elseif (in_array($letter, $letters_he)) {
      $query->fieldCondition('field_hebrew_name',  'value', $letter, 'STARTS_WITH');
    }
  }

  if ($book_type == 'digital' && $node_type == 'book') {
    $query->fieldCondition('field_link_to_digital_book', 'url', 'NULL', 'IS NOT NULL');
  }

  if ($limit != 50) {
    // Could be that for some letter there are more than 50 items. In this case
    // if this is the first requested letter we should load all of them.
    $query->range(0, $limit);
  }

  $result = $query->execute();

  // Load nodes by nids from result.
  $nodes = !empty($result) ? node_load_multiple(array_keys($result['node'])) : array();

  return $nodes;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_book_books_list_content_type_edit_form($form, &$form_state) {
  $node_types = array_keys(node_type_get_types());
  $bundles = array();
  foreach ($node_types as $type) {
    $bundles[$type] = $type;
  }

  $form['node_type'] = array(
    '#type' => 'select',
    '#title' => t('Node type'),
    '#options' => $bundles,
    '#default_value' => $form_state['conf']['node_type'],
  );

  $book_types = array(
    'regular' => 'regular',
    'digital' => 'digital',
  );
  $form['book_type'] = array(
    '#type' => 'select',
    '#title' => t('Book type'),
    '#options' => $book_types,
    '#default_value' => $form_state['conf']['book_type'],
  );

  return $form;
}


/**
 * Submit handler;
 */
function haskala_book_books_list_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['values']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}


/**
 * Delegated hook_theme().
 */
function haskala_book_books_list_content_type_theme(&$theme, $plugin) {
  $theme['books_list'] = array(
    'template' => 'books_list',
    'path' => $plugin['path'],
    'variables' => array(
      'list' => NULL,
      'books_blocks' => NULL,
    ),
  );
  $theme['letter_books_list'] = array(
    'template' => 'letter_books_list',
    'path' => $plugin['path'],
    'variables' => array(
      'letter' => NULL,
      'class' => NULL,
      'books_list' => NULL,
    ),
  );
}

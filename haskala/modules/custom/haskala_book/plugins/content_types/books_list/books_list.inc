<?php

$plugin = array(
  'title' => t('Books list'),
  'description' => t('Display a books list starting from some letter.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_book_books_list_content_type_theme',
  'required context' => new ctools_context_optional(t('Letter'), 'string'),
);

/**
 * Render callback.
 */
function haskala_book_books_list_content_type_render($subtype, $conf, $args, $context) {
  $variables = array();

  $argument = empty($args[0]) ? 'A' : strtoupper($args[0]);

  // Get english alphabet.
  $letters_en = range('A', 'Z');

  // Get hebrew alphabet;
  $letters_he = haskala_book_hebrew_alphabet_without_sofit();

  if (!in_array($argument, $letters_en) && !in_array($argument, $letters_he)) {
    return;
  }

  $letters = in_array($argument, $letters_en) ? $letters_en : $letters_he;

  $blocks = array();
  $limit = 50;

  // Get 50 nodes, starting from current letter. If there are less then 50
  // items - take nodes starting from next letter by alphabet and so on.
  while ($limit > 0) {
    $result = haskala_book_get_nodes_by_letter($argument, $limit);
    // Do not add empty result.
    if (!empty($result)) {
      $blocks[$argument] = $result;
    }

    $key = array_search($argument, $letters);
    if ($key == count($letters) - 1) {
      // This is the last letter in the alphabet.
      break;
    }
    $argument = $letters[$key + 1];

    $limit -= count($result);
  }

  // Create formatted html of block of the nodes to display.
  $variables['books_blocks'] = '';
  foreach ($blocks as $letter => $block) {
    $block_vars = array();
    $block_vars['letter'] = $letter;
    $block_vars['class'] = in_array($letter, $letters_he) ? 'he' : 'en';
    $block_vars['books_list'] = '';
    foreach ($block as $node) {
       $view = node_view($node, 'teaser');
       $block_vars['books_list'] .= drupal_render($view);
    }
    $variables['books_blocks'] .= theme('letter_books_list', $block_vars);
  }

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
 *
 * @return array
 *  Array with node objects.
 */
function haskala_book_get_nodes_by_letter($letter, $limit) {
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'node')
    ->propertyCondition('status', NODE_PUBLISHED)
    ->propertyCondition('type', 'book')
    ->propertyCondition('title', $letter, 'STARTS_WITH');
  if ($limit != 50) {
    // Could be that for some letter there are more than 50 items. In this case
    // if this is the first requested letter we should load all of them.
    $query->range(0, $limit);
  }

  $result = $query->execute();

  $nodes = !empty($result) ? node_load_multiple(array_keys($result['node'])) : array();

  return $nodes;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_book_books_list_content_type_render_edit_form($form, &$form_state) {
  return $form;
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

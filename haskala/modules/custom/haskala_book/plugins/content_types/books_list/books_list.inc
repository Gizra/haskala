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
  dpm($args);
  dpm(menu_get_item(current_path()));

  $variables = array();

  $letter = empty($args[0]) ? 'A' : strtoupper($args[0]);

  // Get english alphabet.
  $letters_en = range('A', 'Z');

  // Get hebrew alphabet;
  $letters_he = hebrew_alphabet_without_sofit();

  $links_en = array();
  $links_he = array();
  // Create English filter list.
  foreach ($letters_en as $letter) {
    $links_en[] = l($letter, '/books/' . $letter);
  }
  // Create Hebrew filter list.
  foreach ($letters_he as $letter) {
    $links_he[] = l($letter, '/books/' . $letter);
  }

  $variables['alphabet_en'] = theme('item_list', array('items' => $links_en));
  $variables['alphabet_he'] = theme('item_list', array('items' => $links_he));

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('books_list', $variables);

  return $block;
}

function hebrew_alphabet_without_sofit() {
  return array(
    'א',
    'ב',
    'ג',
    'ד',
    'ה',
    'ו',
    'ז',
    'ח',
    'ט',
    'י',
    'כ',
    'ל',
    'מ',
    'נ',
    'ס',
    'ע',
    'פ',
    'צ',
    'ק',
    'ר',
    'ש',
    'ת',
  );
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
      'alphabet' => NULL,
      'list' => NULL,
    ),
  );
}

<?php

$plugin = array(
  'title' => t('Alphabet Filter'),
  'description' => t('Display alphabet filter for pages.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_book_alphabet_filter_content_type_theme',
);

/**
 * Render callback.
 */
function haskala_book_alphabet_filter_content_type_render($subtype, $conf, $args, $context) {
  $item = menu_get_item(current_path());

  $variables = array();

  // Get english alphabet.
  $letters_en = range('A', 'Z');

  // Get hebrew alphabet;
  $letters_he = haskala_book_hebrew_alphabet_without_sofit();

  $links_en = array();
  $links_he = array();
  // Create English filter list.
  foreach ($letters_en as $letter) {
    $links_en[] = l($letter, $item['path'] . '/' . $letter);
  }
  // Create Hebrew filter list.
  foreach ($letters_he as $letter) {
    $links_he[] = l($letter, $item['path'] . '/' . $letter);
  }

  $variables['alphabet_en'] = theme('item_list', array('items' => $links_en));
  $variables['alphabet_he'] = theme('item_list', array('items' => $links_he));


  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('alphabet_filter', $variables);

  return $block;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_book_alphabet_filter_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Delegated hook_theme().
 */
function haskala_book_alphabet_filter_content_type_theme(&$theme, $plugin) {
  $theme['alphabet_filter'] = array(
    'template' => 'alphabet_filter',
    'path' => $plugin['path'],
    'variables' => array(
      'alphabet' => NULL,
    ),
  );
}

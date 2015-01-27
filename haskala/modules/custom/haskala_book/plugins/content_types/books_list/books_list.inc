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

  $letter = empty($args[0]) ? 'A' : $args[0];

  $variables = array();
  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('books_list', $variables);

  return $block;
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

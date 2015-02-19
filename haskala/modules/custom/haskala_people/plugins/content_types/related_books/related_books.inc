<?php

$plugin = array(
  'title' => t('Related books'),
  'description' => t('Display books related to a person'),
  'category' => t('Haskala'),
  'required context' => new ctools_context_optional(t('Node'), 'node'),
);

/**
 * Render callback.
 */
function haskala_people_related_books_content_type_render($subtype, $conf, $args, $context) {
  if (empty($context->data)) {
    return;
  }
  $node = $context->data;
  $book_nodes = node_load_multiple(haskala_people_get_person_related_books($node->nid));
  if (!$book_nodes) {
    return;
  }
  
  $block = new stdClass();
  $block->module = 'haskala_people';
  $block->title = t('Related books');
  $block->content = node_view_multiple($book_nodes);

  return $block;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_people_related_books_content_type_edit_form($form, &$form_state) {
  return $form;
}

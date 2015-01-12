<?php

$plugin = array(
  'title' => t('Book fields'),
  'description' => t('Add a node from your site as content.'),
  'category' => t('Haskala'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function haskala_book_book_fields_content_type_render($subtype, $conf, $panel_args, $context) {
//  if (!empty($context) && empty($context->data)) {
//    return;
//  }

  $node = $context->data;
  dpm($node);
  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = 'content!';

  return $block;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_book_book_fields_content_type_edit_form($form, &$form_state) {

}




<?php

$plugin = array(
  'title' => t('Book fields'),
//  'description' => t('Add a node from your site as content.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_book_book_fields_content_type_theme',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function haskala_book_book_fields_content_type_render($subtype, $conf, $args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $node = $context->data;
  //dpm($node);

  $parent_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');
  //dpm($parent_group->children);

  $field_groups = array();

  foreach ($parent_group->children as $group_name) {
    $group = field_group_load_field_group($group_name, 'node', 'book', 'default');
    //dpm($group);
    $field_groups[] = $group;
  }

  $variables = array(
    'nid' => $node->nid,
    'title' => $node-title,
    'parent' => $parent_group,
    'groups' => $field_groups,

    'grouped_fields' => theme('haskala_book', $grouped_fileds_variables),
  );

  theme('parent_group', $parent_group);
  theme('groups', $field_groups);

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content =  theme('haskala_book', $variables);
  //$block->content =  'content!';

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


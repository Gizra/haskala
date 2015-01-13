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

  $top_details_group = field_group_load_field_group('group_top_details', 'node', 'book', 'default');
  $top_details_group_fields = array();
  foreach($top_details_group->children as $field_name) {
    //dpm($field_name);
    //dpm($node->{$field_name}['und'][0]['value']);
    // Check if the field isn't empty
    if ($node->{$field_name}['und']['0']['value'] != '0') {
      //$top_details_group_fields[] = $node->{$field_name};
      $top_details_group_fields[] = field_view_field('node', $node, $field_name);
    }

  }

  $parent_group = field_group_load_field_group('group_horizontal_tabs', 'node', 'book', 'default');
  //dpm($parent_group->children);

  $field_groups = array();

  foreach ($parent_group->children as $group_name) {
    $group = field_group_load_field_group($group_name, 'node', 'book', 'default');
    //dpm($group);
    $field_groups[$group->label] = array();
    foreach($group->children as $field_name) {
      // Check if the field isn't empty
      //if ($node->{$field_name}['und']['0']['value'] != '0') {
        //$field_groups[$group->label][] = $node->{$field_name};
        $field_groups[$group->label][] = field_view_field('node', $node, $field_name);
      //}
    }
  }

  //dpm($top_details_group_fields);
  /*$foo = field_view_field('node', $node, 'field_full_title');
  dpm(render($foo), 'foo');
  dpm($node);*/
  $grouped_fileds_variables = array(
    'title' => $node->title,
    'top_details_group' => $top_details_group_fields,
    'groups' => $field_groups,
  );

  $variables = array(
    'nid' => $node->nid,
    'grouped_fields' => theme('haskala_book_fields', $grouped_fileds_variables),
    //'grouped_fields' => theme('haskala_book', $field_groups),
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


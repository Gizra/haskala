<?php
/**
 * @file
 * haskala_mention.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function haskala_mention_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mentions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mentions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_book' => 'field_book',
    'field_mentionee' => 'field_mentionee',
    'field_mentionee_description' => 'field_mentionee_description',
    'field_mentionee_city' => 'field_mentionee_city',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_book';
  $handler->display->display_options['style_options']['info'] = array(
    'field_book' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mentionee' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mentionee_description' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mentionee_city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Mentioned in book */
  $handler->display->display_options['fields']['field_book']['id'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['table'] = 'field_data_field_book';
  $handler->display->display_options['fields']['field_book']['field'] = 'field_book';
  $handler->display->display_options['fields']['field_book']['label'] = 'Book';
  $handler->display->display_options['fields']['field_book']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Mentionee */
  $handler->display->display_options['fields']['field_mentionee']['id'] = 'field_mentionee';
  $handler->display->display_options['fields']['field_mentionee']['table'] = 'field_data_field_mentionee';
  $handler->display->display_options['fields']['field_mentionee']['field'] = 'field_mentionee';
  $handler->display->display_options['fields']['field_mentionee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Description of mentionee */
  $handler->display->display_options['fields']['field_mentionee_description']['id'] = 'field_mentionee_description';
  $handler->display->display_options['fields']['field_mentionee_description']['table'] = 'field_data_field_mentionee_description';
  $handler->display->display_options['fields']['field_mentionee_description']['field'] = 'field_mentionee_description';
  /* Field: Content: Location city of mentionee */
  $handler->display->display_options['fields']['field_mentionee_city']['id'] = 'field_mentionee_city';
  $handler->display->display_options['fields']['field_mentionee_city']['table'] = 'field_data_field_mentionee_city';
  $handler->display->display_options['fields']['field_mentionee_city']['field'] = 'field_mentionee_city';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mention' => 'mention',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/mentions';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mentions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['mentions'] = $view;

  return $export;
}

<?php
/**
 * @file
 * page_element.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function page_element_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'page_element';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page element';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_video_image' => 0,
    'body' => 0,
  );
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_content']['id'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['table'] = 'field_data_field_content';
  $handler->display->display_options['fields']['field_content']['field'] = 'field_content';
  $handler->display->display_options['fields']['field_content']['label'] = '';
  $handler->display->display_options['fields']['field_content']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: page (field_page) */
  $handler->display->display_options['arguments']['field_page_value']['id'] = 'field_page_value';
  $handler->display->display_options['arguments']['field_page_value']['table'] = 'field_data_field_page';
  $handler->display->display_options['arguments']['field_page_value']['field'] = 'field_page_value';
  $handler->display->display_options['arguments']['field_page_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_page_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_page_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_value']['limit'] = '0';
  /* Contextual filter: Content: Location (field_location) */
  $handler->display->display_options['arguments']['field_location_value']['id'] = 'field_location_value';
  $handler->display->display_options['arguments']['field_location_value']['table'] = 'field_data_field_location';
  $handler->display->display_options['arguments']['field_location_value']['field'] = 'field_location_value';
  $handler->display->display_options['arguments']['field_location_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_location_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_location_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_location_value']['limit'] = '0';
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
    'page_element' => 'page_element',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_page_element');
  $handler->display->display_options['argument_input'] = array(
    'field_page_value' => array(
      'type' => 'user',
      'context' => 'entity:restful_token_auth.id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Page',
    ),
    'field_location_value' => array(
      'type' => 'user',
      'context' => 'entity:restful_token_auth.id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Location',
    ),
  );
  $translatables['page_element'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Edit'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['page_element'] = $view;

  return $export;
}

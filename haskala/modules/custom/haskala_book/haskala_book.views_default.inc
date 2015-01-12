<?php
/**
 * @file
 * haskala_book.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function haskala_book_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book info';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content: Edition of book (field_book) */
  $handler->display->display_options['arguments']['field_book_target_id']['id'] = 'field_book_target_id';
  $handler->display->display_options['arguments']['field_book_target_id']['table'] = 'field_data_field_book';
  $handler->display->display_options['arguments']['field_book_target_id']['field'] = 'field_book_target_id';
  $handler->display->display_options['arguments']['field_book_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_book_target_id']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Translation - Entity Reference */
  $handler = $view->new_display('entityreference', 'Translation - Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Translation';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Editions - Entity Reference 2 */
  $handler = $view->new_display('entityreference', 'Editions - Entity Reference 2', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Editions';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_total_number_of_editions' => 'field_total_number_of_editions',
    'field_last_known_edition' => 'field_last_known_edition',
    'field_references_for_editions' => 'field_references_for_editions',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Total number of editions */
  $handler->display->display_options['fields']['field_total_number_of_editions']['id'] = 'field_total_number_of_editions';
  $handler->display->display_options['fields']['field_total_number_of_editions']['table'] = 'field_data_field_total_number_of_editions';
  $handler->display->display_options['fields']['field_total_number_of_editions']['field'] = 'field_total_number_of_editions';
  $handler->display->display_options['fields']['field_total_number_of_editions']['label'] = 'Total number of editions -';
  $handler->display->display_options['fields']['field_total_number_of_editions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_number_of_editions']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Last known edition */
  $handler->display->display_options['fields']['field_last_known_edition']['id'] = 'field_last_known_edition';
  $handler->display->display_options['fields']['field_last_known_edition']['table'] = 'field_data_field_last_known_edition';
  $handler->display->display_options['fields']['field_last_known_edition']['field'] = 'field_last_known_edition';
  $handler->display->display_options['fields']['field_last_known_edition']['label'] = 'Last known edition -';
  $handler->display->display_options['fields']['field_last_known_edition']['element_label_colon'] = FALSE;
  /* Field: Content: References for editions */
  $handler->display->display_options['fields']['field_references_for_editions']['id'] = 'field_references_for_editions';
  $handler->display->display_options['fields']['field_references_for_editions']['table'] = 'field_data_field_references_for_editions';
  $handler->display->display_options['fields']['field_references_for_editions']['field'] = 'field_references_for_editions';
  $handler->display->display_options['fields']['field_references_for_editions']['label'] = 'References -';
  $handler->display->display_options['fields']['field_references_for_editions']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year of edition (field_edition_year) */
  $handler->display->display_options['sorts']['field_edition_year_value']['id'] = 'field_edition_year_value';
  $handler->display->display_options['sorts']['field_edition_year_value']['table'] = 'field_data_field_edition_year';
  $handler->display->display_options['sorts']['field_edition_year_value']['field'] = 'field_edition_year_value';
  $handler->display->display_options['sorts']['field_edition_year_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['book_info'] = $view;

  return $export;
}

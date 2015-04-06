<?php
/**
 * @file
 * haskala_terms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function haskala_terms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cities_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Cities map';
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
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_geolocation' => 'field_geolocation',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'field_geolocation';
  $handler->display->display_options['style_options']['default_marker_color'] = 'marker-active';
  $handler->display->display_options['style_options']['center_option'] = '4';
  $handler->display->display_options['style_options']['gps_roles'] = array(
    1 => 0,
    2 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['style_options']['map_options'] = '{
"mapTypeId":"roadmap", 
"disableDefaultUI":true, 
"zoom":4, 
"zoomControl":true, 
"scaleControl":true,
"styles":[{"featureType":"all", "stylers":[{"saturation":-80, "lightness": 80}] }]
}
 ';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'cities' => 'cities',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $export['cities_map'] = $view;

  $view = new view();
  $view->name = 'city_books';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'City books';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'pane-term-nodes-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array();
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = '';
  $handler->display->display_options['style_options']['center_option'] = '1';
  $handler->display->display_options['style_options']['gps_roles'] = array(
    1 => '1',
    2 => '2',
    4 => 0,
    3 => 0,
  );
  /* Relationship: Content: Place of publication as it appears in the book (field_publication_place) */
  $handler->display->display_options['relationships']['field_publication_place_tid']['id'] = 'field_publication_place_tid';
  $handler->display->display_options['relationships']['field_publication_place_tid']['table'] = 'field_data_field_publication_place';
  $handler->display->display_options['relationships']['field_publication_place_tid']['field'] = 'field_publication_place_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['relationship'] = 'field_publication_place_tid';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Place of publication as it appears in the book (field_publication_place) */
  $handler->display->display_options['arguments']['field_publication_place_tid']['id'] = 'field_publication_place_tid';
  $handler->display->display_options['arguments']['field_publication_place_tid']['table'] = 'field_data_field_publication_place';
  $handler->display->display_options['arguments']['field_publication_place_tid']['field'] = 'field_publication_place_tid';
  $handler->display->display_options['arguments']['field_publication_place_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_publication_place_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_publication_place_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_publication_place_tid']['summary_options']['items_per_page'] = '25';
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
    'book' => 'book',
  );

  /* Display: Books by city */
  $handler = $view->new_display('panel_pane', 'Books by city', 'panel_pane_city_books');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_publication_place_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Place of publication as it appears in the book (field_publication_place)',
    ),
  );

  /* Display: Map */
  $handler = $view->new_display('panel_pane', 'Map', 'panel_pane_map');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pane-cities-map-panel-pane-1';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_geolocation',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
    'field_geolocation' => 'field_geolocation',
  );
  $handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'field_geolocation';
  $handler->display->display_options['style_options']['default_marker_color'] = 'marker-active';
  $handler->display->display_options['style_options']['center_option'] = '4';
  $handler->display->display_options['style_options']['gps_roles'] = array(
    1 => 0,
    2 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['style_options']['map_options'] = '{
"mapTypeId":"roadmap", 
"disableDefaultUI":true, 
"zoom":4, 
"zoomControl":true, 
"scaleControl":true,
"styles":[{"featureType":"all", "stylers":[{"saturation":-80, "lightness": 80}] }]
}
 ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Place of publication as it appears in the book (field_publication_place) */
  $handler->display->display_options['relationships']['field_publication_place_tid']['id'] = 'field_publication_place_tid';
  $handler->display->display_options['relationships']['field_publication_place_tid']['table'] = 'field_data_field_publication_place';
  $handler->display->display_options['relationships']['field_publication_place_tid']['field'] = 'field_publication_place_tid';
  $handler->display->display_options['relationships']['field_publication_place_tid']['label'] = 'field_publication_place';
  $handler->display->display_options['relationships']['field_publication_place_tid']['required'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_publication_place_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Place of publication as it appears in the book (field_publication_place)',
    ),
  );
  $export['city_books'] = $view;

  return $export;
}

<?php
/**
 * @file
 * haskala_book.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function haskala_book_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_structure|node|book|default';
  $field_group->group_name = 'group_book_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Book structure',
    'weight' => '2',
    'children' => array(
      0 => 'field_alignment',
      1 => 'field_book_structure_notes',
      2 => 'field_epilogue',
      3 => 'field_fonts',
      4 => 'field_height',
      5 => 'field_illustrations_diagrams',
      6 => 'field_language',
      7 => 'field_language_of_footnotes',
      8 => 'field_languages_number',
      9 => 'field_location_of_footnotes',
      10 => 'field_pages_number',
      11 => 'field_preface',
      12 => 'field_table_of_conten',
      13 => 'field_typography',
      14 => 'field_width',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Book structure',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_book_structure|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottom_details|node|book|form';
  $field_group->group_name = 'group_bottom_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom details',
    'weight' => '3',
    'children' => array(
      0 => 'group_structure',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_bottom_details|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog_numbers|node|book|form';
  $field_group->group_name = 'group_catalog_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog numbers',
    'weight' => '6',
    'children' => array(
      0 => 'field_bar_ilan_library_id',
      1 => 'field_berlin_library_id',
      2 => 'field_frankfurt_library_id',
      3 => 'field_huji_library_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_catalog_numbers|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_horizontal_tabs|node|book|default';
  $field_group->group_name = 'group_horizontal_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'horizontal tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_book_structure',
      1 => 'group_prefaces',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_horizontal_tabs|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prefaces|node|book|default';
  $field_group->group_name = 'group_prefaces';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Prefaces',
    'weight' => '3',
    'children' => array(
      0 => 'field_preface_notes',
      1 => 'field_preface_number',
      2 => 'field_preface_title',
      3 => 'field_writer_of_preface',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Prefaces',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-prefaces field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_prefaces|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prefaces|node|book|form';
  $field_group->group_name = 'group_prefaces';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prefaces',
    'weight' => '4',
    'children' => array(
      0 => 'field_preface_notes',
      1 => 'field_preface_number',
      2 => 'field_preface_title',
      3 => 'field_writer_of_preface',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_prefaces|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_structure|node|book|form';
  $field_group->group_name = 'group_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Book structure',
    'weight' => '74',
    'children' => array(
      0 => 'field_alignment',
      1 => 'field_book_structure_notes',
      2 => 'field_epilogue',
      3 => 'field_fonts',
      4 => 'field_height',
      5 => 'field_illustrations_diagrams',
      6 => 'field_language',
      7 => 'field_language_of_footnotes',
      8 => 'field_languages_number',
      9 => 'field_location_of_footnotes',
      10 => 'field_pages_number',
      11 => 'field_preface',
      12 => 'field_table_of_conten',
      13 => 'field_typography',
      14 => 'field_width',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_structure|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_details|node|book|default';
  $field_group->group_name = 'group_top_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top details',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_title',
      1 => 'field_presented_as_original',
      2 => 'field_sources_exist',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top details',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_details|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_details|node|book|form';
  $field_group->group_name = 'group_top_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Top details',
    'weight' => '2',
    'children' => array(
      0 => 'field_full_title',
      1 => 'field_presented_as_original',
      2 => 'field_sources_exist',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Top details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'top-details',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_top_details|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics|node|book|form';
  $field_group->group_name = 'group_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '5',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_topics|node|book|form'] = $field_group;

  return $export;
}

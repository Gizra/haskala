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
  $field_group->identifier = 'group_book_reception|node|book|default';
  $field_group->group_name = 'group_book_reception';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Book\'s reception in its time',
    'weight' => '63',
    'children' => array(
      0 => 'field_contemporary_references',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-reception field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_book_reception|node|book|default'] = $field_group;

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
    'weight' => '58',
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
      0 => 'group_catalog_numbers',
      1 => 'group_prefaces',
      2 => 'group_structure',
      3 => 'group_topics',
      4 => 'group_volumes',
      5 => 'group_textual_models',
      6 => 'group_target_audience',
      7 => 'group_references_bibliography',
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
  $field_group->identifier = 'group_catalog_numbers|node|book|default';
  $field_group->group_name = 'group_catalog_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Catalog numbers',
    'weight' => '65',
    'children' => array(
      0 => 'field_bar_ilan_library_id',
      1 => 'field_berlin_library_id',
      2 => 'field_catalog_numbers_notes',
      3 => 'field_frankfurt_library_id',
      4 => 'field_huji_library_id',
      5 => 'field_link_to_digital_book',
      6 => 'field_tel_aviv_library_id',
      7 => 'field_harvard_library_id',
      8 => 'field_new_york_library_id',
      9 => 'field_british_library_id',
      10 => 'field_other_libraries',
      11 => 'field_book_not_available',
      12 => 'field_book_availability_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Catalog numbers',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-catalog-numbers field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_catalog_numbers|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catalog_numbers|node|book|form';
  $field_group->group_name = 'group_catalog_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Catalog numbers',
    'weight' => '77',
    'children' => array(
      0 => 'field_bar_ilan_library_id',
      1 => 'field_berlin_library_id',
      2 => 'field_catalog_numbers_notes',
      3 => 'field_frankfurt_library_id',
      4 => 'field_huji_library_id',
      5 => 'field_link_to_digital_book',
      6 => 'field_tel_aviv_library_id',
      7 => 'field_harvard_library_id',
      8 => 'field_new_york_library_id',
      9 => 'field_british_library_id',
      10 => 'field_other_libraries',
      11 => 'field_book_not_available',
      12 => 'field_book_availability_notes',
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
      0 => 'group_book_reception',
      1 => 'group_book_structure',
      2 => 'group_catalog_numbers',
      3 => 'group_prefaces',
      4 => 'group_preservation',
      5 => 'group_references_bibliography',
      6 => 'group_target_audience',
      7 => 'group_textual_models',
      8 => 'group_topics',
      9 => 'group_valumes',
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
    'weight' => '59',
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
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Prefaces',
    'weight' => '73',
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
  $field_group->identifier = 'group_preservation|node|book|default';
  $field_group->group_name = 'group_preservation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Preservation in the public consciousness',
    'weight' => '64',
    'children' => array(
      0 => 'field_later_references',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-preservation field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_preservation|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_bibliography|node|book|default';
  $field_group->group_name = 'group_references_bibliography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'References and bibliography',
    'weight' => '66',
    'children' => array(
      0 => 'field_copy_of_book_used',
      1 => 'field_references_notes',
      2 => 'field_secondary_sources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references-bibliography field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_references_bibliography|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_references_bibliography|node|book|form';
  $field_group->group_name = 'group_references_bibliography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'References and bibliography',
    'weight' => '78',
    'children' => array(
      0 => 'field_copy_of_book_used',
      1 => 'field_references_notes',
      2 => 'field_secondary_sources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-references-bibliography field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_references_bibliography|node|book|form'] = $field_group;

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
    'weight' => '72',
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
  $field_group->identifier = 'group_target_audience|node|book|default';
  $field_group->group_name = 'group_target_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Target audience',
    'weight' => '62',
    'children' => array(
      0 => 'field_target_audience',
      1 => 'field_target_audience_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-target-audience field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_target_audience|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_target_audience|node|book|form';
  $field_group->group_name = 'group_target_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Target audience',
    'weight' => '76',
    'children' => array(
      0 => 'field_target_audience',
      1 => 'field_target_audience_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-target-audience field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_target_audience|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textual_models|node|book|default';
  $field_group->group_name = 'group_textual_models';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Textual models',
    'weight' => '60',
    'children' => array(
      0 => 'field_textual_models_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-textual-models field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_textual_models|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textual_models|node|book|form';
  $field_group->group_name = 'group_textual_models';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Textual models',
    'weight' => '74',
    'children' => array(
      0 => 'field_textual_models_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-textual-models field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_textual_models|node|book|form'] = $field_group;

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
  $field_group->identifier = 'group_topics|node|book|default';
  $field_group->group_name = 'group_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '61',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_topics_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-topics field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_topics|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics|node|book|form';
  $field_group->group_name = 'group_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '75',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_topics_notes',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_valumes|node|book|default';
  $field_group->group_name = 'group_valumes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Volumes',
    'weight' => '57',
    'children' => array(
      0 => 'field_examined_volume_number',
      1 => 'field_name_of_series',
      2 => 'field_other_volumes',
      3 => 'field_volumes_notes',
      4 => 'field_volumes_published_number',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Volumes',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-valumes field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_valumes|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_volumes|node|book|form';
  $field_group->group_name = 'group_volumes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Volumes',
    'weight' => '71',
    'children' => array(
      0 => 'field_examined_volume_number',
      1 => 'field_name_of_series',
      2 => 'field_other_volumes',
      3 => 'field_volumes_notes',
      4 => 'field_volumes_published_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-volumes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_volumes|node|book|form'] = $field_group;

  return $export;
}

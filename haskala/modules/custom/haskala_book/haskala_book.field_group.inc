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
    'weight' => '72',
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
    'weight' => '67',
    'children' => array(
      0 => 'field_alignment',
      1 => 'field_book_structure_notes',
      2 => 'field_contents_table_notes',
      3 => 'field_diagrams_book_pages',
      4 => 'field_diagrams_notes',
      5 => 'field_diagrams_text',
      6 => 'field_epilogue',
      7 => 'field_epilogue_notes',
      8 => 'field_fonts',
      9 => 'field_height',
      10 => 'field_illustrations_diagrams',
      11 => 'field_language',
      12 => 'field_language_of_footnotes',
      13 => 'field_languages_number',
      14 => 'field_location_of_footnotes',
      15 => 'field_occasional_words_languages',
      16 => 'field_pages_number',
      17 => 'field_preface',
      18 => 'field_structure_preface_notes',
      19 => 'field_table_of_conten',
      20 => 'field_typography',
      21 => 'field_width',
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
      2 => 'group_publisher_printing_press',
      3 => 'group_references_bibliography',
      4 => 'group_structure',
      5 => 'group_target_audience',
      6 => 'group_textual_models',
      7 => 'group_topics',
      8 => 'group_volumes',
      9 => 'group_translation',
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
    'weight' => '74',
    'children' => array(
      0 => 'field_bar_ilan_library_id',
      1 => 'field_berlin_library_id',
      2 => 'field_book_availability_notes',
      3 => 'field_book_not_available',
      4 => 'field_british_library_id',
      5 => 'field_catalog_numbers_notes',
      6 => 'field_frankfurt_library_id',
      7 => 'field_harvard_library_id',
      8 => 'field_huji_library_id',
      9 => 'field_link_to_digital_book',
      10 => 'field_new_york_library_id',
      11 => 'field_other_libraries',
      12 => 'field_tel_aviv_library_id',
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
    'weight' => '113',
    'children' => array(
      0 => 'field_bar_ilan_library_id',
      1 => 'field_berlin_library_id',
      2 => 'field_book_availability_notes',
      3 => 'field_book_not_available',
      4 => 'field_british_library_id',
      5 => 'field_catalog_numbers_notes',
      6 => 'field_frankfurt_library_id',
      7 => 'field_harvard_library_id',
      8 => 'field_huji_library_id',
      9 => 'field_link_to_digital_book',
      10 => 'field_new_york_library_id',
      11 => 'field_other_libraries',
      12 => 'field_tel_aviv_library_id',
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
  $field_group->identifier = 'group_diagrams|node|book|form';
  $field_group->group_name = 'group_diagrams';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_structure';
  $field_group->data = array(
    'label' => 'Diagrams',
    'weight' => '83',
    'children' => array(
      0 => 'field_diagrams_book_pages',
      1 => 'field_diagrams_notes',
      2 => 'field_diagrams_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-diagrams field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_diagrams|node|book|form'] = $field_group;

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
      5 => 'group_publisher_printing_press',
      6 => 'group_references_bibliography',
      7 => 'group_target_audience',
      8 => 'group_textual_models',
      9 => 'group_topics',
      10 => 'group_translatation',
      11 => 'group_valumes',
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
    'weight' => '68',
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
    'weight' => '109',
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
    'weight' => '73',
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
  $field_group->identifier = 'group_producers|node|production|default';
  $field_group->group_name = 'group_producers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'production';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book producers',
    'weight' => '1',
    'children' => array(
      0 => 'field_name_in_book',
      1 => 'field_person_book_references',
      2 => 'field_person_name_appear',
      3 => 'field_producer',
      4 => 'field_producer_evidence',
      5 => 'field_religion',
      6 => 'field_role',
      7 => 'field_roles_notes',
      8 => 'field_writing_age',
      9 => 'field_writing_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_producers|node|production|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_printing_press|node|book|default';
  $field_group->group_name = 'group_publisher_printing_press';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Publisher/ Printing press',
    'weight' => '66',
    'children' => array(
      0 => 'field_format_of_publication_date',
      1 => 'field_gregorian_year',
      2 => 'field_gregorian_year_pub_other',
      3 => 'field_heb_year_publication_other',
      4 => 'field_hebrew_year_of_publication',
      5 => 'field_price',
      6 => 'field_printing_press_notes',
      7 => 'field_printing_press_references',
      8 => 'field_publication_place',
      9 => 'field_publication_place_other',
      10 => 'field_publication_year_in_book',
      11 => 'field_publication_year_in_other',
      12 => 'field_publisher_name',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publisher-printing-press field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_publisher_printing_press|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_printing_press|node|book|form';
  $field_group->group_name = 'group_publisher_printing_press';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Publisher/ Printing press',
    'weight' => '107',
    'children' => array(
      0 => 'field_format_of_publication_date',
      1 => 'field_gregorian_year',
      2 => 'field_gregorian_year_pub_other',
      3 => 'field_heb_year_publication_other',
      4 => 'field_hebrew_year_of_publication',
      5 => 'field_price',
      6 => 'field_printing_press_notes',
      7 => 'field_printing_press_references',
      8 => 'field_publication_place',
      9 => 'field_publication_place_other',
      10 => 'field_publication_year_in_book',
      11 => 'field_publication_year_in_other',
      12 => 'field_publisher_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publisher-printing-press field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_publisher_printing_press|node|book|form'] = $field_group;

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
    'weight' => '75',
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
    'weight' => '114',
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
    'weight' => '108',
    'children' => array(
      0 => 'field_alignment',
      1 => 'field_book_structure_notes',
      2 => 'field_contents_table_notes',
      3 => 'field_epilogue',
      4 => 'field_epilogue_notes',
      5 => 'field_fonts',
      6 => 'field_height',
      7 => 'field_illustrations_diagrams',
      8 => 'field_language',
      9 => 'field_language_of_footnotes',
      10 => 'field_languages_number',
      11 => 'field_location_of_footnotes',
      12 => 'field_occasional_words_languages',
      13 => 'field_pages_number',
      14 => 'field_preface',
      15 => 'field_structure_preface_notes',
      16 => 'field_table_of_conten',
      17 => 'field_typography',
      18 => 'field_width',
      19 => 'group_diagrams',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-structure field-group-fieldset',
        'required_fields' => 1,
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
    'weight' => '71',
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
    'weight' => '112',
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
    'weight' => '69',
    'children' => array(
      0 => 'field_main_textual_models',
      1 => 'field_secondary_textual_models',
      2 => 'field_textual_models_notes',
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
    'weight' => '110',
    'children' => array(
      0 => 'field_main_textual_models',
      1 => 'field_secondary_textual_models',
      2 => 'field_textual_models_notes',
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
    'weight' => '70',
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
    'weight' => '111',
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
  $field_group->identifier = 'group_translatation|node|book|default';
  $field_group->group_name = 'group_translatation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Translation',
    'weight' => '64',
    'children' => array(
      0 => 'field_book',
      1 => 'field_translation_city',
      2 => 'field_translation_references',
      3 => 'field_translation_year',
      4 => 'field_translator',
      5 => 'field_translation_type',
      6 => 'field_original_type',
      7 => 'field_original_title',
      8 => 'field_original_title_elsewhere',
      9 => 'field_original_title_else_refer',
      10 => 'field_bibliographical_citations',
      11 => 'field_original_language',
      12 => 'field_orginal_publication_year',
      13 => 'field_original_publisher',
      14 => 'field_orginal_publication_place',
      15 => 'field_field_orginal_author_in_or',
      16 => 'field_orginal_author_elsewhere',
      17 => 'field_orginal_author_else_refer',
      18 => 'field_translation_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-translatation field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_translatation|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_translation|node|book|form';
  $field_group->group_name = 'group_translation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bottom_details';
  $field_group->data = array(
    'label' => 'Translation',
    'weight' => '105',
    'children' => array(
      0 => 'field_translation_type',
      1 => 'field_original_type',
      2 => 'field_original_title',
      3 => 'field_original_title_elsewhere',
      4 => 'field_original_title_else_refer',
      5 => 'field_bibliographical_citations',
      6 => 'field_original_language',
      7 => 'field_orginal_publication_year',
      8 => 'field_original_publisher',
      9 => 'field_orginal_publication_place',
      10 => 'field_field_orginal_author_in_or',
      11 => 'field_orginal_author_elsewhere',
      12 => 'field_orginal_author_else_refer',
      13 => 'field_translation_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-translation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_translation|node|book|form'] = $field_group;

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
    'weight' => '65',
    'children' => array(
      0 => 'field_examined_volume_number',
      1 => 'field_name_of_series',
      2 => 'field_other_books_names',
      3 => 'field_other_volumes',
      4 => 'field_planned_volumes',
      5 => 'field_printed_originally',
      6 => 'field_series_part',
      7 => 'field_volumes_notes',
      8 => 'field_volumes_published_number',
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
    'weight' => '106',
    'children' => array(
      0 => 'field_examined_volume_number',
      1 => 'field_name_of_series',
      2 => 'field_other_books_names',
      3 => 'field_other_volumes',
      4 => 'field_planned_volumes',
      5 => 'field_printed_originally',
      6 => 'field_series_part',
      7 => 'field_volumes_notes',
      8 => 'field_volumes_published_number',
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

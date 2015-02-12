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
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Book\'s reception in its time',
    'weight' => '125',
    'children' => array(
      0 => 'field_bans',
      1 => 'field_censorship',
      2 => 'field_contemporary_disputes',
      3 => 'field_contemporary_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-book-reception field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_book_reception|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_reception|node|book|form';
  $field_group->group_name = 'group_book_reception';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Book\'s reception in its time',
    'weight' => '120',
    'children' => array(
      0 => 'field_bans',
      1 => 'field_censorship',
      2 => 'field_contemporary_disputes',
      3 => 'field_contemporary_references',
      4 => 'field_target_general_notes',
      5 => 'group_preservation',
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
        'classes' => 'group-book-reception field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_book_reception|node|book|form'] = $field_group;

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
    'weight' => '132',
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
  $field_group->identifier = 'group_book_type|node|book|default';
  $field_group->group_name = 'group_book_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Type of book',
    'weight' => '126',
    'children' => array(
      0 => 'field_book',
      1 => 'field_contradict_new_edition',
      2 => 'field_contradict_orginal',
      3 => 'field_expanded_in_edition',
      4 => 'field_expanded_in_translations',
      5 => 'field_old_edition',
      6 => 'field_presented_as_original',
      7 => 'field_presented_as_translation',
      8 => 'field_presented_new_edition',
      9 => 'field_presented_new_edition_note',
      10 => 'field_presented_new_edition_refe',
      11 => 'field_presented_original_notes',
      12 => 'field_presented_original_referen',
      13 => 'field_presented_translatio_notes',
      14 => 'field_presented_translation_refe',
      15 => 'field_title_in_latin_characters',
      16 => 'field_translation_contradict',
      17 => 'group_textual_cultural_sources',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-type field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_book_type|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_type|node|book|form';
  $field_group->group_name = 'group_book_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type of book',
    'weight' => '8',
    'children' => array(
      0 => 'field_book',
      1 => 'field_contradict_new_edition',
      2 => 'field_contradict_orginal',
      3 => 'field_expanded_in_edition',
      4 => 'field_expanded_in_translations',
      5 => 'field_full_title',
      6 => 'field_old_edition',
      7 => 'field_presented_as_original',
      8 => 'field_presented_as_translation',
      9 => 'field_presented_new_edition',
      10 => 'field_presented_new_edition_note',
      11 => 'field_presented_new_edition_refe',
      12 => 'field_presented_original_notes',
      13 => 'field_presented_original_referen',
      14 => 'field_presented_translatio_notes',
      15 => 'field_presented_translation_refe',
      16 => 'field_title_in_latin_characters',
      17 => 'field_translation_contradict',
      18 => 'group_textual_cultural_sources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-type field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_book_type|node|book|form'] = $field_group;

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
      0 => 'group_new_edition',
      1 => 'group_book_type',
      2 => 'group_catalog_numbers',
      3 => 'group_editions',
      4 => 'group_persons_mentioned',
      5 => 'group_prefaces',
      6 => 'group_publisher_printing_press',
      7 => 'group_references_bibliography',
      8 => 'group_structure',
      9 => 'group_target_audience',
      10 => 'group_textual_models',
      11 => 'group_topics',
      12 => 'group_translation',
      13 => 'group_volumes',
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
    'weight' => '138',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Catalog numbers',
    'weight' => '20',
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
  $field_group->identifier = 'group_editions|node|book|default';
  $field_group->group_name = 'group_editions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Editions',
    'weight' => '131',
    'children' => array(
      0 => 'field_editions_notes',
      1 => 'field_last_known_edition',
      2 => 'field_references_for_editions',
      3 => 'field_total_number_of_editions',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editions field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_editions|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editions|node|book|form';
  $field_group->group_name = 'group_editions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editions',
    'weight' => '13',
    'children' => array(
      0 => 'field_editions_notes',
      1 => 'field_last_known_edition',
      2 => 'field_references_for_editions',
      3 => 'field_total_number_of_editions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_editions|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editions|node|edition|default';
  $field_group->group_name = 'group_editions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'edition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editions',
    'weight' => '1',
    'children' => array(
      0 => 'field_edition_changes',
      1 => 'field_edition_city',
      2 => 'field_edition_references',
      3 => 'field_edition_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editions field-group-fieldset',
      ),
    ),
  );
  $export['group_editions|node|edition|default'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'group_book_structure',
      1 => 'group_catalog_numbers',
      2 => 'group_editions',
      3 => 'group_new_edition',
      4 => 'group_persons_mentioned',
      5 => 'group_prefaces',
      6 => 'group_publisher_printing_press',
      7 => 'group_references_bibliography',
      8 => 'group_target_audience',
      9 => 'group_textual_models',
      10 => 'group_topics',
      11 => 'group_translatation',
      12 => 'group_valumes',
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
  $field_group->identifier = 'group_new_edition|node|book|default';
  $field_group->group_name = 'group_new_edition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'New edition',
    'weight' => '128',
    'children' => array(
      0 => 'field_new_edition_general_notes',
      1 => 'field_new_edition_type_else_note',
      2 => 'field_new_edition_type_else_ref',
      3 => 'field_new_edition_type_elsewhere',
      4 => 'field_new_edition_type_in_text',
      5 => 'field_new_edition_type_notes',
      6 => 'field_new_edition_type_reference',
      7 => 'field_old_author_addition_names',
      8 => 'field_old_author_names_other_sor',
      9 => 'field_old_name_in_book',
      10 => 'field_old_text_author_in_book',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-new-edition field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_new_edition|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_new_edition|node|book|form';
  $field_group->group_name = 'group_new_edition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'New edition',
    'weight' => '10',
    'children' => array(
      0 => 'field_new_edition_general_notes',
      1 => 'field_new_edition_type_else_note',
      2 => 'field_new_edition_type_else_ref',
      3 => 'field_new_edition_type_elsewhere',
      4 => 'field_new_edition_type_in_text',
      5 => 'field_new_edition_type_notes',
      6 => 'field_new_edition_type_reference',
      7 => 'field_old_author_addition_names',
      8 => 'field_old_author_names_other_sor',
      9 => 'field_old_name_in_book',
      10 => 'field_old_text_author_in_book',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-new-edition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_new_edition|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_persons_mentioned|node|book|default';
  $field_group->group_name = 'group_persons_mentioned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_horizontal_tabs';
  $field_group->data = array(
    'label' => 'Persons mentioned in book',
    'weight' => '134',
    'children' => array(
      0 => 'field_dedications',
      1 => 'field_dedications_notes',
      2 => 'field_founders_notes',
      3 => 'field_funders',
      4 => 'field_mention_general_notes',
      5 => 'field_personal_address',
      6 => 'field_personal_addresse_notes',
      7 => 'field_printers',
      8 => 'field_printers_notes',
      9 => 'field_proofreaders',
      10 => 'field_proofreaders_notes',
      11 => 'field_rabbinical_appro_notes',
      12 => 'field_rabbinical_approbations',
      13 => 'field_recommendations',
      14 => 'field_recommendations_notes',
      15 => 'field_sellers',
      16 => 'field_sellers_notes',
      17 => 'field_subscribers',
      18 => 'field_subscribers_notes',
      19 => 'field_subscription_appeal',
      20 => 'field_subscription_appeal_notes',
      21 => 'field_thanks',
      22 => 'field_thanks_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-persons-mentioned field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_persons_mentioned|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_persons_mentioned|node|book|form';
  $field_group->group_name = 'group_persons_mentioned';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Persons mentioned in book',
    'weight' => '16',
    'children' => array(
      0 => 'field_dedications',
      1 => 'field_dedications_notes',
      2 => 'field_founders_notes',
      3 => 'field_funders',
      4 => 'field_mention_general_notes',
      5 => 'field_personal_address',
      6 => 'field_personal_addresse_notes',
      7 => 'field_printers',
      8 => 'field_printers_notes',
      9 => 'field_proofreaders',
      10 => 'field_proofreaders_notes',
      11 => 'field_rabbinical_appro_notes',
      12 => 'field_rabbinical_approbations',
      13 => 'field_recommendations',
      14 => 'field_recommendations_notes',
      15 => 'field_sellers',
      16 => 'field_sellers_notes',
      17 => 'field_subscribers',
      18 => 'field_subscribers_notes',
      19 => 'field_subscription_appeal',
      20 => 'field_subscription_appeal_notes',
      21 => 'field_thanks',
      22 => 'field_thanks_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-persons-mentioned field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_persons_mentioned|node|book|form'] = $field_group;

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
    'weight' => '133',
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
    'weight' => '15',
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
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Preservation in the public consciousness',
    'weight' => '126',
    'children' => array(
      0 => 'field_later_references',
      1 => 'field_mentions_in_reviews',
      2 => 'field_original_sources_mention',
      3 => 'field_partial_publication_other',
      4 => 'field_preservation_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-preservation field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_preservation|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preservation|node|book|form';
  $field_group->group_name = 'group_preservation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_book_reception';
  $field_group->data = array(
    'label' => 'Preservation in the public consciousness',
    'weight' => '122',
    'children' => array(
      0 => 'field_later_references',
      1 => 'field_mentions_in_reviews',
      2 => 'field_original_sources_mention',
      3 => 'field_partial_publication_other',
      4 => 'field_preservation_references',
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
        'classes' => 'group-preservation field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_preservation|node|book|form'] = $field_group;

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
    'weight' => '130',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publisher/ Printing press',
    'weight' => '12',
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
    'weight' => '139',
    'children' => array(
      0 => 'field_book_studies',
      1 => 'field_copy_of_book_used',
      2 => 'field_references_notes',
      3 => 'field_secondary_sources',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References and bibliography',
    'weight' => '21',
    'children' => array(
      0 => 'field_book_studies',
      1 => 'field_copy_of_book_used',
      2 => 'field_references_notes',
      3 => 'field_secondary_sources',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book structure',
    'weight' => '14',
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
  $field_group->identifier = 'group_sub_target_audience|node|book|default';
  $field_group->group_name = 'group_sub_target_audience';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Target audience',
    'weight' => '121',
    'children' => array(
      0 => 'field_target_audience',
      1 => 'field_target_audience_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-sub-target-audience field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_sub_target_audience|node|book|default'] = $field_group;

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
    'weight' => '137',
    'children' => array(
      0 => 'group_book_reception',
      1 => 'group_preservation',
      2 => 'group_sub_target_audience',
      3 => 'group_target_general_notes',
      4 => 'group_target_production',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Target audience',
    'weight' => '19',
    'children' => array(
      0 => 'field_target_audience',
      1 => 'field_target_audience_notes',
      2 => 'group_book_reception',
      3 => 'group_target_production',
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
  $field_group->identifier = 'group_target_general_notes|node|book|default';
  $field_group->group_name = 'group_target_general_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'General notes',
    'weight' => '127',
    'children' => array(
      0 => 'field_target_general_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-target-general-notes field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_target_general_notes|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_target_production|node|book|default';
  $field_group->group_name = 'group_target_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Production',
    'weight' => '124',
    'children' => array(
      0 => 'field_contacts_official_agents',
      1 => 'field_contacts_other_people',
      2 => 'field_production_evidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-target-production field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_target_production|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_target_production|node|book|form';
  $field_group->group_name = 'group_target_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_target_audience';
  $field_group->data = array(
    'label' => 'Production',
    'weight' => '119',
    'children' => array(
      0 => 'field_contacts_official_agents',
      1 => 'field_contacts_other_people',
      2 => 'field_production_evidence',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-target-production field-group-fieldset',
        'required_fields' => 1,
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => '',
      ),
    ),
  );
  $export['group_target_production|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textual_cultural_sources|node|book|default';
  $field_group->group_name = 'group_textual_cultural_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_top_details';
  $field_group->data = array(
    'label' => 'Textual and cultural sources for the book',
    'weight' => '161',
    'children' => array(
      0 => 'field_book_type_general_notes',
      1 => 'field_jewish_sources_quotes',
      2 => 'field_motto',
      3 => 'field_non_jewish_sources_quotes',
      4 => 'field_sources_exist',
      5 => 'field_sources_list',
      6 => 'field_sources_not_mentioned',
      7 => 'field_sources_not_mentioned_list',
      8 => 'field_sources_not_mentioned_ref',
      9 => 'field_sources_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-textual-cultural-sources field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_textual_cultural_sources|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textual_cultural_sources|node|book|form';
  $field_group->group_name = 'group_textual_cultural_sources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_book_type';
  $field_group->data = array(
    'label' => 'Textual and cultural sources for the book',
    'weight' => '36',
    'children' => array(
      0 => 'field_book_type_general_notes',
      1 => 'field_jewish_sources_quotes',
      2 => 'field_motto',
      3 => 'field_non_jewish_sources_quotes',
      4 => 'field_sources_exist',
      5 => 'field_sources_list',
      6 => 'field_sources_not_mentioned',
      7 => 'field_sources_not_mentioned_list',
      8 => 'field_sources_not_mentioned_ref',
      9 => 'field_sources_references',
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
        'classes' => 'group-textual-cultural-sources field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_textual_cultural_sources|node|book|form'] = $field_group;

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
    'weight' => '135',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Textual models',
    'weight' => '17',
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
      0 => 'group_textual_cultural_sources',
      1 => 'group_type_of_book_title',
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
    'children' => array(),
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
    'weight' => '136',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '18',
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
    'weight' => '127',
    'children' => array(
      0 => 'field_bibliographical_citations',
      1 => 'field_field_orginal_author_in_or',
      2 => 'field_orginal_author_else_refer',
      3 => 'field_orginal_author_elsewhere',
      4 => 'field_orginal_publication_place',
      5 => 'field_orginal_publication_year',
      6 => 'field_original_language',
      7 => 'field_original_publisher',
      8 => 'field_original_title',
      9 => 'field_original_title_else_refer',
      10 => 'field_original_title_elsewhere',
      11 => 'field_original_type',
      12 => 'field_translation_notes',
      13 => 'field_translation_type',
      14 => 'group_translation_editions_tab',
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
  $field_group->identifier = 'group_translation_editions_tab|node|book|default';
  $field_group->group_name = 'group_translation_editions_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_translatation';
  $field_group->data = array(
    'label' => 'Translation info',
    'weight' => '3',
    'children' => array(
      0 => 'field_translation_city',
      1 => 'field_translation_references',
      2 => 'field_translation_year',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-translation-editions-tab field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_translation_editions_tab|node|book|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_translation_editions_tab|node|book|form';
  $field_group->group_name = 'group_translation_editions_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_translation';
  $field_group->data = array(
    'label' => 'Translation info',
    'weight' => '3',
    'children' => array(
      0 => 'field_translation_city',
      1 => 'field_translation_references',
      2 => 'field_translation_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-translation-editions-tab field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_translation_editions_tab|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_translation|node|book|form';
  $field_group->group_name = 'group_translation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Translation',
    'weight' => '9',
    'children' => array(
      0 => 'field_bibliographical_citations',
      1 => 'field_field_orginal_author_in_or',
      2 => 'field_orginal_author_else_refer',
      3 => 'field_orginal_author_elsewhere',
      4 => 'field_orginal_publication_place',
      5 => 'field_orginal_publication_year',
      6 => 'field_original_language',
      7 => 'field_original_publisher',
      8 => 'field_original_title',
      9 => 'field_original_title_else_refer',
      10 => 'field_original_title_elsewhere',
      11 => 'field_original_type',
      12 => 'field_translation_notes',
      13 => 'field_translation_type',
      14 => 'group_translation_editions_tab',
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
  $field_group->identifier = 'group_type_of_book_title|node|book|default';
  $field_group->group_name = 'group_type_of_book_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_top_details';
  $field_group->data = array(
    'label' => 'Type of book',
    'weight' => '142',
    'children' => array(
      0 => 'field_book',
      1 => 'field_contradict_new_edition',
      2 => 'field_contradict_orginal',
      3 => 'field_expanded_in_edition',
      4 => 'field_expanded_in_translations',
      5 => 'field_full_title',
      6 => 'field_old_edition',
      7 => 'field_presented_as_original',
      8 => 'field_presented_as_translation',
      9 => 'field_presented_new_edition',
      10 => 'field_presented_new_edition_note',
      11 => 'field_presented_new_edition_refe',
      12 => 'field_presented_original_notes',
      13 => 'field_presented_original_referen',
      14 => 'field_presented_translatio_notes',
      15 => 'field_presented_translation_refe',
      16 => 'field_title_in_latin_characters',
      17 => 'field_translation_contradict',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-type-of-book-title field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_type_of_book_title|node|book|default'] = $field_group;

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
    'weight' => '129',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volumes',
    'weight' => '11',
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

<?php
/**
 * @file
 * Contains \HaskalaBooksMigrate.
 */
class HaskalaBooksMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'book';

  public $csvColumns = array(
    // Type of book
    array('field_full_title', 'Full title'),
    array('field_title_in_latin_characters', 'Title in Latin characters'),

    array('field_presented_as_original', 'Text is presented as original'),
    array('field_contradict_original', 'Information to contradict original text'),
    array('field_presented_original_referen', 'References for declaring as original text'),
    array('field_presented_original_notes', 'Notes on declaring as original text'),
    array('field_expanded_in_translations', 'Text expanded in translations'),
    array('field_expanded_in_edition', 'Text expanded in new edition'),

    array('field_presented_as_translation', 'Text is presented as translation'),
    array('field_translation_contradict', 'Information to contradict translation'),
    array('field_presented_translation_refe', 'References for declaring as translation'),
    array('field_original_text_name', 'Name of original text'),
    array('field_original_text_author', 'Author of original text'),
    array('field_presented_translatio_notes', 'Notes on declaring as translation'),

    array('field_presented_new_edition', 'Text is presented as new edition'),
    array('field_contradict_new_edition', 'Information to contradict new edition'),
    array('field_presented_new_edition_refe', 'References for declaring as new edition'),
    array('field_old_text', 'Name of old text'),
    array('field_old_text_author', 'Author of old text'),
    array('field_presented_new_edition_note', 'Notes on declaring as new edition'),

    array('field_sources_exist', 'Are there sources mentioned in the book itself'),
    array('field_sources_list', 'List of sources mentioned in the book'),
    array('field_sources_references', 'References for sources mentioned in the book'),

    array('field_sources_not_mentioned', 'Are there sources not mentioned in the book'),
    array('field_sources_not_mentioned_list', 'List of sources not mentioned in the book'),
    array('field_sources_not_mentioned_ref', 'References for sources not mentioned in the book'),

    array('field_jewish_sources_quotes', 'Quotes from Jewish sources'),
    array('field_non_jewish_sources_quotes', 'Quotes from non-Jewish sources'),
    array('field_motto', 'Motto'),
    array('field_book_type_general_notes', 'Notes on type of book'),


    // Translation
    array('field_translation_type', 'Type of translation'),
    array('field_original_type', 'Type of original text'),
    array('field_original_title', 'Title of the original text as it appeared originally'),
    array('field_original_title_elsewhere', 'Title of the original text as it appears elsewhere'),
    array('field_original_title_else_refer', 'References for title of the original text as it appears elsewhere'),
    array('field_bibliographical_citations', 'Bibliographical citations for translation'),
    array('field_original_language', 'Original language of text'),
    array('field_original_publication_year', 'Year of publication of original text'),
    array('field_original_publisher', 'Original publisher'),
    array('field_original_publication_place', 'Place of publication of original text'),
    array('field_original_author', 'Name of author of the original text as it appeared originally'),
    array('field_original_author_elsewhere', 'Name of author of the original text as it appears elsewhere'),
    array('field_original_author_else_refer', 'References for name of author of the original text as it appears elsewhere'),
    array('field_original_author_other_name', 'Other names for the author'),
    array('field_translation_notes', 'Notes on translation'),


    // New edition
    array('field_new_edition_type_in_text', 'Type of new edition, as specified in the text'),
    array('field_new_edition_type_reference', 'References for new edition as specified in text'),
    array('field_new_edition_type_notes', 'Notes on new edition as specified in text'),
    array('field_new_edition_type_elsewhere', 'Type of new edition, as specified elsewhere'),
    array('field_new_edition_type_else_ref', 'References for new edition as specified elsewhere'),
    array('field_new_edition_type_else_note', 'Notes on new edition as specified elsewhere'),
    array('field_old_name_in_book', 'Name of the old text as it appears in the book'),
    array('field_old_text_author_in_book', "Name of the old text's author as it appears in the book"),
    array('field_old_author_addition_names', "Additional names for the old text's author as it appears in the book"),
    array('field_old_author_names_other_sor', "Name of the old text's author as it appears in other sources"),
    array('field_new_edition_general_notes', 'Notes on new edition'),


    // Volumes
    array('field_volumes_published_number', 'Number of volumes published'),
    array('field_examined_volume_number', 'Number of examined volume'),
    array('field_other_volumes', 'Names of other published volumes'),
    array('field_planned_volumes', 'Names of planned volumes that were not published'),
    array('field_series_part', 'Part of a series of books'),
    array('field_name_of_series', 'Name of series'),
    array('field_printed_originally', 'Printed originally with other books'),
    array('field_other_books_names', 'Names of other books'),
    array('field_volumes_notes', 'Notes on volumes'),


    // Publisher/ Printing press
    array('field_publisher_name', 'Name of publisher'),
    array('field_publication_year_in_book', 'Year of publication as it appears in the book'),
    array('field_hebrew_year_of_publication', 'Hebrew year of publication as it appears in the book'),
    array('field_gregorian_year', 'Gregorian year of publication as it appears in the book'),
    array('field_publication_place', 'Place of publication as it appears in the book'),
    array('field_format_of_publication_date', 'Format of publication date'),
    array('field_price', 'Price of book as it appears in the book'),
    array('field_publication_year_in_other', 'Year of publication as it appears in other sources'),
    array('field_heb_year_publication_other', 'Hebrew year of publication as it appears in other sources'),
    array('field_gregorian_year_pub_other', 'Gregorian year of publication as it appears in other sources'),
    array('field_publication_place_other', 'Place of publication as it appears in other sources'),
    array('field_printing_press_references', 'References for publication information'),
    array('field_printing_press_notes', 'Notes on publication'),


    // Editions
    array('field_total_number_of_editions', 'Total number of editions'),
    array('field_last_known_edition', 'Last known edition'),
    array('field_references_for_editions', 'References for editions'),
    array('field_editions_notes', 'Notes on editions'),


    // Book structure
    array('field_languages_number', 'Number of languages'),
    array('field_language', 'Language in book'),
    array('field_occasional_words_languages', 'Appearance of words in other language'),
    array('field_alignment', 'Alignment of text'),
    array('field_typography', 'Typography'),
    array('field_language_of_footnotes', 'Language of footnotes'),
    array('field_location_of_footnotes', 'Location of footnotes'),
    array('field_fonts', 'Fonts'),
    array('field_preface', 'Is there a preface'),
    array('field_structure_preface_notes', 'Notes on preface'),
    array('field_epilogue', 'Is there an epilogue'),
    // Notes on epilogue?
    array('field_table_of_conten', 'Is there a table of contents'),
    // Notes on TOC?
    array('field_pages_number', 'Number of pages'),
    array('field_height', 'Height of book, in cm'),
    array('field_width', 'Width of book, in cm'),
    array('field_illustrations_diagrams', 'Are there illustrations/diagrams'),
    array('field_diagrams_notes', 'Notes on illustrations/diagrams'),
    array('field_diagrams_book_pages', 'Pages in which illustrations/diagrams appear'),
    array('field_diagrams_text', 'Illustration/diagram for book'),
    array('field_book_structure_notes', 'Notes on book structure'),


    // Prefaces
    array('field_preface_number', 'Number of preface'),
    array('field_writer_of_preface', 'Writer of preface'),
    array('field_role', 'Role in book production'),
    array('field_preface_title', 'Preface title'),
    array('field_preface_notes', 'Notes on preface'),


    // Persons mentioned in the book
    array('field_personal_address', 'Are there personal addresses'),
    array('field_personal_addresse_notes', 'Notes on personal addresses'),
    array('field_rabbinical_approbations', 'Are there rabbinical approbations'),
    // Notes on rabbinical approbations?
    array('field_recommendations', 'Are there recommendations'),
    // Notes on recommendations?
    array('field_dedications', 'Are there dedications'),
    // Dedications notes?
    array('field_thanks', 'Are there thanks'),
    // Thanks notes?
    array('field_subscription_appeal', 'Is there an appeal to sell subscriptions'),
    // Notes?
    array('field_subscribers', 'Is there a list of subscribers'),
    // Notes?
    array('field_printers', 'Is there a list of printers'),
    array('field_proofreaders', 'Is there a list of proofreaders'),
    array('field_funders', 'Is there a list of funders'),
    array('field_sellers', 'Is there a list of sellers'),
    array('field_mention_general_notes', 'Notes on book mentions'),


    // Textual models
    array('field_textual_models_notes', 'Notes on textual models'),

    // Topics
    array('field_topic', 'Topic'),
    array('field_topics_notes', 'Notes on topics'),

    // Target audience
    array('field_target_audience', 'Target audience as described in the book'),
    array('field_target_audience_notes', 'Notes on target audience'),
    array('field_production_evidence', 'Evidence about book production'),
    array('field_contacts_other_people', 'Contacts with other people'),
    array('field_contacts_official_agents', 'Contacts with official agents'),
    array('field_contemporary_references', 'Contemporary references to the book'),
    array('field_contemporary_disputes', 'Contemporary disputes about the book'),
    array('field_censorship', 'Censorship'),
    array('field_bans', 'Bans'),
    // Later references to the book?
    array('field_original_sources_mention', 'Original sources which mention the book'),
    array('field_mentions_in_reviews', 'Mentions in reviews'),
    array('field_preservation_references', 'References for preservation in the public consciousness'),
    array('field_partial_publication_other', 'Partial publication of the book in other texts'),
    array('field_target_general_notes', 'Notes on target audience'),


    // Catalog numbers
    array('field_huji_library_id', 'National Library of Hebrew University catalog number'),
    array('field_bar_ilan_library_id', 'Library of Bar Ilan University catalog number'),
    array('field_tel_aviv_library_id', 'Library of Tel Aviv University catalog number'),
    array('field_berlin_library_id', 'National Library of Berlin catalog number'),
    array('field_frankfurt_library_id', 'Frankfurt University Library catalog number'),
    array('field_harvard_library_id', 'Widener Library of Harvard catalog number'),
    array('field_new_york_library_id', 'New York Public Library catalog number'),
    array('field_british_library_id', 'British Museum catalog number'),
    array('field_other_libraries', 'Catalog number at other libraries'),
    array('field_book_not_available', 'Book is not available'),
    array('field_book_availability_notes', 'Notes on book availability'),
    array('field_link_to_digital_book', 'Link to digital book'),
    array('field_catalog_numbers_notes', 'Notes on catalog numbers'),

    //
//    array('', ''),
//    array('', ''),
//    array('', ''),



//    array('field_alignment', 'Alignment of text'),
//    array('field_dedications', 'Are there dedications'),
//    array('field_illustrations_diagrams', 'Are there illustrations/diagrams'),
//    array('field_personal_address', 'Are there personal addresses'),
//    array('field_rabbinical_approbations', 'Are there rabbinical approbations'),
//    array('field_recommendations', 'Are there recommendations'),
//    array('field_sources_exist', 'Are there sources mentioned in the book itself'),
//    array('field_thanks', 'Are there thanks'),
//    array('field_contemporary_references', 'Contemporary references to the book'),
//    array('field_copy_of_book_used', 'Copy of book used'),
//    array('field_production_evidence', 'Evidence about book production'),
//    array('field_fonts', 'Fonts'),
//    array('field_format_of_publication_date', 'Format of publication date'),
//    array('field_formatted_display_title', 'Formatted display title'),
//    array('field_frankfurt_library_id', 'Frankfurt University Library catalog number'),
//
//    array('field_gregorian_year', 'Gregorian year of publication as it appears in the book'),
//    array('field_hebrew_year_of_publication', 'Hebrew year of publication as it appears in the book'),
//    array('field_height', 'Height of book, in cm'),
//    array('field_funders', 'Is there a list of funders'),
//    array('field_printers', 'Is there a list of printers'),
//    array('field_proofreaders', 'Is there a list of proofreaders'),
//    array('field_sellers', 'Is there a list of sellers'),
//    array('field_subscribers', 'Is there a list of subscribers'),
//    array('field_preface', 'Is there a preface'),
//    array('field_table_of_conten', 'Is there a table of contents'),
//    array('field_subscription_appeal', 'Is there an appeal to sell subscriptions'),
//    array('field_epilogue', 'Is there an epilogue'),
//    array('field_language', 'Language in book'),
//    array('field_language_of_footnotes', 'Language of footnotes'),
//    array('field_last_known_edition', 'Last known edition'),
//    array('field_later_references', 'Later references to the book'),
//    array('field_bar_ilan_library_id', 'Library of Bar Ilan University catalog number'),
//    array('field_link_to_digital_book', 'Link to digital book'),
//    array('field_sources_list', 'List of sources mentioned in the book'),
//    array('field_location_of_footnotes', 'Location of footnotes'),
//    array('field_motto', 'Motto'),
//    array('field_publisher_name', 'Name of publisher'),
//    array('field_name_of_series', 'Name of series'),
//    array('field_other_volumes', 'Names of other published volumes'),
//    array('field_berlin_library_id', 'National Library of Berlin catalog number'),
//    array('field_huji_library_id', 'National Library of Hebrew University catalog number'),
//    array('field_book_structure_notes', 'Notes on book structure'),
//    array('field_catalog_numbers_notes', 'Notes on catalog numbers'),
//    array('field_dedications_notes', 'Notes on dedications'),
//    array('field_personal_addresse_notes', 'Notes on personal addresses'),
//    array('field_structure_preface_notes', 'Notes on preface'),
//    array('field_references_notes', 'Notes on references'),
//    array('field_target_audience_notes', 'Notes on target audience'),
//    array('field_textual_models_notes', 'Notes on textual models'),
//    array('field_volumes_notes', 'field_volumes_notes'),
//    array('field_examined_volume_number', 'Number of examined volume'),
//    array('field_languages_number', 'Number of languages'),
//    array('field_pages_number', 'Number of pages'),
//    array('field_preface_number', 'Number of preface'),
//    array('field_volumes_published_number', 'Number of volumes published'),
//    array('field_publication_place', 'Place of publication as it appears in the book'),
//    array('field_preface_title', 'Preface title'),
//    array('field_references_for_editions', 'References for editions'),
//    array('field_role', 'Role in book production'),
//    array('field_secondary_sources', 'Secondary sources used by researchers'),
//    array('field_target_audience', 'Target audience as described in the book'),
//
//
//    array('field_topic', 'Topic'),
//    array('field_total_number_of_editions', 'Total number of editions'),
//    array('field_typography', 'Typography'),
//    array('field_width', 'Width of book, in cm'),
//    array('field_writer_of_preface', 'Writer of preface'),
//    array('field_publication_year_in_book', 'Year of publication as it appears in the book'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Type of book
    $simple_mappings = array(
      'field_full_title',
      'field_title_in_latin_characters',
      'field_presented_as_original',
      'field_contradict_original',
      'field_presented_original_referen',
      'field_presented_original_notes',
      'field_expanded_in_translations',
      'field_expanded_in_edition',
      'field_presented_as_translation',
      'field_translation_contradict',
      'field_presented_translation_refe',
      'field_original_text_name',
      'field_original_text_author',
      'field_presented_translatio_notes',
      'field_presented_new_edition',
      'field_contradict_new_edition',
      'field_presented_new_edition_refe',
      'field_old_text',
      'field_old_text_author',
      'field_presented_new_edition_note',
      'field_sources_exist',
      'field_sources_list',
      'field_sources_references',
      'field_sources_not_mentioned',
      'field_sources_not_mentioned_list',
      'field_sources_not_mentioned_ref',
      'field_jewish_sources_quotes',
      'field_non_jewish_sources_quotes',
      'field_motto',
      'field_book_type_general_notes',
    );
    $this->addSimpleMappings($simple_mappings);


    // Translation
    $simple_mappings = array(
      'field_translation_type',
      'field_original_title',
      'field_original_title_elsewhere',
      'field_original_title_else_refer',
      'field_bibliographical_citations',
      'field_original_publication_year',
      'field_original_publication_place',
      'field_original_author',
      'field_original_author_elsewhere',
      'field_original_author_else_refer',
      'field_original_author_other_name',
      'field_translation_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_original_type',
      'field_original_language',
      'field_original_publisher',
    );
    $this->addTermReferenceMappings($term_references);


    // New edition
    $simple_mappings = array(
      'field_new_edition_type_reference',
      'field_new_edition_type_notes',
      'field_new_edition_type_else_ref',
      'field_new_edition_type_else_note',
      'field_old_name_in_book',
      'field_old_text_author_in_book',
      'field_old_author_addition_names',
      'field_old_author_names_other_sor',
      'field_new_edition_general_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_new_edition_type_in_text',
      'field_new_edition_type_elsewhere',
    );
    $this->addTermReferenceMappings($term_references);


    // Volumes
    $simple_mappings = array(
      'field_volumes_published_number',
      'field_examined_volume_number',
      'field_other_volumes',
      'field_planned_volumes',
      'field_series_part',
      'field_printed_originally',
      'field_other_books_names',
      'field_volumes_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_name_of_series',
    );
    $this->addTermReferenceMappings($term_references);


    // Publisher/ Printing press
    $simple_mappings = array(
      'field_publication_year_in_book',
      'field_hebrew_year_of_publication',
      'field_gregorian_year',
      'field_price',
      'field_publication_year_in_other',
      'field_heb_year_publication_other',
      'field_gregorian_year_pub_other',
      'field_printing_press_references',
      'field_printing_press_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_publisher_name',
      'field_publication_place',
      'field_format_of_publication_date',
      'field_publication_place_other',
    );
    $this->addTermReferenceMappings($term_references);


    // Editions
    $simple_mappings = array(
      'field_total_number_of_editions',
      'field_last_known_edition',
      'field_references_for_editions',
      'field_editions_notes',
    );
    $this->addSimpleMappings($simple_mappings);


    // Book structure
    $simple_mappings = array(
      'field_preface',
      'field_structure_preface_notes',
      'field_epilogue',
      'field_table_of_conten',
      'field_pages_number',
      'field_height',
      'field_width',
      'field_illustrations_diagrams',
      'field_diagrams_notes',
      'field_diagrams_book_pages',
      'field_diagrams_text',
      'field_book_structure_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_languages_number',
      'field_language',
      'field_occasional_words_languages',
      'field_alignment',
      'field_typography',
      'field_language_of_footnotes',
      'field_location_of_footnotes',
      'field_fonts',
    );
    $this->addTermReferenceMappings($term_references);


    // Prefaces
    $simple_mappings = array(
      'field_preface_number',
      'field_preface_title',
      'field_preface_notes',
      'field_writer_of_preface',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_role',
    );
    $this->addTermReferenceMappings($term_references);


    // Persons mentioned in book
    $simple_mappings = array(
      'field_personal_address',
      'field_personal_addresse_notes',
      'field_rabbinical_approbations',
      'field_recommendations',
      'field_dedications',
      'field_thanks',
      'field_subscription_appeal',
      'field_subscribers',
      'field_printers',
      'field_proofreaders',
      'field_funders',
      'field_sellers',
      'field_mention_general_notes',
    );
    $this->addSimpleMappings($simple_mappings);


    // Textual models
    $simple_mappings = array(
      'field_textual_models_notes',
    );
    $this->addSimpleMappings($simple_mappings);


    // Topics
    $this->addSimpleMappings(array('field_topics_notes'));
    $this->addTermReferenceMappings(array('field_topic'));


    // Target audience
    $simple_mappings = array(
      'field_target_audience_notes',
      'field_production_evidence',
      'field_contacts_other_people',
      'field_contacts_official_agents',
      'field_contemporary_references',
      'field_contemporary_disputes',
      'field_censorship',
      'field_bans',
      'field_original_sources_mention',
      'field_mentions_in_reviews',
      'field_preservation_references',
      'field_partial_publication_other',
      'field_target_general_notes',
    );
    $this->addSimpleMappings($simple_mappings);
    $term_references = array(
      'field_target_audience',
    );
    $this->addTermReferenceMappings($term_references);

    // Catalog numbers
    $simple_mappings = array(
      'field_huji_library_id',
      'field_bar_ilan_library_id',
      'field_tel_aviv_library_id',
      'field_berlin_library_id',
      'field_frankfurt_library_id',
      'field_harvard_library_id',
      'field_new_york_library_id',
      'field_british_library_id',
      'field_other_libraries',
      'field_book_not_available',
      'field_book_availability_notes',
      'field_link_to_digital_book',
      'field_catalog_numbers_notes',
    );
    $this->addSimpleMappings($simple_mappings);

//    $simple_mappings = array(
//    );
//    $this->addSimpleMappings($simple_mappings);
//    $term_references = array(
//    );
//    $this->addTermReferenceMappings

//    $simple_mappings = array(
//      'field_dedications',
//      'field_illustrations_diagrams',
//      'field_personal_address',
//      'field_rabbinical_approbations',
//      'field_recommendations',
//      'field_sources_exist',
//      'field_thanks',
//      'field_contemporary_references',
//      'field_copy_of_book_used',
//      'field_production_evidence',
//      'field_formatted_display_title',
//      'field_frankfurt_library_id',
//      'field_full_title',
//      'field_gregorian_year',
//      'field_hebrew_year_of_publication',
//      'field_height',
//      'field_funders',
//      'field_printers',
//      'field_proofreaders',
//      'field_sellers',
//      'field_subscribers',
//      'field_preface',
//      'field_table_of_conten',
//      'field_subscription_appeal',
//      'field_epilogue',
//      'field_last_known_edition',
//      'field_later_references',
//      'field_bar_ilan_library_id',
//      'field_link_to_digital_book',
//      'field_sources_list',
//      'field_motto',
//      'field_other_volumes',
//      'field_berlin_library_id',
//      'field_huji_library_id',
//      'field_book_structure_notes',
//      'field_catalog_numbers_notes',
//      'field_dedications_notes',
//      'field_personal_addresse_notes',
//      'field_structure_preface_notes',
//      'field_references_notes',
//      'field_target_audience_notes',
//      'field_textual_models_notes',
//      'field_volumes_notes',
//      'field_examined_volume_number',
//      'field_pages_number',
//      'field_preface_number',
//      'field_volumes_published_number',
//      'field_preface_title',
//      'field_references_for_editions',
//      'field_sources_references',
//      'field_secondary_sources',
//      'field_presented_as_original',
//      'field_title_in_latin_characters',
//      'field_publication_year_in_book',
//      'field_total_number_of_editions',
//      'field_writer_of_preface',
//      'field_width',
//    );


//    $term_references = array(
//      'field_languages_number',
//      'field_alignment',
//      'field_fonts',
//      'field_language',
//      'field_language_of_footnotes',
//      'field_location_of_footnotes',
//      'field_publisher_name',
//      'field_publication_place',
//      'field_target_audience',
//      'field_topic',
//      'field_typography',
//      'field_format_of_publication_date',
//      'field_role',
//    );
//    $this->addTermReferenceMappings($term_references);
//
//    $this->addFieldMapping('field_name_of_series', 'field_name_of_series');
//    $this->addFieldMapping('field_name_of_series:create_term')
//      ->defaultValue(TRUE);
//    $this->addFieldMapping('field_name_of_series:ignore_case')
//      ->defaultValue(TRUE);
  }

  /**
   * Fetch person node IDs by their titles.
   */
  public function prepareRow($row) {
    parent::prepareRow($row);
    if ($row->field_writer_of_preface) {
      $row->field_writer_of_preface = $this->getNodeByTitle('person', $row->field_writer_of_preface);
    }
  }

  /**
   * Set boolean fields to false instead of null.
   */
  public function prepare($node, $row) {
//    dpm($row);
//    dpm($node);

    $wrapper = entity_metadata_wrapper('node', $node);
    foreach ($row as $field => $value) {
      if ($value === FALSE) {
        $wrapper->$field->set(FALSE);
      }
    }
  }
}

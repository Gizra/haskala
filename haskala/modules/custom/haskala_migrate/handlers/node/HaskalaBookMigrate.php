<?php
/**
 * @file
 * Contains \HaskalaBookMigrate.
 */
class HaskalaBookMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'book';

  public $csvColumns = array(
    array('field_alignment', 'Alignment of text'),
    array('field_dedications', 'Are there dedications'),
    array('field_illustrations_diagrams', 'Are there illustrations/diagrams'),
    array('field_personal_address', 'Are there personal addresses'),
    array('field_rabbinical_approbations', 'Are there rabbinical approbations'),
    array('field_recommendations', 'Are there recommendations'),
    array('field_sources_mentione', 'Are there sources mentioned in the book itself'),
    array('field_thanks', 'Are there thanks'),
    array('field_contemporary_references', 'Contemporary references to the book'),
    array('field_copy_of_book_used', 'Copy of book used'),
    array('field_production_evidence', 'Evidence about book production'),
    array('field_fonts', 'Fonts'),
    array('field_format_of_publication_date', 'Format of publication date'),
    array('field_formatted_display_title', 'Formatted display title'),
    array('field_frankfurt_library_id', 'Frankfurt University Library catalog number'),
    array('field_full_title', 'Full title'),
    array('field_gregorian_year', 'Gregorian year of publication as it appears in the book'),
    array('field_hebrew_year', 'Hebrew year of publication as it appears in the book'),
    array('field_height', 'Height of book, in cm'),
    array('field_funders', 'Is there a list of funders'),
    array('field_printers', 's there a list of printers'),
    array('field_proofreaders', 'Is there a list of proofreaders'),
    array('field_sellers', 'Is there a list of sellers'),
    array('field_subscribers', 'Is there a list of subscribers'),
    array('field_preface', 'Is there a preface'),
    array('field_table_of_conten', 'Is there a table of contents'),
    array('field_subscription_appeal', 'Is there an appeal to sell subscriptions'),
    array('field_epilogue', 'Is there an epilogue'),
    array('field_language', 'Language in book'),
    array('field_language_of_footnotes', 'Language of footnotes'),
    array('field_last_known_edition', 'Last known edition'),
    array('field_later_references', 'Later references to the book'),
    array('field_bar_ilan_library_id', 'Library of Bar Ilan University catalog number'),
    array('field_link_to_digital_book', 'Link to digital book'),
    array('field_sources_mentioned', 'List of sources mentioned in the book'),
    array('field_location_of_footnotes', 'Location of footnotes'),
    array('field_motto', 'Motto'),
    array('field_publisher_name', 'Name of publisher'),
    array('field_name_of_series', 'Name of series'),
    array('field_other_volumes', 'Names of other published volumes'),
    array('field_berlin_library_id', 'National Library of Berlin catalog number'),
    array('field_huji_library_id', 'National Library of Hebrew University catalog number'),
    array('field_book_structure_notes', 'Notes on book structure'),
    array('field_catalog_numbers_notes', 'Notes on catalog numbers'),
    array('field_dedications_notes', 'Notes on dedications'),
    array('field_personal_addresse_notes', 'Notes on personal addresses'),
    array('field_preface_notes', 'Notes on preface'),
    array('field_references_notes', 'Notes on references'),
    array('field_target_audience_notes', 'Notes on target audience'),
    array('field_textual_models_notes', 'Notes on textual models'),
    array('field_volumes_notes', 'field_volumes_notes'),
    array('field_examined_volume_number', 'Number of examined volume'),
    array('field_languages_number', 'Number of languages'),
    array('field_pages_number', 'Number of pages'),
    array('field_preface_number', 'Number of preface'),
    array('field_volumes_published_number', 'Number of volumes published'),
    array('field_publication_place', 'Place of publication as it appears in the book'),
    array('field_preface_title', 'Preface title'),
    array('field_references_for_editions', 'References for editions'),
    array('field_sources_references', 'References for sources mentioned in the book'),
    array('field_role_in_book_production', 'Role in book production'),
    array('field_secondary_sources', 'Secondary sources used by researchers'),
    array('field_target_audience', 'Target audience as described in the book'),
    array('field_presented_as_original', 'Text is presented as original'),
    array('field_title_in_latin_characters', 'Title in Latin characters'),
    array('field_topic', 'Topic'),
    array('field_total_number_of_editions', 'Total number of editions'),
    array('field_typography', 'Typography'),
    array('field_width', 'Width of book, in cm'),
    array('field_writer_of_preface', 'Writer of preface'),
    array('field_publication_year_in_book', 'Year of publication as it appears in the book'),
    array('field_translations', 'Translations'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this
      ->addFieldMapping('field_alignment', 'field_alignment')
    ->separator(',');
    $this->addFieldMapping('field_alignment:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_alignment:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_dedications', 'field_dedications');
    $this->addFieldMapping('field_illustrations_diagrams', 'field_illustrations_diagrams');
    $this->addFieldMapping('field_personal_address', 'field_personal_address');
    $this->addFieldMapping('field_rabbinical_approbations', 'field_rabbinical_approbations');
    $this->addFieldMapping('field_recommendations', 'field_recommendations');
    $this->addFieldMapping('field_sources_mentione', 'field_sources_mentione');
    $this->addFieldMapping('field_thanks', 'field_thanks');
    $this->addFieldMapping('field_contemporary_references', 'field_contemporary_references');
    $this->addFieldMapping('field_copy_of_book_used', 'field_copy_of_book_used');
    $this->addFieldMapping('field_production_evidence', 'field_production_evidence');

    $this->addFieldMapping('field_fonts', 'field_fonts')
      ->separator(',');
    $this->addFieldMapping('field_fonts:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_fonts:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_format_of_publication_date', 'field_format_of_publication_date');
    $this->addFieldMapping('field_formatted_display_title', 'field_formatted_display_title');
    $this->addFieldMapping('field_frankfurt_library_id', 'field_frankfurt_library_id');
    $this->addFieldMapping('field_full_title', 'field_full_title');
    $this->addFieldMapping('field_gregorian_year', 'field_gregorian_year');
    $this->addFieldMapping('field_hebrew_year', 'field_hebrew_year');
    $this->addFieldMapping('field_height', 'field_height');
    $this->addFieldMapping('field_funders', 'field_funders');
    $this->addFieldMapping('field_printers', 'field_printers');
    $this->addFieldMapping('field_proofreaders', 'field_proofreaders');
    $this->addFieldMapping('field_sellers', 'field_sellers');
    $this->addFieldMapping('field_subscribers', 'field_subscribers');
    $this->addFieldMapping('field_preface', 'field_preface');
    $this->addFieldMapping('field_table_of_conten', 'field_table_of_conten');
    $this->addFieldMapping('field_subscription_appeal', 'field_subscription_appeal');
    $this->addFieldMapping('field_epilogue', 'field_epilogue');

    $this->addFieldMapping('field_language', 'field_language')
      ->separator(',');
    $this->addFieldMapping('field_language:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_language_of_footnotes', 'field_language_of_footnotes')
      ->separator(',');
    $this->addFieldMapping('field_language_of_footnotes:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language_of_footnotes:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_last_known_edition', 'field_last_known_edition');
    $this->addFieldMapping('field_later_references', 'field_later_references');
    $this->addFieldMapping('field_bar_ilan_library_id', 'field_bar_ilan_library_id');
    $this->addFieldMapping('field_link_to_digital_book', 'field_link_to_digital_book');
    $this->addFieldMapping('field_sources_mentioned', 'field_sources_mentioned');
    $this->addFieldMapping('field_location_of_footnotes', 'field_location_of_footnotes');
    $this->addFieldMapping('field_motto', 'field_motto');

    $this->addFieldMapping('field_publisher_name', 'field_publisher_name')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_publisher_name:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_publisher_name:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_name_of_series', 'field_name_of_series')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_series:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_series:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_other_volumes', 'field_other_volumes');
    $this->addFieldMapping('field_berlin_library_id', 'field_berlin_library_id');
    $this->addFieldMapping('field_huji_library_id', 'field_huji_library_id');
    $this->addFieldMapping('field_book_structure_notes', 'field_book_structure_notes');
    $this->addFieldMapping('field_catalog_numbers_notes', 'field_catalog_numbers_notes');
    $this->addFieldMapping('field_dedications_notes', 'field_dedications_notes');
    $this->addFieldMapping('field_personal_addresse_notes', 'field_personal_addresse_notes');
    $this->addFieldMapping('field_preface_notes', 'field_preface_notes');
    $this->addFieldMapping('field_references_notes', 'field_references_notes');
    $this->addFieldMapping('field_target_audience_notes', 'field_target_audience_notes');
    $this->addFieldMapping('field_textual_models_notes', 'field_textual_models_notes');
    $this->addFieldMapping('field_volumes_notes', 'field_volumes_notes');
    $this->addFieldMapping('field_examined_volume_number', 'field_examined_volume_number');
    $this->addFieldMapping('field_languages_number', 'field_languages_number');
    $this->addFieldMapping('field_pages_number', 'field_pages_number');
    $this->addFieldMapping('field_preface_number', 'field_preface_number');
    $this->addFieldMapping('field_volumes_published_number', 'field_volumes_published_number');

    $this->addFieldMapping('field_publication_place', 'field_publication_place')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_publication_place:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_publication_place:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_preface_title', 'field_preface_title');
    $this->addFieldMapping('field_references_for_editions', 'field_references_for_editions');
    $this->addFieldMapping('field_sources_references', 'field_sources_references');
    $this->addFieldMapping('field_role_in_book_production', 'field_role_in_book_production');
    $this->addFieldMapping('field_secondary_sources', 'field_secondary_sources');
    $this->addFieldMapping('field_target_audience', 'field_target_audience');
    $this->addFieldMapping('field_presented_as_original', 'field_presented_as_original');
    $this->addFieldMapping('field_title_in_latin_characters', 'field_title_in_latin_characters');

    $this->addFieldMapping('field_topic', 'field_topic')
      ->separator(',');
    $this->addFieldMapping('field_topic:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topic:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_total_number_of_editions', 'field_total_number_of_editions');

    $this->addFieldMapping('field_typography', 'field_typography')
      ->separator(',');
    $this->addFieldMapping('field_typography:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_typography:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_width', 'field_width');
    //Todo: field_writer_of_preface is entity refernce person node, but the csv column is empty.
    $this->addFieldMapping('field_writer_of_preface', 'field_writer_of_preface');
    $this->addFieldMapping('field_publication_year_in_book', 'field_publication_year_in_book');
    /*$this
      ->addFieldMapping('field_translations', 'field_translations')
      ->sourceMigration('HaskalaBookTranslationMigrate');*/

  }

  public function prepareRow($row) {
    dpm($row);
  }
}

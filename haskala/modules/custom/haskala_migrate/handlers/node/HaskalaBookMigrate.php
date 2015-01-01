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
    array('field_copy_of_book_used', 'Copy of book used'),
    array('field_evidence_about_book_produc', 'Evidence about book production'),
    array('field_fonts', 'Fonts'),
    array('field_format_of_publication_date', 'Format of publication date'),
    array('field_formatted_display_title', 'Formatted display title'),
    array('field_frankfurt_university_libra', 'Frankfurt University Library catalog number'),
    array('field_full_title', 'Full title'),
    array('field_gregorian_year_of_publicat', 'Gregorian year of publication as it appears in the book'),
    array('field_hebrew_year_of_publication', 'Hebrew year of publication as it appears in the book'),
    array('field_height', 'Height of book, in cm'),
    array('field_list_of_funders', 'Is there a list of funders'),
    array('field_list_of_printer', 's there a list of printers'),
    array('field_list_of_proofreaders', 'Is there a list of proofreaders'),
    array('field_list_of_sellers', 'Is there a list of sellers'),
    array('field_list_of_subscribers', 'Is there a list of subscribers'),
    array('field_preface', 'Is there a preface'),
    array('field_table_of_conten', 'Is there a table of contents'),
    array('field_appeal_sell_subscripti', 'Is there an appeal to sell subscriptions'),
    array('field_epilogue', 'Is there an epilogue'),
    array('ffield_language_in_book', 'Language in book'),
    array('field_language_of_footnotes', 'Language of footnotes'),
    array('field_last_known_edition', 'Last known edition'),
    array('Library of Bar Ilan University catalog number', 'field_library_of_bar_ilan_univer'),
    array('field_link_to_digital_book', 'Link to digital book'),
    array('field_list_of_sources_mentioned', 'List of sources mentioned in the book'),
    array('field_location_of_footnotes', 'Location of footnotes'),
    array('field_motto', 'Motto'),
    array('field_name_of_publisher', 'Name of publisher'),
    array('field_name_of_series', 'Name of series'),
    array('field_names_of_other_published_v', 'Names of other published volumes'),
    array('field_national_library_of_berlin', 'National Library of Berlin catalog number'),
    array('field_national_library_of_hebrew', 'National Library of Hebrew University catalog number'),
    array('field_notes_on_book_structure', 'Notes on book structure'),
    array('field_notes_on_catalog_numbers', 'Notes on catalog numbers'),
    array('field_notes_on_dedications', 'Notes on dedications'),
    array('field_notes_on_personal_addresse', 'Notes on personal addresses'),
    array('field_notes_on_preface', 'Notes on preface'),
    array('field_notes_on_references', 'Notes on references'),
    array('field_notes_on_target_audience', 'Notes on target audience'),
    array('field_notes_on_textual_models', 'Notes on textual models'),
    array('field_number_of_examined_volume', 'Number of examined volume'),
    array('field_number_of_languages', 'Number of languages'),
    array('field_number_of_pages', 'Number of pages'),
    array('field_number_of_preface', 'Number of preface'),
    array('field_number_of_volumes_publishe', 'Number of volumes published'),
    array('field_place_publication_in_book', 'Place of publication as it appears in the book'),
    array('field_preface_title', 'Preface title'),
    array('field_references_for_editions', 'References for editions'),
    array('field_references_for_sources_men', 'References for sources mentioned in the book'),
    array('field_role_in_book_production', 'Role in book production'),
    array('field_secondary_sources', 'Secondary sources used by researchers'),
    array('field_target_audience_as_describ', 'Target audience as described in the book'),
    array('field_text_is_presented_as_origi', 'Text is presented as original'),
    array('field_title_in_latin_characters', 'Title in Latin characters'),
    array('field_topic', 'Topic'),
    array('field_total_number_of_editions', 'Total number of editions'),
    array('field_typography', 'Typography'),
    array('field_width', 'Width of book, in cm'),
    array('field_writer_of_preface', 'Writer of preface'),
    array('field_publication_year_in_book', 'Year of publication as it appears in the book'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this
      ->addFieldMapping('field_alignment', 'field_alignment')
    ->defaultValue(TRUE);
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
    $this->addFieldMapping('field_copy_of_book_used', 'field_copy_of_book_used');
    $this->addFieldMapping('field_evidence_about_book_produc', 'field_evidence_about_book_produc');

    $this->addFieldMapping('field_fonts', 'field_fonts')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_fonts:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_fonts:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_format_of_publication_date', 'field_format_of_publication_date');
    $this->addFieldMapping('field_formatted_display_title', 'field_formatted_display_title');
    $this->addFieldMapping('field_frankfurt_university_libra', 'field_frankfurt_university_libra');
    $this->addFieldMapping('field_full_title', 'field_full_title');
    $this->addFieldMapping('field_gregorian_year_of_publicat', 'field_gregorian_year_of_publicat');
    $this->addFieldMapping('field_hebrew_year_of_publication', 'field_hebrew_year_of_publication');
    $this->addFieldMapping('field_height', 'field_height');
    $this->addFieldMapping('field_list_of_funders', 'field_list_of_funders');
    $this->addFieldMapping('field_list_of_printer', 'field_list_of_printer');
    $this->addFieldMapping('field_list_of_proofreaders', 'field_list_of_proofreaders');
    $this->addFieldMapping('field_list_of_sellers', 'field_list_of_sellers');
    $this->addFieldMapping('field_list_of_subscribers', 'field_list_of_subscribers');
    $this->addFieldMapping('field_preface', 'field_preface');
    $this->addFieldMapping('field_table_of_conten', 'field_table_of_conten');
    $this->addFieldMapping('field_appeal_sell_subscripti', 'field_appeal_sell_subscripti');
    $this->addFieldMapping('field_epilogue', 'field_epilogue');

    $this->addFieldMapping('field_language_in_book', 'field_language_in_book')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language_in_book:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language_in_book:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_language_of_footnotes', 'field_language_of_footnotes')
    ->defaultValue(TRUE);
    $this->addFieldMapping('field_language_of_footnotes:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language_of_footnotes:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_last_known_edition', 'field_last_known_edition');
    $this->addFieldMapping('field_library_of_bar_ilan_univer', 'field_library_of_bar_ilan_univer');
    $this->addFieldMapping('field_link_to_digital_book', 'field_link_to_digital_book');
    $this->addFieldMapping('field_list_of_sources_mentioned', 'field_list_of_sources_mentioned');
    $this->addFieldMapping('field_location_of_footnotes', 'field_location_of_footnotes');
    $this->addFieldMapping('field_motto', 'field_motto');

    $this->addFieldMapping('field_name_of_publisher', 'field_name_of_publisher')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_publisher:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_publisher:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_name_of_series', 'field_name_of_series')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_series:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_name_of_series:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_names_of_other_published_v', 'field_names_of_other_published_v');
    $this->addFieldMapping('field_national_library_of_berlin', 'field_national_library_of_berlin');
    $this->addFieldMapping('field_national_library_of_hebrew', 'field_national_library_of_hebrew');
    $this->addFieldMapping('field_notes_on_book_structure', 'field_notes_on_book_structure');
    $this->addFieldMapping('field_notes_on_catalog_numbers', 'field_notes_on_catalog_numbers');
    $this->addFieldMapping('field_notes_on_dedications', 'field_notes_on_dedications');
    $this->addFieldMapping('field_notes_on_personal_addresse', 'field_notes_on_personal_addresse');
    $this->addFieldMapping('field_notes_on_preface', 'field_notes_on_preface');
    $this->addFieldMapping('field_notes_on_references', 'field_notes_on_references');
    $this->addFieldMapping('field_notes_on_target_audience', 'field_notes_on_target_audience');
    $this->addFieldMapping('field_notes_on_textual_models', 'field_notes_on_textual_models');
    $this->addFieldMapping('field_notes_on_volumes', 'field_notes_on_volumes');
    $this->addFieldMapping('field_number_of_examined_volume', 'field_number_of_examined_volume');
    $this->addFieldMapping('field_number_of_languages', 'field_number_of_languages');
    $this->addFieldMapping('field_number_of_pages', 'field_number_of_pages');
    $this->addFieldMapping('field_number_of_preface', 'field_number_of_preface');
    $this->addFieldMapping('field_number_of_volumes_publishe', 'field_number_of_volumes_publishe');

    $this->addFieldMapping('field_place_publication_in_book', 'field_place_publication_in_book')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_publication_in_book:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_publication_in_book:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_preface_title', 'field_preface_title');
    $this->addFieldMapping('field_references_for_editions', 'field_references_for_editions');
    $this->addFieldMapping('field_references_for_sources_men', 'field_references_for_sources_men');
    $this->addFieldMapping('field_role_in_book_production', 'field_role_in_book_production');
    $this->addFieldMapping('field_secondary_sources', 'field_secondary_sources');
    $this->addFieldMapping('field_target_audience_as_describ', 'field_target_audience_as_describ');
    $this->addFieldMapping('field_text_is_presented_as_origi', 'field_text_is_presented_as_origi');
    $this->addFieldMapping('field_title_in_latin_characters', 'field_title_in_latin_characters');

    $this->addFieldMapping('field_topic', 'field_topic')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topic:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_topic:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_total_number_of_editions', 'field_total_number_of_editions');

    $this->addFieldMapping('field_typography', 'field_typography')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_typography:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_typography:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_width', 'field_width');

    $this->addFieldMapping('field_writer_of_preface', 'field_writer_of_preface');

    $this->addFieldMapping('field_publication_year_in_book', 'field_publication_year_in_book');

  }
}

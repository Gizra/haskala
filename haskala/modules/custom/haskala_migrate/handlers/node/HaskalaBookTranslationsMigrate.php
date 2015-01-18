<?php
/**
 * @file
 * Contains \HaskalaBookTranslationsMigrate.
 */
class HaskalaBookTranslationsMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'book';

  public $csvColumns = array(
    array('field_book', 'Book id'),
    array('field_language', 'Language of translation'),
    array('field_translation_year', 'Year of translation'),
    array('field_translation_city', 'City of translation'),
    array('field_translator', 'Translator id'),
    array('field_translation_references', 'References for translation'),

  );



  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceCSV(DRUPAL_ROOT .'/../haskala/modules/custom/haskala_migrate/csv/node/book_translation.csv', $this->csvColumns,array('header_rows' => 1));

    $this->addFieldMapping('field_book', 'field_book')
      ->sourceMigration('HaskalaBooksMigrate');

    $this->addFieldMapping('field_language', 'field_language')
      ->separator(',');
    $this->addFieldMapping('field_language:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_language:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_translation_year', 'field_translation_year');

    $this->addFieldMapping('field_translation_city', 'field_translation_city')
      ->separator(',');
    $this->addFieldMapping('field_translation_city:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_translation_city:ignore_case')
      ->defaultValue(TRUE);

    $this
      ->addFieldMapping('field_translator', 'field_translator')
      ->sourceMigration('HaskalaPeopleMigrate');

    $this->addFieldMapping('field_translation_references', 'field_translation_references');
  }

  // Add language to book translation title for prevent duplicated titles.
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $row->title .= ' - '.$row->field_language;
  }
}




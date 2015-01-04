<?php
/**
 * @file
 * Contains \HaskalaBookTranslationMigrate.
 */
class HaskalaBookTranslationMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'book_translation';

  public $csvColumns = array(
    array('field_book', 'Book id'),
    array('field_language', 'Language of translation'),
    array('field_translation_year', 'Year of translation'),
    array('field_translation_city', 'City of translation'),
    array('field_translator', 'Translator of translation'),
    array('field_translation_references', 'References for translation'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_book', 'field_book');

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

  public function prepareRow($row) {
    dpm($row);
  }
}

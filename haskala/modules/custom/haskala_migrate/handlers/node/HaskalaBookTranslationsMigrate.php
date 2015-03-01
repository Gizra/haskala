<?php
/**
 * @file
 * Contains \HaskalaBookTranslationsMigrate.
 */
class HaskalaBookTranslationsMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'translation';

  public $csvColumns = array(
    array('field_book', 'Book id'),
    array('field_language', 'Language of translation'),
    array('field_translation_year', 'Year of translation'),
    array('field_translation_city', 'City of translation'),
    array('field_translation_city', 'Translator of translation'),
    array('field_translator', 'References for translation'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

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

    $this->addFieldMapping('field_translator', 'field_translator');

    $this->addFieldMapping('field_translation_references', 'field_translation_references');
  }


  public function prepareRow($row) {
    parent::prepareRow($row);

    // Add language to book translation title for prevent duplicated titles.
    $row->title .= ' - '.$row->field_language;

    // Fetch person node IDs by their titles.
    if ($row->field_translator) {
      $row->field_translator = $this->getNodeByTitle('person', $row->field_translator);
    }
  }
}

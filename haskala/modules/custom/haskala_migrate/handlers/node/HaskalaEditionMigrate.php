<?php
/**
 * @file
 * Contains \HaskalaEditionMigrate.
 */
class HaskalaEditionMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'edition';

  public $csvColumns = array(
    array('field_book', 'Edition of book'),
    array('field_edition_year', 'Year of edition'),
    array('field_edition_city', 'City of edition'),
    array('field_edition_changes', 'Changes in this edition'),
    array('field_edition_references', 'References for edition'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaBookMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_book', 'field_book')
      ->sourceMigration('HaskalaBookMigrate');

    $this->addFieldMapping('field_edition_year', 'field_edition_year');

    $this->addFieldMapping('field_edition_city', 'field_edition_city')
      ->separator(',');
    $this->addFieldMapping('field_edition_city:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_edition_city:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_edition_changes', 'field_edition_changes');

    $this->addFieldMapping('field_edition_references', 'field_edition_references');
  }

}

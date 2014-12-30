<?php
/**
 * @file
 * Contains \HaskalaPersonsMigrate.
 */
class HaskalaPersonsMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'person';

  public $csvColumns = array(
    array('field_hebrew_name', 'Name in Hebrew'),
    array('field_german_name', 'Name in German'),
    array('field_pseudonym', 'Pseudonym'),
    array('field_gender', 'Gender'),
    array('field_date_of_birth', 'Date of birth'),
    array('field_place_of_birth', 'Place of birth'),
    array('field_date_of_death', 'Date of death'),
    array('field_place_of_death', 'Place of death'),
    array('field_occupation', 'Occupation'),
  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_hebrew_name', 'field_hebrew_name');
    $this->addFieldMapping('field_german_name', 'field_german_name');
    $this->addFieldMapping('field_pseudonym', 'field_pseudonym');
    $this
      ->addFieldMapping('field_gender', 'field_gender')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_date_of_birth', 'field_date_of_birth');
    $this
      ->addFieldMapping('field_place_of_birth', 'field_place_of_birth')
      ->sourceMigration('HaskalaCityTermsMigrate');

    $this->addFieldMapping('field_date_of_death', 'field_date_of_death');
    $this
      ->addFieldMapping('field_place_of_death', 'field_place_of_death')
      ->sourceMigration('HaskalaCityTermsMigrate');

    $this
      ->addFieldMapping('field_occupation', 'occupation_name')
      ->separator(',');
    $this->addFieldMapping('field_occupation:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_occupation:ignore_case')
      ->defaultValue(TRUE);

  }
}

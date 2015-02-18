<?php
/**
 * @file
 * Contains \HaskalaPeopleMigrate.
 */
class HaskalaPeopleMigrate extends HaskalaMigration {
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
    array('field_viaf_id', 'Occupation'),
  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $simple_mappings = array(
      'field_hebrew_name',
      'field_german_name',
      'field_pseudonym',
      'field_date_of_birth',
      'field_date_of_death',
      'field_viaf_id',
    );
    $this->addSimpleMappings($simple_mappings);

    $this
      ->addFieldMapping('field_gender', 'field_gender')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_gender:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_gender:ignore_case')
      ->defaultValue(TRUE);

    $this
      ->addFieldMapping('field_place_of_birth', 'field_place_of_birth')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_of_birth:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_of_birth:ignore_case')
      ->defaultValue(TRUE);

    $this
      ->addFieldMapping('field_place_of_death', 'field_place_of_death')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_of_death:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_place_of_death:ignore_case')
      ->defaultValue(TRUE);

    $this
      ->addFieldMapping('field_occupation', 'field_occupation')
      ->separator(',');
    $this->addFieldMapping('field_occupation:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_occupation:ignore_case')
      ->defaultValue(TRUE);
  }
}

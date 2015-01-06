<?php
/**
 * @file
 * Contains \HaskalaProducersMigrate.
 */
class HaskalaProducersMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'producer';

  public $csvColumns = array(
    array('field_book', 'Producer of book'),
    array('field_producer', 'Title'),
    array('field_role', 'Role in book creation'),
    array('field_roles_notes', "Notes on roles in book's creation"),
    array('field_person_name_appear', "Does the person's name appear in the book"),
    array('field_producer_evidence', "Evidence for person's identity if it does not appear in the book"),
    array('field_writing_age', 'Approximate age during writing of book'),
    array('field_religion', 'Religion during writing of book'),
    array('field_writing_location', 'Location during writing of book'),
    array('field_person_book_references', 'References for person and book'),

  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
    'HaskalaPeopleMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_book', 'field_book')
      ->callbacks(array($this, 'getBookNid'));

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

  protected function getBookNid($value) {
    $query = new EntityFieldQuery();
    $node_list = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', 'book')
      ->propertyCondition('title', $value)
      ->execute();

    if (isset($node_list['node'])) {
      $node_nid_list = array_keys($node_list['node']);
      $value = $node_nid_list['0'];
    }

    return $value;
  }

}

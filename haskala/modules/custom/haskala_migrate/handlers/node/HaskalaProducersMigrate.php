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
    array('field_producer', 'Name of book producer'),
    array('field_role', 'Role in book creation'),
    array('field_roles_notes', "Notes on roles in book's creation"),
    array('field_person_name_appear', "Does the person's name appear in the book"),
    array('field_name_in_book', 'Name as it appears in the book'),
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

    $this->addFieldMapping('field_producer', 'field_producer')
      ->callbacks(array($this, 'getPersonNid'));

    $this->addFieldMapping('field_role', 'field_role')
      ->separator(',');
    $this->addFieldMapping('field_role:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_role:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_roles_notes', 'field_roles_notes');

    $this->addFieldMapping('field_person_name_appear', 'field_person_name_appear');

    $this->addFieldMapping('field_producer_evidence', 'field_producer_evidence');

    $this->addFieldMapping('field_writing_age', 'field_writing_age');

    $this->addFieldMapping('field_religion', 'field_religion');
    $this->addFieldMapping('field_religion:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_religion:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_writing_location', 'field_writing_location')
      ->separator(',');
    $this->addFieldMapping('field_writing_location:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_writing_location:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_person_book_references', 'field_person_book_references');

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

  protected function getPersonNid($value) {
    $query = new EntityFieldQuery();
    $node_list = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', 'person')
      ->propertyCondition('title', $value)
      ->execute();

    if (isset($node_list['node'])) {
      $node_nid_list = array_keys($node_list['node']);
      $value = $node_nid_list['0'];
    }

    return $value;
  }

  public function prepareRow($row) {
     dpm($row);
  }
}

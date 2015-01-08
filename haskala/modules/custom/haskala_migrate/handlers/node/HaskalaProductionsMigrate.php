<?php
/**
 * @file
 * Contains \HaskalaProductionsMigrate.
 */
class HaskalaProductionsMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'production';

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
    $this->addFieldMapping('field_book', 'field_book');

    $this->addFieldMapping('field_producer', 'field_producer');

    $this->addFieldMapping('field_role', 'field_role')
      ->separator(',');
    $this->addFieldMapping('field_role:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_role:ignore_case')
      ->defaultValue(TRUE);

    $this->addFieldMapping('field_roles_notes', 'field_roles_notes');

    $this->addFieldMapping('field_person_name_appear', 'field_person_name_appear');

    $this->addFieldMapping('field_name_in_book', 'field_name_in_book');

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

  /**
   * Fetch book and producer node IDs by their titles.
   */
  public function prepareRow($row) {
    $row->field_book = $this->getNodeByTitle('book', $row->field_book);
    $row->field_producer = $this->getNodeByTitle('person', $row->field_producer);
  }
}

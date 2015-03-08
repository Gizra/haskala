<?php
/**
 * @file
 * Contains \HaskalaPrefacesMigrate.
 */
class HaskalaPrefacesMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'preface';

  public $csvColumns = array(
    array('field_book', 'Book id'),
    array('field_preface_number', 'Number of preface'),
    array('field_preface_writer', 'Writer of preface'),
    array('field_role', 'Role in book production'),
    array('field_preface_title', 'Preface title'),
    array('field_preface_notes', 'Notes on preface'),
  );

  public $dependencies = array(
    // Dependent on books, but books are never marked as finished.
    'HaskalaProductionsMigratePrimary',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_book', 'field_book')
      ->sourceMigration('HaskalaBooksMigrate');

    $this->addFieldMapping('field_preface_number', 'field_preface_number');

    $this->addFieldMapping('field_preface_writer', 'field_preface_writer');

    $this->addFieldMapping('field_role', 'field_role')->separator(',');
    $this->addFieldMapping('field_role:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_role:ignore_case')->defaultValue(TRUE);

    $this->addFieldMapping('field_preface_title', 'field_preface_title');

    $this->addFieldMapping('field_preface_notes', 'field_preface_notes');
  }


  public function prepareRow($row) {
    parent::prepareRow($row);

    // Add language to book translation title for prevent duplicated titles.
    $row->title .= ' - '. $row->field_preface_number;

    // Fetch person node IDs by their titles.
    if ($row->field_preface_writer) {
      $row->field_preface_writer = $this->getNodeByTitle('person', $row->field_preface_writer);
    }
  }
}

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
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    $simple_mappings = array(
      'field_book',
      'field_edition_year',
      'field_edition_changes',
      'field_edition_references',
    );
    $this->addSimpleMappings($simple_mappings);

    $this->addTermReferenceMappings('field_edition_city');
  }

  /**
   * Fetch book node IDs by their titles.
   */
  public function prepareRow($row) {
    $row->field_book = $this->getNodeByTitle('book', $row->field_book);
    $row->title .= ' - ' . $row->field_edition_year;
  }
}

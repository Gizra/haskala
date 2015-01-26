<?php
/**
 * @file
 * Contains \HaskalaMentionsMigrate.
 */
class HaskalaMentionsMigrate extends HaskalaMigration {
  public $entityType = 'node';
  public $bundle = 'mention';

  public $csvColumns = array(
    array('field_book', 'Mentioned in book'),
    array('field_mentionee', 'Mentionee'),
    array('field_mentionee_description', 'Description of mentionee'),
    array('field_mentionee_city', 'Location city of mentionee'),
  );

  public $dependencies = array(
    'HaskalaCityTermsMigrate',
  );

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('field_book', 'field_book');

    $this->addFieldMapping('field_mentionee', 'field_mentionee');

    $this
      ->addFieldMapping('field_mentionee_description', 'field_mentionee_description')
      ->separator(',');
    $this->addFieldMapping('field_mentionee_description:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_mentionee_description:ignore_case')
      ->defaultValue(TRUE);

    $this
      ->addFieldMapping('field_mentionee_city', 'field_mentionee_city')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_mentionee_city:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_mentionee_city:ignore_case')
      ->defaultValue(TRUE);
  }

  /**
   * Fetch book node IDs by their titles.
  */
  public function prepareRow($row)
  {
    $row->title .= ' - ' . $row->field_book . ' - ' . $row->field_mentionee_description . ' - ' . $row->field_mentionee_city;
    $row->field_book = $this->getNodeByTitle('book', $row->field_book);
    $row->field_mentionee = $this->getNodeByTitle('person', $row->field_mentionee);
  }
}

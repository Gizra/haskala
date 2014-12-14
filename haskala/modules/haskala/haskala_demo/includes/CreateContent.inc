<?php
/**
 * @file
 * Migrate class to create Haskala content.
 */

/**
 * Class HaskalaDemoCreateHaskalaContent
 */
class HaskalaDemoCreateContent extends HaskalaDemoCreateEntity {
  public $entityType = 'node';
  public $bundle = 'haskala_content';

  /**
   * CSV Column mapping.
   *
   * @var array
   */
  public $csvColumns = array(
    array('id', 'ID'),
    array('title', 'Title'),
    array('body', 'Body'),
  );

  /**
   * Configure the object during creation.
   */
  public function __construct() {
    parent::__construct();

    $this->addFieldMapping('body', 'body');
  }
}

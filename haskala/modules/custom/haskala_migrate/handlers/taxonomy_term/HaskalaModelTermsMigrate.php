<?php

/**
 * @file
 * Contains \HaskalaModelTermsMigrate.
 */

class HaskalaModelTermsMigrate extends HaskalaMigration {
  protected $entityType = 'taxonomy_term';
  protected $bundle = 'models';

  protected $csvColumns = array(
    array('parent_name', 'Parent'),
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('parent_name', 'parent_name');
  }
}


<?php

/**
 * Migrate page elements.
 */
class HaskalaPageElementsMigrate extends HaskalaMigration {
  protected $bundle = 'page_element';
  protected $entityType = 'node';

  protected $csvColumns = array(
    array('language', 'language'),
    array('field_page', 'Page'),
    array('field_location', 'Location'),
    array('field_content', 'Content'),
  );

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Map fields that don't need extra definitions.
    $field_names = array(
      'field_page',
      'field_location',
    );
    $this->addSimpleMappings($field_names);

   $this->addFieldMapping('language', 'language');

    // Get the content from html folder
    $this->addFieldMapping('field_content', 'field_content');
    $this->addFieldMapping('field_content:format')->defaultValue('full_html');
  }
}

<?php

/**
 * @file
 * Contains \HaskalaMigration.
 */

abstract class HaskalaMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    // Make sure we can use it for node and term only.
    if (!in_array($this->entityType, array('node', 'taxonomy_term'))) {
      throw new Exception('\HaskalaMigration supports only nodes and terms.');
    }

    $this->description = t('Import @type - @bundle from CSV file.', array('@type' => $this->entityType, '@bundle' => $this->bundle));

    $this->csvColumns = !empty($this->csvColumns) ? $this->csvColumns : array();
    $csv_cols[] = array('id', 'Unique ID');

    if ($this->entityType == 'node') {
      $this->addFieldMapping('title', 'title');
      $class_name = 'MigrateDestinationNode';
      $csv_cols[] = array('title', 'Title');
    }
    elseif ($this->entityType == 'taxonomy_term') {
      $this->addFieldMapping('name', 'name');
      $class_name = 'MigrateDestinationTerm';
      $csv_cols[] = array('name', 'Name');
    }

    // Rebuild the csv columns array.
    $this->csvColumns = array_merge($csv_cols, $this->csvColumns);

    // Create a map object for tracking the relationships between source rows
    $key = array(
      'id' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      ),
    );

    $destination_handler = new MigrateDestinationEntityAPI($this->entityType, $this->bundle);
    $this->map = new MigrateSQLMap($this->machineName, $key, $destination_handler->getKeySchema($this->entityType));

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'haskala_migrate') . '/csv/' . $this->entityType . '/' . $this->bundle . '.csv', $this->csvColumns, array('header_rows' => 1));
    $this->destination = new $class_name($this->bundle, array('text_format' => 'filtered_html'));
  }

  /**
   * Fetch book and producer node IDs by their titles.
   */
  protected function getNodeByTitle($bundle, $title) {
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', $bundle)
      ->propertyCondition('title', $title)
      ->execute();

    if (!isset($result['node'])) {
      return;
    }

    return reset(array_keys($result['node']));
  }
}

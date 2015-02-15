<?php

/**
 * @file
 * Contains \HaskalaMigration.
 */

abstract class HaskalaMigration extends Migration {
  protected $csvFile = NULL;

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
    if (!$this->csvFile) {
      $this->csvFile = $this->entityType . '/' . $this->bundle . '.csv';
    }

    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'haskala_migrate') . '/csv/' . $this->csvFile, $this->csvColumns, array('header_rows' => 1));
    $this->destination = new $class_name($this->bundle, array('text_format' => 'filtered_html'));
  }

  /**
   * Fetch book and producer node IDs by their titles.
   *
   * @param $bundle
   *   The bundle of node requested ID.
   * @param $title
   *   The title of the node.
   *
   * @return int
   *   Id of the requested node
   */
  protected function getNodeByTitle($bundle, $title) {
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'node')
      ->propertyCondition('type', $bundle)
      ->propertyCondition('title', $title)
      ->execute();

    // When not finding a person, try to search only for its German name.
    if (empty($result['node']) && $bundle == 'person') {
      if (mb_strrchr($title, ' - ')) {
        list($name) = explode(' - ', $title);
        $query = new EntityFieldQuery();
        $result = $query->entityCondition('entity_type', 'node')
          ->propertyCondition('type', 'person')
          ->propertyCondition('title', $name)
          ->execute();
      }
      // Try to search by its German name or hebrew name.
      else {
        $query = new EntityFieldQuery();
        $result = $query->entityCondition('entity_type', 'node')
          ->propertyCondition('type', 'person')
          ->propertyCondition('title', '%'.$title.'%', 'LIKE')
          ->execute();
      }
    }

    if (empty($result['node'])) {
      watchdog('haskala', t('Missing @type called "@title"', array('@type' => $bundle, '@title' => $title)));
      return;
    }

    return reset(array_keys($result['node']));
  }

  /**
   * Add mappings for term-reference fields.
   *
   * @param $term_references
   *   Array of field names.
   */
  protected function addTermReferenceMappings($term_references) {
    foreach ($term_references as $field_name) {
      $this->addFieldMapping($field_name, $field_name)
        ->separator(',');
      $this->addFieldMapping($field_name . ':create_term')
        ->defaultValue(TRUE);
      $this->addFieldMapping($field_name . ':ignore_case')
        ->defaultValue(TRUE);
    }
  }

  public function prepareRow($row) {
    // Load html snippets.
    foreach ($row as $column => &$original_value) {
      // If the value is divided to multiple values, search a snippet for each
      // one separately.
      $values = explode('|', $original_value);
      foreach($values as $delta => &$value) {
        if ($value != '[file]') {
          continue;
        }
        // If the field is divided, add its delta to the file name.
        $column_delta = count($values) > 1 ? '_' . ($delta + 1) : '';
        $file = $this->entityType . '_' . $this->bundle . '_' . $row->id . '_' . $column . $column_delta . '.html';
        // Get the html snippet.
        $value = file_get_contents(drupal_get_path('module', 'haskala_migrate') . '/file/' . $file);
      }

      // If the value was divided, combine it again.
      $original_value = implode('|', $values);
    }

    // Convert boolean values represented by strings.
    foreach ($row as &$value) {
      if ($value == 'FALSE') {
        $value = FALSE;
      }
      if ($value == 'TRUE') {
        $value = TRUE;
      }
    }
  }
}

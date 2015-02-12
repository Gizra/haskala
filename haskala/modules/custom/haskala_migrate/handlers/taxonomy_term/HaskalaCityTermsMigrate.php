<?php

/**
 * @file
 * Contains \HaskalaCityTermsMigrate.
 */

class HaskalaCityTermsMigrate extends HaskalaMigration {
  public $entityType = 'taxonomy_term';
  public $bundle = 'cities';

  protected $csvColumns = array(
    array('lat', 'Latitude'),
    array('lng', 'Longitude'),
  );

  public function prepare($term, $row) {
    if ($row->lng || $row->lng) {
      $term->field_geolocation[LANGUAGE_NONE] = array(array('lat' => $row->lat, 'lng' => $row->lng));
    }
  }
}


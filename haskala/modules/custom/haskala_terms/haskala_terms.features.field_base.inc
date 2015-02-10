<?php
/**
 * @file
 * haskala_terms.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function haskala_terms_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_current_name'
  $field_bases['field_current_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_current_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
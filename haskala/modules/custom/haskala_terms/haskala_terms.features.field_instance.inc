<?php
/**
 * @file
 * haskala_terms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function haskala_terms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-cities-field_current_name'
  $field_instances['taxonomy_term-cities-field_current_name'] = array(
    'bundle' => 'cities',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_current_name',
    'label' => 'Current name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Current name');

  return $field_instances;
}

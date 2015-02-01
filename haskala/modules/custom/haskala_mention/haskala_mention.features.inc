<?php
/**
 * @file
 * haskala_mention.features.inc
 */

/**
 * Implements hook_views_api().
 */
function haskala_mention_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function haskala_mention_node_info() {
  $items = array(
    'mention' => array(
      'name' => t('Mention'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

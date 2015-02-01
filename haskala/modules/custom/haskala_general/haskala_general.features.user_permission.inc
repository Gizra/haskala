<?php
/**
 * @file
 * haskala_general.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function haskala_general_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access haskala search_api_page'.
  $permissions['access haskala search_api_page'] = array(
    'name' => 'access haskala search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'search_api_page',
  );

  // Exported permission: 'access search_api_page'.
  $permissions['access search_api_page'] = array(
    'name' => 'access search_api_page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'search_api_page',
  );

  return $permissions;
}

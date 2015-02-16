<?php
/**
 * @file
 * Haskala profile.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function haskala_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  // Disable the update module by default.
  // It slows down accessing the administration back-end.
  $form['update_notifications']['update_status_module']['#default_value'] = array(
    0 => 0,
    1 => 2,
  );
}

/**
 * Implements hook_install_tasks().
 */
function haskala_install_tasks() {
  $tasks = array();

  $tasks['haskala_setup_blocks'] = array(
    'display_name' => st('Setup Blocks'),
    'display' => FALSE,
  );

  $tasks['haskala_set_permissions'] = array(
    'display_name' => st('Set Permissions'),
    'display' => FALSE,
  );

  $tasks['haskala_set_variables'] = array(
    'display_name' => st('Set variables'),
    'display' => FALSE,
  );

  // Run this as the last task!
  $tasks['haskala_setup_rebuild_permissions'] = array(
    'display_name' => st('Rebuild permissions'),
    'display' => FALSE,
  );

  return $tasks;
}

/**
 * Task callback; Setup blocks.
 */
function haskala_setup_blocks() {
  $default_theme = variable_get('theme_default', 'bartik');

  $blocks = array(
    array(
      'module' => 'system',
      'delta' => 'user-menu',
      'theme' => $default_theme,
      'status' => 1,
      'weight' => 0,
      'region' => 'header',
      'pages' => '',
      'title' => '<none>',
      'cache' => DRUPAL_NO_CACHE,
    ),
  );

  drupal_static_reset();
  _block_rehash($default_theme);
  foreach ($blocks as $record) {
    $module = array_shift($record);
    $delta = array_shift($record);
    $theme = array_shift($record);
    db_update('block')
      ->fields($record)
      ->condition('module', $module)
      ->condition('delta', $delta)
      ->condition('theme', $theme)
      ->execute();
  }
}

/**
 * Task callback; Set permissions.
 */
function haskala_set_permissions() {
  // Enable default permissions for system roles.
  $permissions = array(
    'access search_api_page',
  );

  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, $permissions);
  user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, $permissions);
}

/**
 * Task callback; Setup blocks.
 */
function haskala_set_variables() {
  variable_set('jquery_update_jquery_admin_version', '1.7');
  variable_set('page_manager_node_view_disabled', FALSE);
  variable_set('page_manager_term_view_disabled', FALSE);
  variable_set('site_frontpage', 'homepage');
  variable_set('user_email_verification', FALSE);
  variable_set('pathauto_node_book_pattern', 'books/[node:title]');
  variable_set('pathauto_node_person_pattern', 'people/[node:title]');
  variable_set('ip_geoloc_marker_dimensions', '25 x 36');
  variable_set('ip_geoloc_marker_directory', 'profiles/haskala/themes/custom/haskala_theme/map_markers');
}

/**
 * Task callback; Rebuild permissions (node access).
 *
 * Setting up the platform triggers the need to rebuild the permissions.
 * We do this here so no manual rebuild is necessary when we finished the
 * installation.
 */
function haskala_setup_rebuild_permissions() {
  node_access_rebuild();
}

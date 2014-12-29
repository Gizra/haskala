<?php
/**
 * @file
 * haskala_general.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function haskala_general_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Top menu');


  return $menus;
}

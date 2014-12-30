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

  // Exported menu: menu-bottom-menu.
  $menus['menu-bottom-menu'] = array(
    'menu_name' => 'menu-bottom-menu',
    'title' => 'Bottom menu',
    'description' => '',
  );
  // Exported menu: menu-icons-menu.
  $menus['menu-icons-menu'] = array(
    'menu_name' => 'menu-icons-menu',
    'title' => 'Icons menu',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bottom menu');
  t('Icons menu');
  t('Top menu');


  return $menus;
}

<?php
/**
 * @file
 * haskala_general.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function haskala_general_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-bottom-menu_add-a-book-series:<front>
  $menu_links['menu-bottom-menu_add-a-book-series:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Add a book series',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-bottom-menu_add-a-book-series:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bottom-menu_add-a-book:<front>
  $menu_links['menu-bottom-menu_add-a-book:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Add a book',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-bottom-menu_add-a-book:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-bottom-menu_add-a-person:<front>
  $menu_links['menu-bottom-menu_add-a-person:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Add a person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-bottom-menu_add-a-person:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_books:<front>
  $menu_links['menu-icons-menu_books:<front>'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BOOKS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_books:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_digital-books:<front>
  $menu_links['menu-icons-menu_digital-books:<front>'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DIGITAL BOOKS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_digital-books:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_people:<front>
  $menu_links['menu-icons-menu_people:<front>'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PEOPLE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_people:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_places:<front>
  $menu_links['menu-icons-menu_places:<front>'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PLACES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_places:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_books:<front>
  $menu_links['menu-top-menu_books:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BOOKS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_books:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_people:<front>
  $menu_links['menu-top-menu_people:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PEOPLE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_people:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_places:<front>
  $menu_links['menu-top-menu_places:<front>'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PLACES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_places:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_search:search
  $menu_links['menu-top-menu_search:search'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-a-book-series:admin/structure/taxonomy/series/add
  $menu_links['user-menu_add-a-book-series:admin/structure/taxonomy/series/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/structure/taxonomy/series/add',
    'router_path' => 'admin/structure/taxonomy/%/add',
    'link_title' => 'Add a book series',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add-a-book-series:admin/structure/taxonomy/series/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-a-book:node/add/book
  $menu_links['user-menu_add-a-book:node/add/book'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/book',
    'router_path' => 'node/add/book',
    'link_title' => 'Add a book',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add-a-book:node/add/book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_add-a-person:node/add/person
  $menu_links['user-menu_add-a-person:node/add/person'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/person',
    'router_path' => 'node/add/person',
    'link_title' => 'Add a person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add-a-person:node/add/person',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'LOGIN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add a book');
  t('Add a book series');
  t('Add a person');
  t('BOOKS');
  t('DIGITAL BOOKS');
  t('LOGIN');
  t('PEOPLE');
  t('PLACES');
  t('User account');
  t('search');


  return $menu_links;
}

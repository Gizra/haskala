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
  // Exported menu link: menu-icons-menu_books:books
  $menu_links['menu-icons-menu_books:books'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => 'books',
    'router_path' => 'books',
    'link_title' => 'Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_books:books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_digital-books:digital-books
  $menu_links['menu-icons-menu_digital-books:digital-books'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => 'digital-books',
    'router_path' => 'digital-books',
    'link_title' => 'Digital Books',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_digital-books:digital-books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_people:people
  $menu_links['menu-icons-menu_people:people'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_people:people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-icons-menu_places:places
  $menu_links['menu-icons-menu_places:places'] = array(
    'menu_name' => 'menu-icons-menu',
    'link_path' => 'places',
    'router_path' => 'places',
    'link_title' => 'Places',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-icons-menu_places:places',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_books:books
  $menu_links['menu-top-menu_books:books'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'books',
    'router_path' => 'books',
    'link_title' => 'BOOKS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_books:books',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_people:people
  $menu_links['menu-top-menu_people:people'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'PEOPLE',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_people:people',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-top-menu_places:places
  $menu_links['menu-top-menu_places:places'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'places',
    'router_path' => 'places',
    'link_title' => 'PLACES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-menu_places:places',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
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
    'router_path' => 'node/add',
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
    'router_path' => 'node/add',
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
  t('Books');
  t('Digital Books');
  t('LOGIN');
  t('PEOPLE');
  t('PLACES');
  t('People');
  t('Places');
  t('User account');
  t('search');


  return $menu_links;
}

<?php

/**
 * Preprocess html.
 */
function haskala_theme_preprocess_html(&$variables) {
  // Css for IE <= 9.
  drupal_add_css(libraries_get_path('haskala') . '/css/ie.css', array('browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE)));

  // Add a class for city term pages.
  $term = menu_get_object('taxonomy_term', 2);
  if ($term && $term->vocabulary_machine_name == 'cities') {
    $variables['classes_array'][] = 'page-places';
  }
}

/**
 * Preprocess page.
 */
function haskala_theme_preprocess_page(&$variables) {
  $variables['top_menu'] = menu_tree('menu-top-menu');
  $variables['icons_menu'] = menu_tree('menu-icons-menu');
  $variables['user_menu'] = menu_tree('user-menu');

  // Build breadcrumbs.
  $breadcrumbs = array(l(t('Home'), ''));
  if ($node = menu_get_object()) {
    if ($node->type == 'book') {
      $breadcrumbs[] = l(t('Books'), 'books');
    }
    if ($node->type == 'person') {
      $breadcrumbs[] = l(t('People'), 'people');
    }
  }
  elseif ($term = menu_get_object('taxonomy_term', 2)) {
    $vocabularies = taxonomy_vocabulary_get_names();
    $breadcrumbs[] = $vocabularies[$term->vocabulary_machine_name]->name;
  }

  $title = drupal_get_title();
  if ($title == t('Home')) {
    return;
  }

  $breadcrumbs[] = drupal_get_title();
  $variables['breadcrumbs'] = theme('item_list', array('items' => $breadcrumbs));
}

/**
 * Node preprocess.
 */
function haskala_theme_preprocess_node(&$variables) {
  $node = $variables['node'];
  $view_mode = $variables['view_mode'];

  unset($variables['content']['links']);

  $variables['type_label'] = ucfirst($node->type);

  // Generic tpl for node--bundle--view-mode.
  $variables['theme_hook_suggestions'][] = "node__{$node->type}__{$view_mode}";

  $preprocess_function = "haskala_theme_preprocess_node__{$node->type}";
  if (function_exists($preprocess_function)) {
    $preprocess_function($variables);
  }
  $preprocess_function = "haskala_theme_preprocess_node__{$node->type}__{$view_mode}";
  if (function_exists($preprocess_function)) {
    $preprocess_function($variables);
  }
}

/**
 * Preprocess for book nodes teaser.
 */
function haskala_theme_preprocess_node__book__teaser(&$variables) {
  $node = $variables['node'];
  $variables['url'] = url('node/' . $node->nid);
}

/**
 * Preprocess for person nodes teaser.
 */
function haskala_theme_preprocess_node__person(&$variables) {
  $node = $variables['node'];
  $view_mode = $variables['view_mode'];
  if ($view_mode == 'teaser' || $view_mode == 'teaser_en' || $view_mode == 'teaser_he') {
    // Generic tpl for node--person--teaser.
    $variables['theme_hook_suggestions'][] = 'node__person__teaser';
    $variables['url'] = url('node/' . $node->nid);
  }
  if ($view_mode == 'teaser' || $view_mode == 'teaser_en') {
    $variables['name'] = entity_metadata_wrapper('node', $node)->field_german_name->value();
  }
  elseif ($view_mode == 'teaser_he') {
    $variables['name'] = entity_metadata_wrapper('node', $node)->field_hebrew_name->value();
  }
}

/**
 * Taxonomy term preprocess
 */
function haskala_theme_preprocess_taxonomy_term(&$variables) {
  $view_mode = $variables['view_mode'];

  // Generic tpl for term--bundle--view-mode.
  $variables['theme_hook_suggestions'][] = "taxonomy_term__{$view_mode}";

  $preprocess_function = "haskala_theme_preprocess_taxonomy_term__{$view_mode}";
  if (function_exists($preprocess_function)) {
    $preprocess_function($variables);
  }
}

/**
 * Preprocess for taxonomy term teaser.
 */
function haskala_theme_preprocess_taxonomy_term__teaser(&$variables) {
  $term = $variables['term'];
  $variables['url'] = url('taxonomy/term/' . $term->tid);
  $variables['title'] = $term->name;
}

/**
 * Preprocess for taxonomy term teaser.
 */
function haskala_theme_preprocess_taxonomy_term__detailed(&$variables) {
  $variables['title_label'] = $variables['vocabulary_machine_name'] == 'cities' ? t('Location during writing of book') : '';
}

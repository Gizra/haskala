<?php
/**
 * @file
 * haskala_terms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function haskala_terms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'places';
  $page->task = 'page';
  $page->admin_title = 'Places';
  $page->admin_description = '';
  $page->path = 'places/!letter';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'letter' => array(
      'id' => 1,
      'identifier' => 'Letter',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_places_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'places';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Places';
  $display->uuid = '9736849d-b4ca-4a7b-99f3-f00eddf79ca4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6e1f6a74-3c65-4515-9116-ea0962a8fac4';
    $pane->panel = 'middle';
    $pane->type = 'alphabet_filter';
    $pane->subtype = 'alphabet_filter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e1f6a74-3c65-4515-9116-ea0962a8fac4';
    $display->content['new-6e1f6a74-3c65-4515-9116-ea0962a8fac4'] = $pane;
    $display->panels['middle'][0] = 'new-6e1f6a74-3c65-4515-9116-ea0962a8fac4';
    $pane = new stdClass();
    $pane->pid = 'new-2ce3c491-fb40-4a1b-9abb-9cf429aa6d46';
    $pane->panel = 'middle';
    $pane->type = 'terms_list';
    $pane->subtype = 'terms_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'book_type' => 'regular',
      'node_type' => 'book',
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
      'vocabulary' => 'cities',
      'form_build_id' => 'form-Hh8JOGkVavgQYJDabuySufmwifh9vzrtXKmDmVS8lw4',
      'form_token' => 'C_3QtDMJq-E-K74DD4wY-BlNbsc-pG7LB1qSUwqW_qM',
      'form_id' => 'haskala_terms_terms_list_content_type_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2ce3c491-fb40-4a1b-9abb-9cf429aa6d46';
    $display->content['new-2ce3c491-fb40-4a1b-9abb-9cf429aa6d46'] = $pane;
    $display->panels['middle'][1] = 'new-2ce3c491-fb40-4a1b-9abb-9cf429aa6d46';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['places'] = $page;

  return $pages;

}

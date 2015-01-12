<?php
/**
 * @file
 * haskala_book.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function haskala_book_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Book page',
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
  $display->layout = 'book';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a8788bb9-8c5f-47ad-914a-ebdf7c60f501';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-face7117-ed20-4f6e-ac55-5ce8dffa6fbc';
    $pane->panel = 'middle';
    $pane->type = 'book_fields';
    $pane->subtype = 'book_fields';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'face7117-ed20-4f6e-ac55-5ce8dffa6fbc';
    $display->content['new-face7117-ed20-4f6e-ac55-5ce8dffa6fbc'] = $pane;
    $display->panels['middle'][0] = 'new-face7117-ed20-4f6e-ac55-5ce8dffa6fbc';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-face7117-ed20-4f6e-ac55-5ce8dffa6fbc';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

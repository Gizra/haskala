<?php
/**
 * @file
 * haskala_people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function haskala_people_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people';
  $page->task = 'page';
  $page->admin_title = 'People';
  $page->admin_description = '';
  $page->path = 'people/!letter';
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
  $handler->name = 'page_people_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people';
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
  $display->title = 'People';
  $display->uuid = '1688a8f4-b84b-41e6-93a8-ac470465e249';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d677698b-3981-4f23-ae67-374b28aa4baf';
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
    $pane->uuid = 'd677698b-3981-4f23-ae67-374b28aa4baf';
    $display->content['new-d677698b-3981-4f23-ae67-374b28aa4baf'] = $pane;
    $display->panels['middle'][0] = 'new-d677698b-3981-4f23-ae67-374b28aa4baf';
    $pane = new stdClass();
    $pane->pid = 'new-e8455e6c-201f-4597-8fa6-22e2a1bce7b4';
    $pane->panel = 'middle';
    $pane->type = 'books_list';
    $pane->subtype = 'books_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'book_type' => 'regular',
      'node_type' => 'person',
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'context' => array(
        0 => 'argument_string_1',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'form_build_id' => 'form-fk4ywSXYxvNfVgOKJiFpU27--lalYQMNMrxiVCPcTsQ',
      'form_token' => 'pZyHkGatmvZTNaYaIl5W3LusNzvfGyq6ItOgKOHn4Dc',
      'form_id' => 'haskala_book_books_list_content_type_edit_form',
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
    $pane->uuid = 'e8455e6c-201f-4597-8fa6-22e2a1bce7b4';
    $display->content['new-e8455e6c-201f-4597-8fa6-22e2a1bce7b4'] = $pane;
    $display->panels['middle'][1] = 'new-e8455e6c-201f-4597-8fa6-22e2a1bce7b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people'] = $page;

  return $pages;

}

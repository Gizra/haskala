<?php
/**
 * @file
 * haskala_general.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function haskala_general_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Blocked nodes',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '404',
    'destination' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'edition' => 'edition',
              'production' => 'production',
              'translation' => 'translation',
              'mention' => 'mention',
              'page_element' => 'page_element',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function haskala_general_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
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
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'intro' => NULL,
      'topics' => NULL,
      'search' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a79c8939-3bab-48e9-8c0f-5f6c1892c2b2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8cf678a8-783b-4e31-b03b-10540a01e2a3';
    $pane->panel = 'intro';
    $pane->type = 'views_panes';
    $pane->subtype = 'page_element-panel_page_element';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_page_value' => 'homepage',
        'field_location_value' => 'content',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cf678a8-783b-4e31-b03b-10540a01e2a3';
    $display->content['new-8cf678a8-783b-4e31-b03b-10540a01e2a3'] = $pane;
    $display->panels['intro'][0] = 'new-8cf678a8-783b-4e31-b03b-10540a01e2a3';
    $pane = new stdClass();
    $pane->pid = 'new-09ae568e-2ef3-44d1-addd-1026ceda41c4';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search_api_page-haskala';
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
    $pane->uuid = '09ae568e-2ef3-44d1-addd-1026ceda41c4';
    $display->content['new-09ae568e-2ef3-44d1-addd-1026ceda41c4'] = $pane;
    $display->panels['search'][0] = 'new-09ae568e-2ef3-44d1-addd-1026ceda41c4';
    $pane = new stdClass();
    $pane->pid = 'new-7101d2ba-eff2-41b4-9f7d-588cb05fb2bc';
    $pane->panel = 'topics';
    $pane->type = 'topics';
    $pane->subtype = 'topics';
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
    $pane->uuid = '7101d2ba-eff2-41b4-9f7d-588cb05fb2bc';
    $display->content['new-7101d2ba-eff2-41b4-9f7d-588cb05fb2bc'] = $pane;
    $display->panels['topics'][0] = 'new-7101d2ba-eff2-41b4-9f7d-588cb05fb2bc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}

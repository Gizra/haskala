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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book' => 'book',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
    $pane->pid = 'new-4e7518f3-75d5-40d3-b8ae-9921462f299e';
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
    $pane->uuid = '4e7518f3-75d5-40d3-b8ae-9921462f299e';
    $display->content['new-4e7518f3-75d5-40d3-b8ae-9921462f299e'] = $pane;
    $display->panels['middle'][0] = 'new-4e7518f3-75d5-40d3-b8ae-9921462f299e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function haskala_book_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'books';
  $page->task = 'page';
  $page->admin_title = 'Books';
  $page->admin_description = '';
  $page->path = 'books/!letter';
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
  $handler->name = 'page_books_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'books';
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
  $display->title = 'Books';
  $display->uuid = '7ac11674-0df6-4a9e-9829-24085c30b737';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-29651a02-9b69-4aac-b9ac-09d5cd907ee3';
    $pane->panel = 'middle';
    $pane->type = 'alphabet_filter';
    $pane->subtype = 'alphabet_filter';
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
    $pane->uuid = '29651a02-9b69-4aac-b9ac-09d5cd907ee3';
    $display->content['new-29651a02-9b69-4aac-b9ac-09d5cd907ee3'] = $pane;
    $display->panels['middle'][0] = 'new-29651a02-9b69-4aac-b9ac-09d5cd907ee3';
    $pane = new stdClass();
    $pane->pid = 'new-743f99b1-f219-45af-a57e-0a214d45186b';
    $pane->panel = 'middle';
    $pane->type = 'books_list';
    $pane->subtype = 'books_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'book_type' => 'regular',
      'form_build_id' => 'form-ibnO58rdMdTG33kWi40RWRicPatPh5Yh5Nz9urDlJuw',
      'form_token' => 'Y6AVcBeweMlALi6EjgUHONl-NWAU4yLLnsdwNuDb4Zw',
      'form_id' => 'haskala_book_books_list_content_type_edit_form',
      'op' => 'Finish',
      'context' => 'argument_string_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '743f99b1-f219-45af-a57e-0a214d45186b';
    $display->content['new-743f99b1-f219-45af-a57e-0a214d45186b'] = $pane;
    $display->panels['middle'][1] = 'new-743f99b1-f219-45af-a57e-0a214d45186b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['books'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'digital_books';
  $page->task = 'page';
  $page->admin_title = 'Digital books';
  $page->admin_description = '';
  $page->path = 'digital-books/!letter';
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
  $handler->name = 'page_digital_books_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'digital_books';
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
  $display->title = 'Digital books';
  $display->uuid = 'cb39c989-828f-4412-98d0-2b6039718f2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2ab758ed-dcff-44b3-a0bf-0391456b03e8';
    $pane->panel = 'middle';
    $pane->type = 'alphabet_filter';
    $pane->subtype = 'alphabet_filter';
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
    $pane->uuid = '2ab758ed-dcff-44b3-a0bf-0391456b03e8';
    $display->content['new-2ab758ed-dcff-44b3-a0bf-0391456b03e8'] = $pane;
    $display->panels['middle'][0] = 'new-2ab758ed-dcff-44b3-a0bf-0391456b03e8';
    $pane = new stdClass();
    $pane->pid = 'new-6831057e-1a0e-4759-95be-b8717adb4c2d';
    $pane->panel = 'middle';
    $pane->type = 'books_list';
    $pane->subtype = 'books_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'bundle' => 'any',
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'book_type' => 'digital',
      'form_build_id' => 'form-7TdmvFFAOCvH9nVgopvqDfhg1iWXjlgfdJOfpqU4dnU',
      'form_token' => 'Y6AVcBeweMlALi6EjgUHONl-NWAU4yLLnsdwNuDb4Zw',
      'form_id' => 'haskala_book_books_list_content_type_edit_form',
      'op' => 'Finish',
      'context' => 'argument_string_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6831057e-1a0e-4759-95be-b8717adb4c2d';
    $display->content['new-6831057e-1a0e-4759-95be-b8717adb4c2d'] = $pane;
    $display->panels['middle'][1] = 'new-6831057e-1a0e-4759-95be-b8717adb4c2d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['digital_books'] = $page;

  return $pages;

}

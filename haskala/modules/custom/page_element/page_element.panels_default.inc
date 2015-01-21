<?php
/**
 * @file
 * page_element.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function page_element_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = 'uppercut';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'header';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'social' => NULL,
      'upper_toolbar' => NULL,
      'sub_toolbar' => NULL,
      'search' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5acff8cf-a6a1-48c0-b26f-21c42d941e49';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e82538d6-8e9b-42a2-a948-ae5518c6cc1d';
    $pane->panel = 'search';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->uuid = 'e82538d6-8e9b-42a2-a948-ae5518c6cc1d';
    $display->content['new-e82538d6-8e9b-42a2-a948-ae5518c6cc1d'] = $pane;
    $display->panels['search'][0] = 'new-e82538d6-8e9b-42a2-a948-ae5518c6cc1d';
    $pane = new stdClass();
    $pane->pid = 'new-dfe769d7-83c3-4c48-8f06-9e026357e13e';
    $pane->panel = 'social';
    $pane->type = 'block';
    $pane->subtype = 'service_links-service_links';
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
    $pane->uuid = 'dfe769d7-83c3-4c48-8f06-9e026357e13e';
    $display->content['new-dfe769d7-83c3-4c48-8f06-9e026357e13e'] = $pane;
    $display->panels['social'][0] = 'new-dfe769d7-83c3-4c48-8f06-9e026357e13e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e82538d6-8e9b-42a2-a948-ae5518c6cc1d';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}

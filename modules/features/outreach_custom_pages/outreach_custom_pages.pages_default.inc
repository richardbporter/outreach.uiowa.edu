<?php
/**
 * @file
 * outreach_custom_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function outreach_custom_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_c32e03bd-555e-451a-99cd-c8d345c601d8';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
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
  $display->title = '';
  $display->uuid = '447cd181-a19f-4af8-96e6-2bbe32a6fef7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e660f257-9933-483f-9fad-09d4220cde82';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_feature-front_page_feature';
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
    $pane->uuid = 'e660f257-9933-483f-9fad-09d4220cde82';
    $display->content['new-e660f257-9933-483f-9fad-09d4220cde82'] = $pane;
    $display->panels['middle'][0] = 'new-e660f257-9933-483f-9fad-09d4220cde82';
    $pane = new stdClass();
    $pane->pid = 'new-ae902f15-64d1-4ee5-b028-25427f9b7356';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'featured_programs-home_page_featuerd_programs_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ae902f15-64d1-4ee5-b028-25427f9b7356';
    $display->content['new-ae902f15-64d1-4ee5-b028-25427f9b7356'] = $pane;
    $display->panels['middle'][1] = 'new-ae902f15-64d1-4ee5-b028-25427f9b7356';
    $pane = new stdClass();
    $pane->pid = 'new-e4972679-8253-441a-a775-9600f2bd0292';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'programs-home_page_programs_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e4972679-8253-441a-a775-9600f2bd0292';
    $display->content['new-e4972679-8253-441a-a775-9600f2bd0292'] = $pane;
    $display->panels['middle'][2] = 'new-e4972679-8253-441a-a775-9600f2bd0292';
    $pane = new stdClass();
    $pane->pid = 'new-f8b93f38-1790-470e-8050-f17792416975';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'outreach_maps-outreach_maps_county_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f8b93f38-1790-470e-8050-f17792416975';
    $display->content['new-f8b93f38-1790-470e-8050-f17792416975'] = $pane;
    $display->panels['middle'][3] = 'new-f8b93f38-1790-470e-8050-f17792416975';
    $pane = new stdClass();
    $pane->pid = 'new-3d40ca66-7061-47d3-a569-10d8b6029cc3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'stats-home_page_stats_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3d40ca66-7061-47d3-a569-10d8b6029cc3';
    $display->content['new-3d40ca66-7061-47d3-a569-10d8b6029cc3'] = $pane;
    $display->panels['middle'][4] = 'new-3d40ca66-7061-47d3-a569-10d8b6029cc3';
    $pane = new stdClass();
    $pane->pid = 'new-ff3829d8-05a2-4c14-a9bd-d37d1a70f1f1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_items-home_page_latest_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ff3829d8-05a2-4c14-a9bd-d37d1a70f1f1';
    $display->content['new-ff3829d8-05a2-4c14-a9bd-d37d1a70f1f1'] = $pane;
    $display->panels['middle'][5] = 'new-ff3829d8-05a2-4c14-a9bd-d37d1a70f1f1';
    $pane = new stdClass();
    $pane->pid = 'new-ac6a851f-73eb-4a1f-a39e-9e25fa958c65';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-home_page_events_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ac6a851f-73eb-4a1f-a39e-9e25fa958c65';
    $display->content['new-ac6a851f-73eb-4a1f-a39e-9e25fa958c65'] = $pane;
    $display->panels['middle'][6] = 'new-ac6a851f-73eb-4a1f-a39e-9e25fa958c65';
    $pane = new stdClass();
    $pane->pid = 'new-4777ebd2-8ba2-4b73-90b9-1a3b0e600900';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'videos-home_page_video_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4777ebd2-8ba2-4b73-90b9-1a3b0e600900';
    $display->content['new-4777ebd2-8ba2-4b73-90b9-1a3b0e600900'] = $pane;
    $display->panels['middle'][7] = 'new-4777ebd2-8ba2-4b73-90b9-1a3b0e600900';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}

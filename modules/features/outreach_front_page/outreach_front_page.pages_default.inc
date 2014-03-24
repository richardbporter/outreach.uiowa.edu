<?php
/**
 * @file
 * outreach_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function outreach_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'The front page.';
  $page->path = 'front-page';
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
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
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
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b84484a6-df0f-476b-81a7-5cb48c3b25fa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1e4c44db-2365-454b-bc5e-5dd1ff893625';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'slides-county_slideshow';
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
    $pane->uuid = '1e4c44db-2365-454b-bc5e-5dd1ff893625';
    $display->content['new-1e4c44db-2365-454b-bc5e-5dd1ff893625'] = $pane;
    $display->panels['contentmain'][0] = 'new-1e4c44db-2365-454b-bc5e-5dd1ff893625';
    $pane = new stdClass();
    $pane->pid = 'new-35261a51-1b9c-4c13-9a0d-02dd9d20b342';
    $pane->panel = 'contentmain';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2677',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35261a51-1b9c-4c13-9a0d-02dd9d20b342';
    $display->content['new-35261a51-1b9c-4c13-9a0d-02dd9d20b342'] = $pane;
    $display->panels['contentmain'][1] = 'new-35261a51-1b9c-4c13-9a0d-02dd9d20b342';
    $pane = new stdClass();
    $pane->pid = 'new-35818023-18c2-43da-ae94-9126d4143f66';
    $pane->panel = 'sidebar';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2669',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
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
    $pane->uuid = '35818023-18c2-43da-ae94-9126d4143f66';
    $display->content['new-35818023-18c2-43da-ae94-9126d4143f66'] = $pane;
    $display->panels['sidebar'][0] = 'new-35818023-18c2-43da-ae94-9126d4143f66';
    $pane = new stdClass();
    $pane->pid = 'new-df7199a7-1fcb-4530-90aa-12cec794daf1';
    $pane->panel = 'sidebar';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2678',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df7199a7-1fcb-4530-90aa-12cec794daf1';
    $display->content['new-df7199a7-1fcb-4530-90aa-12cec794daf1'] = $pane;
    $display->panels['sidebar'][1] = 'new-df7199a7-1fcb-4530-90aa-12cec794daf1';
    $pane = new stdClass();
    $pane->pid = 'new-05fab736-6cc1-4528-93d6-191d95e66531';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'outreach_maps-outreach_maps_county_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '05fab736-6cc1-4528-93d6-191d95e66531';
    $display->content['new-05fab736-6cc1-4528-93d6-191d95e66531'] = $pane;
    $display->panels['sidebar'][2] = 'new-05fab736-6cc1-4528-93d6-191d95e66531';
    $pane = new stdClass();
    $pane->pid = 'new-405ef0fe-a38a-4691-ab1b-0d17109cad6f';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '405ef0fe-a38a-4691-ab1b-0d17109cad6f';
    $display->content['new-405ef0fe-a38a-4691-ab1b-0d17109cad6f'] = $pane;
    $display->panels['sidebar'][3] = 'new-405ef0fe-a38a-4691-ab1b-0d17109cad6f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}

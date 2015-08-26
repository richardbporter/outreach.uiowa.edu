<?php
/**
 * @file
 * outreach_featured_programs.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function outreach_featured_programs_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:featured_program:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'featured_program';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9f9e9373-c132-40ca-aef8-1fdc9627c31b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c3a9e408-27c7-4a86-a6bc-4106162fe8b3';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featuerd_program_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'medium',
      ),
      'context' => 'panelizer',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c3a9e408-27c7-4a86-a6bc-4106162fe8b3';
    $display->content['new-c3a9e408-27c7-4a86-a6bc-4106162fe8b3'] = $pane;
    $display->panels['left'][0] = 'new-c3a9e408-27c7-4a86-a6bc-4106162fe8b3';
    $pane = new stdClass();
    $pane->pid = 'new-8e27ec32-679b-4d93-b61f-0de5944a4edb';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Program Overview',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e27ec32-679b-4d93-b61f-0de5944a4edb';
    $display->content['new-8e27ec32-679b-4d93-b61f-0de5944a4edb'] = $pane;
    $display->panels['left'][1] = 'new-8e27ec32-679b-4d93-b61f-0de5944a4edb';
    $pane = new stdClass();
    $pane->pid = 'new-67a07265-192a-455e-8755-223ed8c5653b';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_program_people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => '',
        'delete' => '',
        'add' => '',
        'description' => 0,
        'view_mode' => 'full',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%node:field_featured_prog_people_title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '67a07265-192a-455e-8755-223ed8c5653b';
    $display->content['new-67a07265-192a-455e-8755-223ed8c5653b'] = $pane;
    $display->panels['left'][2] = 'new-67a07265-192a-455e-8755-223ed8c5653b';
    $pane = new stdClass();
    $pane->pid = 'new-b61d702c-7e91-470f-b362-33c877ca36ba';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_items-featured_program_news_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_featured_program_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b61d702c-7e91-470f-b362-33c877ca36ba';
    $display->content['new-b61d702c-7e91-470f-b362-33c877ca36ba'] = $pane;
    $display->panels['left'][3] = 'new-b61d702c-7e91-470f-b362-33c877ca36ba';
    $pane = new stdClass();
    $pane->pid = 'new-5f961d48-f5ad-41dc-9e4c-7c8f7773b67c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-featured_program_events_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_featured_program_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5f961d48-f5ad-41dc-9e4c-7c8f7773b67c';
    $display->content['new-5f961d48-f5ad-41dc-9e4c-7c8f7773b67c'] = $pane;
    $display->panels['left'][4] = 'new-5f961d48-f5ad-41dc-9e4c-7c8f7773b67c';
    $pane = new stdClass();
    $pane->pid = 'new-eade114f-3d8e-4112-bf2b-99c187a7de77';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'videos-featured_program_video_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_featured_program_target_id' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'eade114f-3d8e-4112-bf2b-99c187a7de77';
    $display->content['new-eade114f-3d8e-4112-bf2b-99c187a7de77'] = $pane;
    $display->panels['left'][5] = 'new-eade114f-3d8e-4112-bf2b-99c187a7de77';
    $pane = new stdClass();
    $pane->pid = 'new-3f319f22-0cde-4055-8d07-4a13ca1fedef';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'news_items';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'latest_news_block',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f319f22-0cde-4055-8d07-4a13ca1fedef';
    $display->content['new-3f319f22-0cde-4055-8d07-4a13ca1fedef'] = $pane;
    $display->panels['right'][0] = 'new-3f319f22-0cde-4055-8d07-4a13ca1fedef';
    $pane = new stdClass();
    $pane->pid = 'new-dba100ff-52d5-47a4-af13-5903957c88c6';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_program_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'featured_program_banner',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dba100ff-52d5-47a4-af13-5903957c88c6';
    $display->content['new-dba100ff-52d5-47a4-af13-5903957c88c6'] = $pane;
    $display->panels['top'][0] = 'new-dba100ff-52d5-47a4-af13-5903957c88c6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dba100ff-52d5-47a4-af13-5903957c88c6';
  $panelizer->display = $display;
  $export['node:featured_program:default:full'] = $panelizer;

  return $export;
}

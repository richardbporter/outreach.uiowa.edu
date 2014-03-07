<?php
/**
 * @file
 * outreach_county_panelizer.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function outreach_county_panelizer_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:county:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'county';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title County';
  $display->uuid = 'b87a90af-85c6-4b1e-ad02-9463358f9927';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-998a64c2-9e81-4697-b655-5e76d888bfb0';
    $pane->panel = 'contentmain';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2673',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'About',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '998a64c2-9e81-4697-b655-5e76d888bfb0';
    $display->content['new-998a64c2-9e81-4697-b655-5e76d888bfb0'] = $pane;
    $display->panels['contentmain'][0] = 'new-998a64c2-9e81-4697-b655-5e76d888bfb0';
    $pane = new stdClass();
    $pane->pid = 'new-481736d3-4a4b-427e-acce-0695f39852f0';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-hometown_hawkeyes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '481736d3-4a4b-427e-acce-0695f39852f0';
    $display->content['new-481736d3-4a4b-427e-acce-0695f39852f0'] = $pane;
    $display->panels['contentmain'][1] = 'new-481736d3-4a4b-427e-acce-0695f39852f0';
    $pane = new stdClass();
    $pane->pid = 'new-8d63cf53-dfe8-472c-8b9c-c85e3ff2b875';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-hometown_hawkeyes_secondary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8d63cf53-dfe8-472c-8b9c-c85e3ff2b875';
    $display->content['new-8d63cf53-dfe8-472c-8b9c-c85e3ff2b875'] = $pane;
    $display->panels['contentmain'][2] = 'new-8d63cf53-dfe8-472c-8b9c-c85e3ff2b875';
    $pane = new stdClass();
    $pane->pid = 'new-931f0266-7511-4be2-b573-b6b79476ef2b';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-i_club';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '931f0266-7511-4be2-b573-b6b79476ef2b';
    $display->content['new-931f0266-7511-4be2-b573-b6b79476ef2b'] = $pane;
    $display->panels['contentmain'][3] = 'new-931f0266-7511-4be2-b573-b6b79476ef2b';
    $pane = new stdClass();
    $pane->pid = 'new-e45b8e36-d8c3-4ad4-97f3-317f6da910a4';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-undergraduate_enrollment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e45b8e36-d8c3-4ad4-97f3-317f6da910a4';
    $display->content['new-e45b8e36-d8c3-4ad4-97f3-317f6da910a4'] = $pane;
    $display->panels['contentmain'][4] = 'new-e45b8e36-d8c3-4ad4-97f3-317f6da910a4';
    $pane = new stdClass();
    $pane->pid = 'new-1d41f6dc-14cd-404f-b0a5-db83ec1bef20';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-graduate_enrollment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1d41f6dc-14cd-404f-b0a5-db83ec1bef20';
    $display->content['new-1d41f6dc-14cd-404f-b0a5-db83ec1bef20'] = $pane;
    $display->panels['contentmain'][5] = 'new-1d41f6dc-14cd-404f-b0a5-db83ec1bef20';
    $pane = new stdClass();
    $pane->pid = 'new-d58f1797-dacb-4ea1-8a6e-6dbba713ad08';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-professional_enrollment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd58f1797-dacb-4ea1-8a6e-6dbba713ad08';
    $display->content['new-d58f1797-dacb-4ea1-8a6e-6dbba713ad08'] = $pane;
    $display->panels['contentmain'][6] = 'new-d58f1797-dacb-4ea1-8a6e-6dbba713ad08';
    $pane = new stdClass();
    $pane->pid = 'new-413e0fd9-1582-4dc8-9674-c4e309531e00';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-total_enrollment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '413e0fd9-1582-4dc8-9674-c4e309531e00';
    $display->content['new-413e0fd9-1582-4dc8-9674-c4e309531e00'] = $pane;
    $display->panels['contentmain'][7] = 'new-413e0fd9-1582-4dc8-9674-c4e309531e00';
    $pane = new stdClass();
    $pane->pid = 'new-f40409ac-0905-4b01-97c4-8fc4db78bbb5';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-impact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'f40409ac-0905-4b01-97c4-8fc4db78bbb5';
    $display->content['new-f40409ac-0905-4b01-97c4-8fc4db78bbb5'] = $pane;
    $display->panels['contentmain'][8] = 'new-f40409ac-0905-4b01-97c4-8fc4db78bbb5';
    $pane = new stdClass();
    $pane->pid = 'new-9d24de70-5c44-4fef-92c0-ebb63ae58e61';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'county-healthcare_connections';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '9d24de70-5c44-4fef-92c0-ebb63ae58e61';
    $display->content['new-9d24de70-5c44-4fef-92c0-ebb63ae58e61'] = $pane;
    $display->panels['contentmain'][9] = 'new-9d24de70-5c44-4fef-92c0-ebb63ae58e61';
    $pane = new stdClass();
    $pane->pid = 'new-01a3abda-0737-4ce7-b591-42554b22c1da';
    $pane->panel = 'contentmain';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '01a3abda-0737-4ce7-b591-42554b22c1da';
    $display->content['new-01a3abda-0737-4ce7-b591-42554b22c1da'] = $pane;
    $display->panels['contentmain'][10] = 'new-01a3abda-0737-4ce7-b591-42554b22c1da';
    $pane = new stdClass();
    $pane->pid = 'new-06a1f3b9-e308-44a0-bdf3-933f07a79e05';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hometown_hawkeye_stories';
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
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '06a1f3b9-e308-44a0-bdf3-933f07a79e05';
    $display->content['new-06a1f3b9-e308-44a0-bdf3-933f07a79e05'] = $pane;
    $display->panels['contentmain'][11] = 'new-06a1f3b9-e308-44a0-bdf3-933f07a79e05';
    $pane = new stdClass();
    $pane->pid = 'new-a4014b0e-2190-4bb1-b678-90d21e313b25';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'a4014b0e-2190-4bb1-b678-90d21e313b25';
    $display->content['new-a4014b0e-2190-4bb1-b678-90d21e313b25'] = $pane;
    $display->panels['sidebar'][0] = 'new-a4014b0e-2190-4bb1-b678-90d21e313b25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:county:default'] = $panelizer;

  return $export;
}

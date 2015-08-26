<?php
/**
 * @file
 * outreach_counties.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function outreach_counties_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:county:default:full';
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
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3f03c865-85cf-4d08-a915-0ca958007465';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-98630852-f33c-405e-98f4-b5059222eb93';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'county_data-county_professionals_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Did You Know %node:title County Has:',
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
    $pane->uuid = '98630852-f33c-405e-98f4-b5059222eb93';
    $display->content['new-98630852-f33c-405e-98f4-b5059222eb93'] = $pane;
    $display->panels['left'][0] = 'new-98630852-f33c-405e-98f4-b5059222eb93';
    $pane = new stdClass();
    $pane->pid = 'new-ff931d86-8116-4a8e-8b96-e6419ef92ffc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'county_data-county_undergrad_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ff931d86-8116-4a8e-8b96-e6419ef92ffc';
    $display->content['new-ff931d86-8116-4a8e-8b96-e6419ef92ffc'] = $pane;
    $display->panels['left'][1] = 'new-ff931d86-8116-4a8e-8b96-e6419ef92ffc';
    $pane = new stdClass();
    $pane->pid = 'new-8a20cb7e-70b7-4d39-83ca-7fde5e4d5ee6';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'county_data-county_grad_students_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8a20cb7e-70b7-4d39-83ca-7fde5e4d5ee6';
    $display->content['new-8a20cb7e-70b7-4d39-83ca-7fde5e4d5ee6'] = $pane;
    $display->panels['left'][2] = 'new-8a20cb7e-70b7-4d39-83ca-7fde5e4d5ee6';
    $pane = new stdClass();
    $pane->pid = 'new-c14fedad-052c-4066-87f2-832d9e46b50e';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'profiles-profile_for_county_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_county_reference_target_id' => '%node:nid',
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
    $pane->uuid = 'c14fedad-052c-4066-87f2-832d9e46b50e';
    $display->content['new-c14fedad-052c-4066-87f2-832d9e46b50e'] = $pane;
    $display->panels['left'][3] = 'new-c14fedad-052c-4066-87f2-832d9e46b50e';
    $pane = new stdClass();
    $pane->pid = 'new-73b31948-9d85-4157-a67f-5e6cafc217b0';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'How the UI Impacts Your Neighborhood',
      'body' => '<p>Last year, the UI supported&nbsp;%node:field_county_vendors local companies with purchases of $%node:field_county_payments.</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '73b31948-9d85-4157-a67f-5e6cafc217b0';
    $display->content['new-73b31948-9d85-4157-a67f-5e6cafc217b0'] = $pane;
    $display->panels['left'][4] = 'new-73b31948-9d85-4157-a67f-5e6cafc217b0';
    $pane = new stdClass();
    $pane->pid = 'new-af050371-0aa6-41f1-8613-fe59f93ff4d5';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Healthcare Connections',
      'body' => '<p>Patient Visits:&nbsp;<strong>%node:field_county_uihc_visits</strong><br />
	​Outreach Clinic Visits:&nbsp;<strong>%node:field_county_outreach_visits</strong><br />
	Lab Tests:&nbsp;<strong>%node:field_county_lab_tests</strong></p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'af050371-0aa6-41f1-8613-fe59f93ff4d5';
    $display->content['new-af050371-0aa6-41f1-8613-fe59f93ff4d5'] = $pane;
    $display->panels['left'][5] = 'new-af050371-0aa6-41f1-8613-fe59f93ff4d5';
    $pane = new stdClass();
    $pane->pid = 'new-83f7a009-01cc-4f61-9e64-fc7e56ef2b92';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_county_hometown_hawkeye';
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
      'override_title_text' => '%node:title County Hometown Hawkeyes',
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
    $pane->uuid = '83f7a009-01cc-4f61-9e64-fc7e56ef2b92';
    $display->content['new-83f7a009-01cc-4f61-9e64-fc7e56ef2b92'] = $pane;
    $display->panels['right'][0] = 'new-83f7a009-01cc-4f61-9e64-fc7e56ef2b92';
    $pane = new stdClass();
    $pane->pid = 'new-3ef93448-b8fd-4330-a998-4f8f5c5de877';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Intro',
      'title' => '',
      'body' => '<p><strong>%node:field_county_alumni</strong> University of Iowa alumni live in&nbsp;%node:title County.</p>
<p>Students, faculty and staff at the University of Iowa come from all of Iowa&rsquo;s 99 counties. While the students stay on campus only for a short period, the influence they have back in their communities lasts a lifetime. These are the doctors, nurses, librarians, lawyers, pharmacists and much more that you interact with every day. By utilizing the education and experiences they received at the University of Iowa, your Hometown Hawkeyes are able to create a positive economic impact within their hometowns and across the state.</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3ef93448-b8fd-4330-a998-4f8f5c5de877';
    $display->content['new-3ef93448-b8fd-4330-a998-4f8f5c5de877'] = $pane;
    $display->panels['top'][0] = 'new-3ef93448-b8fd-4330-a998-4f8f5c5de877';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:county:default:full'] = $panelizer;

  return $export;
}

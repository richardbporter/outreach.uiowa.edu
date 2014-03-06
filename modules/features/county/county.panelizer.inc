<?php
/**
 * @file
 * county.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function county_panelizer_defaults() {
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
  $display->uuid = '4ce89829-8b50-4e5c-bc79-022142927308';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c1d458e-16ef-4f2d-a8e3-50a34f389010';
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
    $pane->uuid = '1c1d458e-16ef-4f2d-a8e3-50a34f389010';
    $display->content['new-1c1d458e-16ef-4f2d-a8e3-50a34f389010'] = $pane;
    $display->panels['contentmain'][0] = 'new-1c1d458e-16ef-4f2d-a8e3-50a34f389010';
    $pane = new stdClass();
    $pane->pid = 'new-8fb43e4a-dbda-40fe-b2b5-b275a8ff5534';
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
    $pane->uuid = '8fb43e4a-dbda-40fe-b2b5-b275a8ff5534';
    $display->content['new-8fb43e4a-dbda-40fe-b2b5-b275a8ff5534'] = $pane;
    $display->panels['contentmain'][1] = 'new-8fb43e4a-dbda-40fe-b2b5-b275a8ff5534';
    $pane = new stdClass();
    $pane->pid = 'new-136cd115-a269-47da-a06a-2827a8b961c8';
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
    $pane->uuid = '136cd115-a269-47da-a06a-2827a8b961c8';
    $display->content['new-136cd115-a269-47da-a06a-2827a8b961c8'] = $pane;
    $display->panels['contentmain'][2] = 'new-136cd115-a269-47da-a06a-2827a8b961c8';
    $pane = new stdClass();
    $pane->pid = 'new-e8f3127c-d984-48a1-a638-158c6fc21763';
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
    $pane->uuid = 'e8f3127c-d984-48a1-a638-158c6fc21763';
    $display->content['new-e8f3127c-d984-48a1-a638-158c6fc21763'] = $pane;
    $display->panels['contentmain'][3] = 'new-e8f3127c-d984-48a1-a638-158c6fc21763';
    $pane = new stdClass();
    $pane->pid = 'new-850357f8-10f4-47f0-a5c5-26d66768868b';
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
    $pane->uuid = '850357f8-10f4-47f0-a5c5-26d66768868b';
    $display->content['new-850357f8-10f4-47f0-a5c5-26d66768868b'] = $pane;
    $display->panels['contentmain'][4] = 'new-850357f8-10f4-47f0-a5c5-26d66768868b';
    $pane = new stdClass();
    $pane->pid = 'new-8119793b-497d-4e3a-9078-68f21368fb60';
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
    $pane->uuid = '8119793b-497d-4e3a-9078-68f21368fb60';
    $display->content['new-8119793b-497d-4e3a-9078-68f21368fb60'] = $pane;
    $display->panels['contentmain'][5] = 'new-8119793b-497d-4e3a-9078-68f21368fb60';
    $pane = new stdClass();
    $pane->pid = 'new-00fd0c4b-2b69-4b32-ab41-c7456e1e7c39';
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
    $pane->uuid = '00fd0c4b-2b69-4b32-ab41-c7456e1e7c39';
    $display->content['new-00fd0c4b-2b69-4b32-ab41-c7456e1e7c39'] = $pane;
    $display->panels['contentmain'][6] = 'new-00fd0c4b-2b69-4b32-ab41-c7456e1e7c39';
    $pane = new stdClass();
    $pane->pid = 'new-75b6da12-c915-45cb-babf-be737d07507b';
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
    $pane->uuid = '75b6da12-c915-45cb-babf-be737d07507b';
    $display->content['new-75b6da12-c915-45cb-babf-be737d07507b'] = $pane;
    $display->panels['contentmain'][7] = 'new-75b6da12-c915-45cb-babf-be737d07507b';
    $pane = new stdClass();
    $pane->pid = 'new-47d30543-08bb-429b-aad7-d5ddf01bd0d6';
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
    $pane->uuid = '47d30543-08bb-429b-aad7-d5ddf01bd0d6';
    $display->content['new-47d30543-08bb-429b-aad7-d5ddf01bd0d6'] = $pane;
    $display->panels['contentmain'][8] = 'new-47d30543-08bb-429b-aad7-d5ddf01bd0d6';
    $pane = new stdClass();
    $pane->pid = 'new-af8707f8-1585-4d5a-9c11-5bdb846f3cb3';
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
    $pane->uuid = 'af8707f8-1585-4d5a-9c11-5bdb846f3cb3';
    $display->content['new-af8707f8-1585-4d5a-9c11-5bdb846f3cb3'] = $pane;
    $display->panels['contentmain'][9] = 'new-af8707f8-1585-4d5a-9c11-5bdb846f3cb3';
    $pane = new stdClass();
    $pane->pid = 'new-6d0ceecb-4704-4d47-b059-6af5059e22ae';
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
    $pane->uuid = '6d0ceecb-4704-4d47-b059-6af5059e22ae';
    $display->content['new-6d0ceecb-4704-4d47-b059-6af5059e22ae'] = $pane;
    $display->panels['contentmain'][10] = 'new-6d0ceecb-4704-4d47-b059-6af5059e22ae';
    $pane = new stdClass();
    $pane->pid = 'new-89bccff9-26a4-4cd2-88dd-6d0e95169b0f';
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
    $pane->uuid = '89bccff9-26a4-4cd2-88dd-6d0e95169b0f';
    $display->content['new-89bccff9-26a4-4cd2-88dd-6d0e95169b0f'] = $pane;
    $display->panels['contentmain'][11] = 'new-89bccff9-26a4-4cd2-88dd-6d0e95169b0f';
    $pane = new stdClass();
    $pane->pid = 'new-fb8991f4-46dd-44a2-a8a0-b983336655a2';
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
    $pane->uuid = 'fb8991f4-46dd-44a2-a8a0-b983336655a2';
    $display->content['new-fb8991f4-46dd-44a2-a8a0-b983336655a2'] = $pane;
    $display->panels['sidebar'][0] = 'new-fb8991f4-46dd-44a2-a8a0-b983336655a2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:county:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:county:default:default';
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
  $panelizer->view_mode = 'default';
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
  $display->uuid = 'f72a2baf-bd63-48fb-a2f8-99b034c37e6d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0c03de32-21fe-408f-91ee-3b11168d9f0e';
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
    $pane->uuid = '0c03de32-21fe-408f-91ee-3b11168d9f0e';
    $display->content['new-0c03de32-21fe-408f-91ee-3b11168d9f0e'] = $pane;
    $display->panels['sidebar'][0] = 'new-0c03de32-21fe-408f-91ee-3b11168d9f0e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:county:default:default'] = $panelizer;

  return $export;
}

<?php
/**
 * @file
 * outreach_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function outreach_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<h4>Video</h4>
<h3>[title]</h3>
[body]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Home Page Videos */
  $handler = $view->new_display('panel_pane', 'Home Page Videos', 'home_page_video_pane');

  /* Display: Featured Program Video Pane */
  $handler = $view->new_display('panel_pane', 'Featured Program Video Pane', 'featured_program_video_pane');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Featured Program (field_featured_program) */
  $handler->display->display_options['arguments']['field_featured_program_target_id']['id'] = 'field_featured_program_target_id';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['table'] = 'field_data_field_featured_program';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['field'] = 'field_featured_program_target_id';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_featured_program_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_featured_program_target_id' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Featured Program (field_featured_program)',
    ),
  );
  $export['videos'] = $view;

  return $export;
}

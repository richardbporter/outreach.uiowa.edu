<?php
/**
 * @file
 * outreach_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function outreach_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'County Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = '';
  $handler->display->display_options['fields']['field_profile_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'image_style' => 'profile_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Attributes */
  $handler->display->display_options['fields']['field_profile_attributes']['id'] = 'field_profile_attributes';
  $handler->display->display_options['fields']['field_profile_attributes']['table'] = 'field_data_field_profile_attributes';
  $handler->display->display_options['fields']['field_profile_attributes']['field'] = 'field_profile_attributes';
  $handler->display->display_options['fields']['field_profile_attributes']['label'] = '';
  $handler->display->display_options['fields']['field_profile_attributes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_attributes']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_profile_attributes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile_attributes']['multi_type'] = 'ul';
  /* Field: Content: County */
  $handler->display->display_options['fields']['field_county_reference']['id'] = 'field_county_reference';
  $handler->display->display_options['fields']['field_county_reference']['table'] = 'field_data_field_county_reference';
  $handler->display->display_options['fields']['field_county_reference']['field'] = 'field_county_reference';
  $handler->display->display_options['fields']['field_county_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: County (field_county_reference) */
  $handler->display->display_options['arguments']['field_county_reference_target_id']['id'] = 'field_county_reference_target_id';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['table'] = 'field_data_field_county_reference';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['field'] = 'field_county_reference_target_id';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_county_reference_target_id']['summary_options']['items_per_page'] = '25';
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
    'profile' => 'profile',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'profile_for_county_pane');
  $handler->display->display_options['argument_input'] = array(
    'field_county_reference_target_id' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: County (field_county_reference)',
    ),
  );
  $export['profiles'] = $view;

  return $export;
}

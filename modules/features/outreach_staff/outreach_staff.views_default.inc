<?php
/**
 * @file
 * outreach_staff.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function outreach_staff_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Office of Outreach & Engagement Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_staff_first_name' => 'field_staff_first_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staff_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Last Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_staff_first_name']['id'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['table'] = 'field_data_field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['field'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['text'] = '[field_staff_first_name] [title]';
  $handler->display->display_options['fields']['field_staff_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_fp_people_email']['id'] = 'field_fp_people_email';
  $handler->display->display_options['fields']['field_fp_people_email']['table'] = 'field_data_field_fp_people_email';
  $handler->display->display_options['fields']['field_fp_people_email']['field'] = 'field_fp_people_email';
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_fp_people_phone']['id'] = 'field_fp_people_phone';
  $handler->display->display_options['fields']['field_fp_people_phone']['table'] = 'field_data_field_fp_people_phone';
  $handler->display->display_options['fields']['field_fp_people_phone']['field'] = 'field_fp_people_phone';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'staff' => 'staff',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'staff_page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'about-us/staff';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: About Us Staff Pane */
  $handler = $view->new_display('panel_pane', 'About Us Staff Pane', 'about_us_staff_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_fp_people_photo']['id'] = 'field_fp_people_photo';
  $handler->display->display_options['fields']['field_fp_people_photo']['table'] = 'field_data_field_fp_people_photo';
  $handler->display->display_options['fields']['field_fp_people_photo']['field'] = 'field_fp_people_photo';
  $handler->display->display_options['fields']['field_fp_people_photo']['label'] = '';
  $handler->display->display_options['fields']['field_fp_people_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_people_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fp_people_photo']['settings'] = array(
    'image_style' => 'featured_program_person',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Last Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_staff_first_name']['id'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['table'] = 'field_data_field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['field'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['text'] = '[field_staff_first_name] [title]';
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_staff_first_name']['alter']['path'] = '[title]';
  $handler->display->display_options['fields']['field_staff_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Job Title */
  $handler->display->display_options['fields']['field_fp_people_job_title']['id'] = 'field_fp_people_job_title';
  $handler->display->display_options['fields']['field_fp_people_job_title']['table'] = 'field_data_field_fp_people_job_title';
  $handler->display->display_options['fields']['field_fp_people_job_title']['field'] = 'field_fp_people_job_title';
  $handler->display->display_options['fields']['field_fp_people_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_fp_people_job_title']['element_label_colon'] = FALSE;
  /* Field: Field: Email */
  $handler->display->display_options['fields']['field_fp_people_email']['id'] = 'field_fp_people_email';
  $handler->display->display_options['fields']['field_fp_people_email']['table'] = 'field_data_field_fp_people_email';
  $handler->display->display_options['fields']['field_fp_people_email']['field'] = 'field_fp_people_email';
  $handler->display->display_options['fields']['field_fp_people_email']['label'] = '';
  $handler->display->display_options['fields']['field_fp_people_email']['element_label_colon'] = FALSE;
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_fp_people_phone']['id'] = 'field_fp_people_phone';
  $handler->display->display_options['fields']['field_fp_people_phone']['table'] = 'field_data_field_fp_people_phone';
  $handler->display->display_options['fields']['field_fp_people_phone']['field'] = 'field_fp_people_phone';
  $handler->display->display_options['fields']['field_fp_people_phone']['label'] = '';
  $handler->display->display_options['fields']['field_fp_people_phone']['element_label_colon'] = FALSE;
  $export['staff'] = $view;

  return $export;
}

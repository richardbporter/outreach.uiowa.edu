<?php
/**
 * @file
 * outreach_counties.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function outreach_counties_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'county_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'County Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Physicians */
  $handler->display->display_options['fields']['field_county_physicians']['id'] = 'field_county_physicians';
  $handler->display->display_options['fields']['field_county_physicians']['table'] = 'field_data_field_county_physicians';
  $handler->display->display_options['fields']['field_county_physicians']['field'] = 'field_county_physicians';
  $handler->display->display_options['fields']['field_county_physicians']['label'] = '';
  $handler->display->display_options['fields']['field_county_physicians']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_physicians']['alter']['text'] = '<p class="number">[field_county_physicians]</p>
<p>Physicians</p>';
  $handler->display->display_options['fields']['field_county_physicians']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_physicians']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Dentists */
  $handler->display->display_options['fields']['field_county_dentists']['id'] = 'field_county_dentists';
  $handler->display->display_options['fields']['field_county_dentists']['table'] = 'field_data_field_county_dentists';
  $handler->display->display_options['fields']['field_county_dentists']['field'] = 'field_county_dentists';
  $handler->display->display_options['fields']['field_county_dentists']['label'] = '';
  $handler->display->display_options['fields']['field_county_dentists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_dentists']['alter']['text'] = '<p class="number">[field_county_dentists]</p>
<p>Dentists</p>';
  $handler->display->display_options['fields']['field_county_dentists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_dentists']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Pharmacists */
  $handler->display->display_options['fields']['field_county_pharmacists']['id'] = 'field_county_pharmacists';
  $handler->display->display_options['fields']['field_county_pharmacists']['table'] = 'field_data_field_county_pharmacists';
  $handler->display->display_options['fields']['field_county_pharmacists']['field'] = 'field_county_pharmacists';
  $handler->display->display_options['fields']['field_county_pharmacists']['label'] = '';
  $handler->display->display_options['fields']['field_county_pharmacists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_pharmacists']['alter']['text'] = '<p class="number">[field_county_pharmacists]</p>
<p>Pharmacists</p>';
  $handler->display->display_options['fields']['field_county_pharmacists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_pharmacists']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nurses */
  $handler->display->display_options['fields']['field_county_nurses']['id'] = 'field_county_nurses';
  $handler->display->display_options['fields']['field_county_nurses']['table'] = 'field_data_field_county_nurses';
  $handler->display->display_options['fields']['field_county_nurses']['field'] = 'field_county_nurses';
  $handler->display->display_options['fields']['field_county_nurses']['label'] = '';
  $handler->display->display_options['fields']['field_county_nurses']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_nurses']['alter']['text'] = '<p class="number">[field_county_nurses]</p>
<p>Advanced Practice Nurses</p>';
  $handler->display->display_options['fields']['field_county_nurses']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_nurses']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Engineers */
  $handler->display->display_options['fields']['field_county_engineers']['id'] = 'field_county_engineers';
  $handler->display->display_options['fields']['field_county_engineers']['table'] = 'field_data_field_county_engineers';
  $handler->display->display_options['fields']['field_county_engineers']['field'] = 'field_county_engineers';
  $handler->display->display_options['fields']['field_county_engineers']['label'] = '';
  $handler->display->display_options['fields']['field_county_engineers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_engineers']['alter']['text'] = '<p class="number">[field_county_engineers]</p>
<p>Engineers</p>';
  $handler->display->display_options['fields']['field_county_engineers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_engineers']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Physician Assistants */
  $handler->display->display_options['fields']['field_county_physician_assistant']['id'] = 'field_county_physician_assistant';
  $handler->display->display_options['fields']['field_county_physician_assistant']['table'] = 'field_data_field_county_physician_assistant';
  $handler->display->display_options['fields']['field_county_physician_assistant']['field'] = 'field_county_physician_assistant';
  $handler->display->display_options['fields']['field_county_physician_assistant']['label'] = '';
  $handler->display->display_options['fields']['field_county_physician_assistant']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_physician_assistant']['alter']['text'] = '<p class="number">[field_county_physician_assistant]</p>
<p>Physician Assistants</p>';
  $handler->display->display_options['fields']['field_county_physician_assistant']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_physician_assistant']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Educators */
  $handler->display->display_options['fields']['field_county_educators']['id'] = 'field_county_educators';
  $handler->display->display_options['fields']['field_county_educators']['table'] = 'field_data_field_county_educators';
  $handler->display->display_options['fields']['field_county_educators']['field'] = 'field_county_educators';
  $handler->display->display_options['fields']['field_county_educators']['label'] = '';
  $handler->display->display_options['fields']['field_county_educators']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_educators']['alter']['text'] = '<p class="number">[field_county_educators]</p>
<p>Teachers & Administrators</p>';
  $handler->display->display_options['fields']['field_county_educators']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_educators']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'county' => 'county',
  );

  /* Display: Professionals */
  $handler = $view->new_display('panel_pane', 'Professionals', 'county_professionals_pane');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Undergrads */
  $handler = $view->new_display('panel_pane', 'Undergrads', 'county_undergrad_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Undergraduate Students';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_county_business' => 'field_county_business',
    'field_county_engineering' => 'field_county_engineering',
    'field_county_clas' => 'field_county_clas',
    'field_county_medicine' => 'field_county_medicine',
    'field_county_nursing' => 'field_county_nursing',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_county_business' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_engineering' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_clas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_medicine' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_nursing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Business */
  $handler->display->display_options['fields']['field_county_business']['id'] = 'field_county_business';
  $handler->display->display_options['fields']['field_county_business']['table'] = 'field_data_field_county_business';
  $handler->display->display_options['fields']['field_county_business']['field'] = 'field_county_business';
  $handler->display->display_options['fields']['field_county_business']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Engineering */
  $handler->display->display_options['fields']['field_county_engineering']['id'] = 'field_county_engineering';
  $handler->display->display_options['fields']['field_county_engineering']['table'] = 'field_data_field_county_engineering';
  $handler->display->display_options['fields']['field_county_engineering']['field'] = 'field_county_engineering';
  $handler->display->display_options['fields']['field_county_engineering']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_engineering']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: CLAS */
  $handler->display->display_options['fields']['field_county_clas']['id'] = 'field_county_clas';
  $handler->display->display_options['fields']['field_county_clas']['table'] = 'field_data_field_county_clas';
  $handler->display->display_options['fields']['field_county_clas']['field'] = 'field_county_clas';
  $handler->display->display_options['fields']['field_county_clas']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_clas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Medicine */
  $handler->display->display_options['fields']['field_county_medicine']['id'] = 'field_county_medicine';
  $handler->display->display_options['fields']['field_county_medicine']['table'] = 'field_data_field_county_medicine';
  $handler->display->display_options['fields']['field_county_medicine']['field'] = 'field_county_medicine';
  $handler->display->display_options['fields']['field_county_medicine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_medicine']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Nursing */
  $handler->display->display_options['fields']['field_county_nursing']['id'] = 'field_county_nursing';
  $handler->display->display_options['fields']['field_county_nursing']['table'] = 'field_data_field_county_nursing';
  $handler->display->display_options['fields']['field_county_nursing']['field'] = 'field_county_nursing';
  $handler->display->display_options['fields']['field_county_nursing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_nursing']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Undergraduate Total';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_county_business] + [field_county_engineering] + [field_county_clas] + [field_county_medicine] + [field_county_nursing]';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Graduate Students */
  $handler = $view->new_display('panel_pane', 'Graduate Students', 'county_grad_students_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_county_grad_college' => 'field_county_grad_college',
    'field_county_grad_medicine' => 'field_county_grad_medicine',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_county_grad_college' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_grad_medicine' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Grad College */
  $handler->display->display_options['fields']['field_county_grad_college']['id'] = 'field_county_grad_college';
  $handler->display->display_options['fields']['field_county_grad_college']['table'] = 'field_data_field_county_grad_college';
  $handler->display->display_options['fields']['field_county_grad_college']['field'] = 'field_county_grad_college';
  $handler->display->display_options['fields']['field_county_grad_college']['label'] = 'Doctoral & Masters';
  $handler->display->display_options['fields']['field_county_grad_college']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Grad Medicine */
  $handler->display->display_options['fields']['field_county_grad_medicine']['id'] = 'field_county_grad_medicine';
  $handler->display->display_options['fields']['field_county_grad_medicine']['table'] = 'field_data_field_county_grad_medicine';
  $handler->display->display_options['fields']['field_county_grad_medicine']['field'] = 'field_county_grad_medicine';
  $handler->display->display_options['fields']['field_county_grad_medicine']['label'] = 'Medicine';
  $handler->display->display_options['fields']['field_county_grad_medicine']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Graduate Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_county_grad_college] + [field_county_grad_medicine]';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Professional Students */
  $handler = $view->new_display('panel_pane', 'Professional Students', 'county_prof_students_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional Students';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_county_prof_management' => 'field_county_prof_management',
    'field_county_prof_dentistry' => 'field_county_prof_dentistry',
    'field_county_prof_law' => 'field_county_prof_law',
    'field_county_prof_medicine' => 'field_county_prof_medicine',
    'field_county_prof_pharmacy' => 'field_county_prof_pharmacy',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_county_prof_management' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_prof_dentistry' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_prof_law' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_prof_medicine' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_county_prof_pharmacy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Management */
  $handler->display->display_options['fields']['field_county_prof_management']['id'] = 'field_county_prof_management';
  $handler->display->display_options['fields']['field_county_prof_management']['table'] = 'field_data_field_county_prof_management';
  $handler->display->display_options['fields']['field_county_prof_management']['field'] = 'field_county_prof_management';
  $handler->display->display_options['fields']['field_county_prof_management']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Dentistry */
  $handler->display->display_options['fields']['field_county_prof_dentistry']['id'] = 'field_county_prof_dentistry';
  $handler->display->display_options['fields']['field_county_prof_dentistry']['table'] = 'field_data_field_county_prof_dentistry';
  $handler->display->display_options['fields']['field_county_prof_dentistry']['field'] = 'field_county_prof_dentistry';
  $handler->display->display_options['fields']['field_county_prof_dentistry']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Law */
  $handler->display->display_options['fields']['field_county_prof_law']['id'] = 'field_county_prof_law';
  $handler->display->display_options['fields']['field_county_prof_law']['table'] = 'field_data_field_county_prof_law';
  $handler->display->display_options['fields']['field_county_prof_law']['field'] = 'field_county_prof_law';
  $handler->display->display_options['fields']['field_county_prof_law']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Medicine */
  $handler->display->display_options['fields']['field_county_prof_medicine']['id'] = 'field_county_prof_medicine';
  $handler->display->display_options['fields']['field_county_prof_medicine']['table'] = 'field_data_field_county_prof_medicine';
  $handler->display->display_options['fields']['field_county_prof_medicine']['field'] = 'field_county_prof_medicine';
  $handler->display->display_options['fields']['field_county_prof_medicine']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Pharmacy */
  $handler->display->display_options['fields']['field_county_prof_pharmacy']['id'] = 'field_county_prof_pharmacy';
  $handler->display->display_options['fields']['field_county_prof_pharmacy']['table'] = 'field_data_field_county_prof_pharmacy';
  $handler->display->display_options['fields']['field_county_prof_pharmacy']['field'] = 'field_county_prof_pharmacy';
  $handler->display->display_options['fields']['field_county_prof_pharmacy']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 0,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Professional Total';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_county_prof_management] + [field_county_prof_dentistry] + [field_county_prof_law] + [field_county_prof_medicine] +[field_county_prof_pharmacy]';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.field_file_image_alt_text',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['county_data'] = $view;

  $view = new view();
  $view->name = 'hometown_hawkeyes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hometown Hawkeyes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hometown Hawkeye';
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
  /* Field: Content: Hometown Hawkeye */
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['id'] = 'field_county_hometown_hawkeye';
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['table'] = 'field_data_field_county_hometown_hawkeye';
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['field'] = 'field_county_hometown_hawkeye';
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['label'] = '';
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_county_hometown_hawkeye']['delta_offset'] = '0';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'county' => 'county',
  );

  /* Display: Featured Program Hometown Hawkeye Pane */
  $handler = $view->new_display('panel_pane', 'Featured Program Hometown Hawkeye Pane', 'featured_program_hometown_hawkeye_pane');
  $export['hometown_hawkeyes'] = $view;

  return $export;
}

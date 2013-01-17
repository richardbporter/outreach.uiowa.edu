<?php
/**
 * @file
 * county.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function county_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'county';
  $view->description = 'County views.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'County';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Healthcare Connections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alumni */
  $handler->display->display_options['fields']['field_alumni']['id'] = 'field_alumni';
  $handler->display->display_options['fields']['field_alumni']['table'] = 'field_data_field_alumni';
  $handler->display->display_options['fields']['field_alumni']['field'] = 'field_alumni';
  $handler->display->display_options['fields']['field_alumni']['label'] = '';
  $handler->display->display_options['fields']['field_alumni']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alumni']['alter']['text'] = '<p>[field_alumni] University of Iowa alumni live in Washington County.</p>';
  $handler->display->display_options['fields']['field_alumni']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alumni']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_alumni']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Physicians */
  $handler->display->display_options['fields']['field_ui_educated_physicians']['id'] = 'field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['table'] = 'field_data_field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['field'] = 'field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_physicians']['alter']['text'] = ' <p>50% of Iowa physicians are UI educated, including [field_ui_educated_physicians] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_physicians']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_physicians']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Dentists */
  $handler->display->display_options['fields']['field_ui_educated_dentists']['id'] = 'field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['table'] = 'field_data_field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['field'] = 'field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_dentists']['alter']['text'] = '<p>80% of all Iowa dentists are UI educated, including [field_ui_educated_dentists] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_dentists']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_dentists']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Pharmacists */
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['id'] = 'field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['table'] = 'field_data_field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['field'] = 'field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['alter']['text'] = '<p>47% of all Iowa pharmacists are UI educated, including [field_ui_educated_pharmacists] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h2 class="pane-title">Current University of Iowa Students from [title] County as of Fall 2012</h2>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Business */
  $handler->display->display_options['fields']['field_business']['id'] = 'field_business';
  $handler->display->display_options['fields']['field_business']['table'] = 'field_data_field_business';
  $handler->display->display_options['fields']['field_business']['field'] = 'field_business';
  $handler->display->display_options['fields']['field_business']['label'] = '';
  $handler->display->display_options['fields']['field_business']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_business']['alter']['text'] = '<a href="">Business</a>: [field_business]';
  $handler->display->display_options['fields']['field_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_business']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dentistry */
  $handler->display->display_options['fields']['field_dentistry']['id'] = 'field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['table'] = 'field_data_field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['field'] = 'field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['label'] = '';
  $handler->display->display_options['fields']['field_dentistry']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dentistry']['alter']['text'] = '<a href="http://www.dentistry.uiowa.edu/">Dentistry</a>: [field_dentistry]';
  $handler->display->display_options['fields']['field_dentistry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dentistry']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Education */
  $handler->display->display_options['fields']['field_education']['id'] = 'field_education';
  $handler->display->display_options['fields']['field_education']['table'] = 'field_data_field_education';
  $handler->display->display_options['fields']['field_education']['field'] = 'field_education';
  $handler->display->display_options['fields']['field_education']['label'] = '';
  $handler->display->display_options['fields']['field_education']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_education']['alter']['text'] = '<a href="http://www.education.uiowa.edu">Education</a>: [field_education]';
  $handler->display->display_options['fields']['field_education']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_education']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Engineering */
  $handler->display->display_options['fields']['field_engineering']['id'] = 'field_engineering';
  $handler->display->display_options['fields']['field_engineering']['table'] = 'field_data_field_engineering';
  $handler->display->display_options['fields']['field_engineering']['field'] = 'field_engineering';
  $handler->display->display_options['fields']['field_engineering']['label'] = '';
  $handler->display->display_options['fields']['field_engineering']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_engineering']['alter']['text'] = '<a href="http://www.engineering.uiowa.edu/">Engineering</a>: [field_engineering]';
  $handler->display->display_options['fields']['field_engineering']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_engineering']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_engineering']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Graduate */
  $handler->display->display_options['fields']['field_graduate']['id'] = 'field_graduate';
  $handler->display->display_options['fields']['field_graduate']['table'] = 'field_data_field_graduate';
  $handler->display->display_options['fields']['field_graduate']['field'] = 'field_graduate';
  $handler->display->display_options['fields']['field_graduate']['label'] = '';
  $handler->display->display_options['fields']['field_graduate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_graduate']['alter']['text'] = '<a href="http://www.grad.uiowa.edu/">Graduate</a>: [field_graduate]';
  $handler->display->display_options['fields']['field_graduate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_graduate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_graduate']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Law */
  $handler->display->display_options['fields']['field_law']['id'] = 'field_law';
  $handler->display->display_options['fields']['field_law']['table'] = 'field_data_field_law';
  $handler->display->display_options['fields']['field_law']['field'] = 'field_law';
  $handler->display->display_options['fields']['field_law']['label'] = '';
  $handler->display->display_options['fields']['field_law']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_law']['alter']['text'] = '<a href="http://www.law.uiowa.edu/">Law</a>: [field_law]';
  $handler->display->display_options['fields']['field_law']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_law']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_law']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Liberal Arts & Sciences */
  $handler->display->display_options['fields']['field_liberal_arts']['id'] = 'field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['table'] = 'field_data_field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['field'] = 'field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['label'] = '';
  $handler->display->display_options['fields']['field_liberal_arts']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_liberal_arts']['alter']['text'] = '<a href="http://clas.uiowa.edu">Liberal Arts &amp; Sciences</a>: [field_liberal_arts]';
  $handler->display->display_options['fields']['field_liberal_arts']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liberal_arts']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_liberal_arts']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Management */
  $handler->display->display_options['fields']['field_management']['id'] = 'field_management';
  $handler->display->display_options['fields']['field_management']['table'] = 'field_data_field_management';
  $handler->display->display_options['fields']['field_management']['field'] = 'field_management';
  $handler->display->display_options['fields']['field_management']['label'] = '';
  $handler->display->display_options['fields']['field_management']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_management']['alter']['text'] = '<a href="http://tippie.uiowa.edu/">Management</a>: [field_management]';
  $handler->display->display_options['fields']['field_management']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_management']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_management']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Medicine */
  $handler->display->display_options['fields']['field_medicine']['id'] = 'field_medicine';
  $handler->display->display_options['fields']['field_medicine']['table'] = 'field_data_field_medicine';
  $handler->display->display_options['fields']['field_medicine']['field'] = 'field_medicine';
  $handler->display->display_options['fields']['field_medicine']['label'] = '';
  $handler->display->display_options['fields']['field_medicine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_medicine']['alter']['text'] = '<a href="http://www.medicine.uiowa.edu/">Medicine</a>: [field_medicine]';
  $handler->display->display_options['fields']['field_medicine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_medicine']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_medicine']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nursing */
  $handler->display->display_options['fields']['field_nursing']['id'] = 'field_nursing';
  $handler->display->display_options['fields']['field_nursing']['table'] = 'field_data_field_nursing';
  $handler->display->display_options['fields']['field_nursing']['field'] = 'field_nursing';
  $handler->display->display_options['fields']['field_nursing']['label'] = '';
  $handler->display->display_options['fields']['field_nursing']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nursing']['alter']['text'] = '<a href="http://www.nursing.uiowa.edu/">Nursing</a>: [field_nursing]';
  $handler->display->display_options['fields']['field_nursing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nursing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nursing']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Pharmacy */
  $handler->display->display_options['fields']['field_pharmacy']['id'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['table'] = 'field_data_field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['field'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['label'] = '';
  $handler->display->display_options['fields']['field_pharmacy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['text'] = '<a href="http://pharmacy.uiowa.edu/">Pharmacy</a>: [field_pharmacy]';
  $handler->display->display_options['fields']['field_pharmacy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pharmacy']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pharmacy']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Public Health */
  $handler->display->display_options['fields']['field_public_health']['id'] = 'field_public_health';
  $handler->display->display_options['fields']['field_public_health']['table'] = 'field_data_field_public_health';
  $handler->display->display_options['fields']['field_public_health']['field'] = 'field_public_health';
  $handler->display->display_options['fields']['field_public_health']['label'] = '';
  $handler->display->display_options['fields']['field_public_health']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_public_health']['alter']['text'] = '<a href="http://www.public-health.uiowa.edu/">Public Health</a>: [field_public_health]';
  $handler->display->display_options['fields']['field_public_health']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_public_health']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_public_health']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: University College */
  $handler->display->display_options['fields']['field_university_college']['id'] = 'field_university_college';
  $handler->display->display_options['fields']['field_university_college']['table'] = 'field_data_field_university_college';
  $handler->display->display_options['fields']['field_university_college']['field'] = 'field_university_college';
  $handler->display->display_options['fields']['field_university_college']['label'] = '';
  $handler->display->display_options['fields']['field_university_college']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_university_college']['alter']['text'] = '<a href="http://www.registrar.uiowa.edu/registrar/catalog/universitycollege/">University College</a>: [field_university_college]';
  $handler->display->display_options['fields']['field_university_college']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_university_college']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_university_college']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Students */
  $handler->display->display_options['fields']['field_enrollment_total']['id'] = 'field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['table'] = 'field_data_field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['field'] = 'field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['label'] = 'Enrollment Total';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'county' => 'county',
  );
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

  /* Display: Hometown Hawkeyes */
  $handler = $view->new_display('panel_pane', 'Hometown Hawkeyes', 'hometown_hawkeyes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hometown Hawkeyes';
  $handler->display->display_options['display_description'] = 'Hometown Hawkeye fields.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alumni */
  $handler->display->display_options['fields']['field_alumni']['id'] = 'field_alumni';
  $handler->display->display_options['fields']['field_alumni']['table'] = 'field_data_field_alumni';
  $handler->display->display_options['fields']['field_alumni']['field'] = 'field_alumni';
  $handler->display->display_options['fields']['field_alumni']['label'] = '';
  $handler->display->display_options['fields']['field_alumni']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alumni']['alter']['text'] = '<p>[field_alumni] University of Iowa alumni live in [title] County.</p>';
  $handler->display->display_options['fields']['field_alumni']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alumni']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_alumni']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Educators */
  $handler->display->display_options['fields']['field_educators']['id'] = 'field_educators';
  $handler->display->display_options['fields']['field_educators']['table'] = 'field_data_field_educators';
  $handler->display->display_options['fields']['field_educators']['field'] = 'field_educators';
  $handler->display->display_options['fields']['field_educators']['label'] = '';
  $handler->display->display_options['fields']['field_educators']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_educators']['alter']['text'] = '80% of Iowa’s K-12 school districts have UI-educated teachers and administrators, including [field_educators] in [title] County.';
  $handler->display->display_options['fields']['field_educators']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_educators']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_educators']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_educators']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Physicians */
  $handler->display->display_options['fields']['field_ui_educated_physicians']['id'] = 'field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['table'] = 'field_data_field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['field'] = 'field_ui_educated_physicians';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_physicians']['alter']['text'] = ' <p>50% of Iowa physicians are UI educated, including [field_ui_educated_physicians] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_physicians']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_physicians']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Dentists */
  $handler->display->display_options['fields']['field_ui_educated_dentists']['id'] = 'field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['table'] = 'field_data_field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['field'] = 'field_ui_educated_dentists';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_dentists']['alter']['text'] = '<p>80% of all Iowa dentists are UI educated, including [field_ui_educated_dentists] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_dentists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_dentists']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: UI Educated Pharmacists */
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['id'] = 'field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['table'] = 'field_data_field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['field'] = 'field_ui_educated_pharmacists';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['label'] = '';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['alter']['text'] = '<p>47% of all Iowa pharmacists are UI educated, including [field_ui_educated_pharmacists] in [title] County.</p>';
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ui_educated_pharmacists']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['pane_title'] = 'Hometown Hawkeyes';
  $handler->display->display_options['pane_description'] = 'General stats related to this county.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Undergraduate Enrollment */
  $handler = $view->new_display('panel_pane', 'Undergraduate Enrollment', 'undergraduate_enrollment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Undergraduate Students';
  $handler->display->display_options['display_description'] = 'Undergraduate students';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Business */
  $handler->display->display_options['fields']['field_business']['id'] = 'field_business';
  $handler->display->display_options['fields']['field_business']['table'] = 'field_data_field_business';
  $handler->display->display_options['fields']['field_business']['field'] = 'field_business';
  $handler->display->display_options['fields']['field_business']['label'] = '';
  $handler->display->display_options['fields']['field_business']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_business']['alter']['text'] = '<a class="field-label" href="http://biz.uiowa.edu">Business</a> [field_business]';
  $handler->display->display_options['fields']['field_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_business']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_business']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_business']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Education */
  $handler->display->display_options['fields']['field_education']['id'] = 'field_education';
  $handler->display->display_options['fields']['field_education']['table'] = 'field_data_field_education';
  $handler->display->display_options['fields']['field_education']['field'] = 'field_education';
  $handler->display->display_options['fields']['field_education']['label'] = '';
  $handler->display->display_options['fields']['field_education']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_education']['alter']['text'] = '<a class="field-label" href="http://www.education.uiowa.edu">Education</a> [field_education]';
  $handler->display->display_options['fields']['field_education']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_education']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_education']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Engineering */
  $handler->display->display_options['fields']['field_engineering']['id'] = 'field_engineering';
  $handler->display->display_options['fields']['field_engineering']['table'] = 'field_data_field_engineering';
  $handler->display->display_options['fields']['field_engineering']['field'] = 'field_engineering';
  $handler->display->display_options['fields']['field_engineering']['label'] = '';
  $handler->display->display_options['fields']['field_engineering']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_engineering']['alter']['text'] = '<a class="field-label" href="http://www.engineering.uiowa.edu/">Engineering</a> [field_engineering]';
  $handler->display->display_options['fields']['field_engineering']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_engineering']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_engineering']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_engineering']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Liberal Arts & Sciences */
  $handler->display->display_options['fields']['field_liberal_arts']['id'] = 'field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['table'] = 'field_data_field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['field'] = 'field_liberal_arts';
  $handler->display->display_options['fields']['field_liberal_arts']['label'] = '';
  $handler->display->display_options['fields']['field_liberal_arts']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_liberal_arts']['alter']['text'] = '<a class="field-label" href="http://clas.uiowa.edu">Liberal Arts &amp; Sciences</a> [field_liberal_arts]';
  $handler->display->display_options['fields']['field_liberal_arts']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_liberal_arts']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_liberal_arts']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_liberal_arts']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Medicine */
  $handler->display->display_options['fields']['field_medicine']['id'] = 'field_medicine';
  $handler->display->display_options['fields']['field_medicine']['table'] = 'field_data_field_medicine';
  $handler->display->display_options['fields']['field_medicine']['field'] = 'field_medicine';
  $handler->display->display_options['fields']['field_medicine']['label'] = '';
  $handler->display->display_options['fields']['field_medicine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_medicine']['alter']['text'] = '<a  class="field-label" href="http://www.medicine.uiowa.edu/">Medicine</a> [field_medicine]';
  $handler->display->display_options['fields']['field_medicine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_medicine']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_medicine']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_medicine']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nursing */
  $handler->display->display_options['fields']['field_nursing']['id'] = 'field_nursing';
  $handler->display->display_options['fields']['field_nursing']['table'] = 'field_data_field_nursing';
  $handler->display->display_options['fields']['field_nursing']['field'] = 'field_nursing';
  $handler->display->display_options['fields']['field_nursing']['label'] = '';
  $handler->display->display_options['fields']['field_nursing']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nursing']['alter']['text'] = '<a class="field-label" href="http://www.nursing.uiowa.edu/">Nursing</a> [field_nursing]';
  $handler->display->display_options['fields']['field_nursing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nursing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nursing']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_nursing']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Undergraduate Total */
  $handler->display->display_options['fields']['field_undergraduate_total']['id'] = 'field_undergraduate_total';
  $handler->display->display_options['fields']['field_undergraduate_total']['table'] = 'field_data_field_undergraduate_total';
  $handler->display->display_options['fields']['field_undergraduate_total']['field'] = 'field_undergraduate_total';
  $handler->display->display_options['fields']['field_undergraduate_total']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_undergraduate_total']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_undergraduate_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_undergraduate_total']['element_wrapper_class'] = 'field-total';
  $handler->display->display_options['pane_title'] = 'Undergraduate Enrollment';
  $handler->display->display_options['pane_description'] = 'Undergraduate student enrollment.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Graduate Enrollment */
  $handler = $view->new_display('panel_pane', 'Graduate Enrollment', 'graduate_enrollment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['display_description'] = 'Graduate students';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Graduate */
  $handler->display->display_options['fields']['field_graduate']['id'] = 'field_graduate';
  $handler->display->display_options['fields']['field_graduate']['table'] = 'field_data_field_graduate';
  $handler->display->display_options['fields']['field_graduate']['field'] = 'field_graduate';
  $handler->display->display_options['fields']['field_graduate']['label'] = '';
  $handler->display->display_options['fields']['field_graduate']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_graduate']['alter']['text'] = '<a class="field-label" href="http://www.grad.uiowa.edu/">Doctoral & Master\'s</a> [field_graduate]';
  $handler->display->display_options['fields']['field_graduate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_graduate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_graduate']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_graduate']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Graduate Medicine */
  $handler->display->display_options['fields']['field_graduate_medicine']['id'] = 'field_graduate_medicine';
  $handler->display->display_options['fields']['field_graduate_medicine']['table'] = 'field_data_field_graduate_medicine';
  $handler->display->display_options['fields']['field_graduate_medicine']['field'] = 'field_graduate_medicine';
  $handler->display->display_options['fields']['field_graduate_medicine']['label'] = '';
  $handler->display->display_options['fields']['field_graduate_medicine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_graduate_medicine']['alter']['text'] = '<a class="field-label" href="http://www.medicine.uiowa.edu/">Medicine</a> [field_graduate_medicine]';
  $handler->display->display_options['fields']['field_graduate_medicine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_graduate_medicine']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_graduate_medicine']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_graduate_medicine']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Public Health */
  $handler->display->display_options['fields']['field_public_health']['id'] = 'field_public_health';
  $handler->display->display_options['fields']['field_public_health']['table'] = 'field_data_field_public_health';
  $handler->display->display_options['fields']['field_public_health']['field'] = 'field_public_health';
  $handler->display->display_options['fields']['field_public_health']['label'] = '';
  $handler->display->display_options['fields']['field_public_health']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_public_health']['alter']['text'] = '<a class="field-label" href="http://www.public-health.uiowa.edu/">Public Health</a> [field_public_health]';
  $handler->display->display_options['fields']['field_public_health']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_public_health']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_public_health']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_public_health']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Graduate Total */
  $handler->display->display_options['fields']['field_graduate_total']['id'] = 'field_graduate_total';
  $handler->display->display_options['fields']['field_graduate_total']['table'] = 'field_data_field_graduate_total';
  $handler->display->display_options['fields']['field_graduate_total']['field'] = 'field_graduate_total';
  $handler->display->display_options['fields']['field_graduate_total']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_graduate_total']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_graduate_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_graduate_total']['element_wrapper_class'] = 'field-total';
  $handler->display->display_options['pane_title'] = 'Graduate Enrollment';
  $handler->display->display_options['pane_description'] = 'Graduate student enrollment.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Professional Enrollment */
  $handler = $view->new_display('panel_pane', 'Professional Enrollment', 'professional_enrollment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional Students';
  $handler->display->display_options['display_description'] = 'Professional students';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Management */
  $handler->display->display_options['fields']['field_management']['id'] = 'field_management';
  $handler->display->display_options['fields']['field_management']['table'] = 'field_data_field_management';
  $handler->display->display_options['fields']['field_management']['field'] = 'field_management';
  $handler->display->display_options['fields']['field_management']['label'] = '';
  $handler->display->display_options['fields']['field_management']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_management']['alter']['text'] = '<a class="field-label" href="http://tippie.uiowa.edu/">Management</a> [field_management]';
  $handler->display->display_options['fields']['field_management']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_management']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_management']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_management']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dentistry */
  $handler->display->display_options['fields']['field_dentistry']['id'] = 'field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['table'] = 'field_data_field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['field'] = 'field_dentistry';
  $handler->display->display_options['fields']['field_dentistry']['label'] = '';
  $handler->display->display_options['fields']['field_dentistry']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dentistry']['alter']['text'] = '<a class="field-label" href="http://www.dentistry.uiowa.edu/">Dentistry</a> [field_dentistry]';
  $handler->display->display_options['fields']['field_dentistry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dentistry']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_dentistry']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Law */
  $handler->display->display_options['fields']['field_law']['id'] = 'field_law';
  $handler->display->display_options['fields']['field_law']['table'] = 'field_data_field_law';
  $handler->display->display_options['fields']['field_law']['field'] = 'field_law';
  $handler->display->display_options['fields']['field_law']['label'] = '';
  $handler->display->display_options['fields']['field_law']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_law']['alter']['text'] = '<a class="field-label" href="http://www.law.uiowa.edu/">Law</a> [field_law]';
  $handler->display->display_options['fields']['field_law']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_law']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_law']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_law']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Professional Medicine */
  $handler->display->display_options['fields']['field_professional_medicine']['id'] = 'field_professional_medicine';
  $handler->display->display_options['fields']['field_professional_medicine']['table'] = 'field_data_field_professional_medicine';
  $handler->display->display_options['fields']['field_professional_medicine']['field'] = 'field_professional_medicine';
  $handler->display->display_options['fields']['field_professional_medicine']['label'] = '';
  $handler->display->display_options['fields']['field_professional_medicine']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_professional_medicine']['alter']['text'] = '<a class="field-label" href="http://medicine.uiowa.edu/">Medicine</a> [field_professional_medicine]';
  $handler->display->display_options['fields']['field_professional_medicine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_professional_medicine']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_professional_medicine']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_professional_medicine']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Pharmacy */
  $handler->display->display_options['fields']['field_pharmacy']['id'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['table'] = 'field_data_field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['field'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['label'] = '';
  $handler->display->display_options['fields']['field_pharmacy']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['text'] = '<a class="field-label" href="http://pharmacy.uiowa.edu/">Pharmacy</a> [field_pharmacy]';
  $handler->display->display_options['fields']['field_pharmacy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pharmacy']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pharmacy']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pharmacy']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Professional Total */
  $handler->display->display_options['fields']['field_professional_total']['id'] = 'field_professional_total';
  $handler->display->display_options['fields']['field_professional_total']['table'] = 'field_data_field_professional_total';
  $handler->display->display_options['fields']['field_professional_total']['field'] = 'field_professional_total';
  $handler->display->display_options['fields']['field_professional_total']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_professional_total']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_professional_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_professional_total']['element_wrapper_class'] = 'field-total';
  $handler->display->display_options['pane_title'] = 'Professional Enrollment';
  $handler->display->display_options['pane_description'] = 'Professional student enrollment.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Total Enrollment */
  $handler = $view->new_display('panel_pane', 'Total Enrollment', 'total_enrollment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Total Students';
  $handler->display->display_options['display_description'] = 'Sum of all students.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Students */
  $handler->display->display_options['fields']['field_enrollment_total']['id'] = 'field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['table'] = 'field_data_field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['field'] = 'field_enrollment_total';
  $handler->display->display_options['fields']['field_enrollment_total']['label'] = '';
  $handler->display->display_options['fields']['field_enrollment_total']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enrollment_total']['alter']['text'] = 'There are <span>[field_enrollment_total]</span> students from [title] County currently enrolled at The University of Iowa.';
  $handler->display->display_options['fields']['field_enrollment_total']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enrollment_total']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_enrollment_total']['empty_zero'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Total Enrollment';
  $handler->display->display_options['pane_description'] = 'Sum of all students.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Impact */
  $handler = $view->new_display('panel_pane', 'Impact', 'impact');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'How the UI impacts your neighborhood';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendors Paid */
  $handler->display->display_options['fields']['field_vendors_paid']['id'] = 'field_vendors_paid';
  $handler->display->display_options['fields']['field_vendors_paid']['table'] = 'field_data_field_vendors_paid';
  $handler->display->display_options['fields']['field_vendors_paid']['field'] = 'field_vendors_paid';
  $handler->display->display_options['fields']['field_vendors_paid']['label'] = '';
  $handler->display->display_options['fields']['field_vendors_paid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vendors_paid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vendors_paid']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_vendors_paid']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Sum of Payments */
  $handler->display->display_options['fields']['field_sum_of_payments']['id'] = 'field_sum_of_payments';
  $handler->display->display_options['fields']['field_sum_of_payments']['table'] = 'field_data_field_sum_of_payments';
  $handler->display->display_options['fields']['field_sum_of_payments']['field'] = 'field_sum_of_payments';
  $handler->display->display_options['fields']['field_sum_of_payments']['label'] = '';
  $handler->display->display_options['fields']['field_sum_of_payments']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sum_of_payments']['alter']['text'] = 'Last year, the UI supported [field_vendors_paid] [title] County companies with purchases of [field_sum_of_payments].';
  $handler->display->display_options['fields']['field_sum_of_payments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sum_of_payments']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sum_of_payments']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_title'] = 'How the UI impacts your neighborhood.';
  $handler->display->display_options['pane_description'] = 'Stats relating to this county\'s vendors.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Healthcare Connections */
  $handler = $view->new_display('panel_pane', 'Healthcare Connections', 'healthcare_connections');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Healthcare Connections';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Patient Visits */
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['id'] = 'field_uihc_clinic_visits';
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['table'] = 'field_data_field_uihc_clinic_visits';
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['field'] = 'field_uihc_clinic_visits';
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['label'] = '';
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['alter']['text'] = '[field_uihc_clinic_visits] [title] County residents received service from The University of Iowa Hospitals and Clinics.';
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_uihc_clinic_visits']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Outreach Clinic Visits */
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['id'] = 'field_outreach_clinic_visits';
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['table'] = 'field_data_field_outreach_clinic_visits';
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['field'] = 'field_outreach_clinic_visits';
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['label'] = '';
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['alter']['text'] = 'An additional [field_outreach_clinic_visits] [title] County residents received services through UI Outreach Specialty Clinics and UI Home Care, a visiting nursing program.';
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_outreach_clinic_visits']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['pane_title'] = 'Healthcare Connections';
  $handler->display->display_options['pane_description'] = 'Stats related to this county\'s healthcare information.';
  $handler->display->display_options['pane_category']['name'] = 'County';
  $handler->display->display_options['pane_category']['weight'] = '0';
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
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['county'] = $view;

  return $export;
}

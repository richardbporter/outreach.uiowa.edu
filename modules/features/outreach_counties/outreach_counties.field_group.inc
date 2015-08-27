<?php
/**
 * @file
 * outreach_counties.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function outreach_counties_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_basic_info|node|county|form';
  $field_group->group_name = 'group_county_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_county_alumni',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_basic_info|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_grad_students|node|county|form';
  $field_group->group_name = 'group_county_grad_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grad Students',
    'weight' => '3',
    'children' => array(
      0 => 'field_county_grad_college',
      1 => 'field_county_grad_medicine',
      2 => 'field_county_grad_public_health',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-grad-students field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_grad_students|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_grad|node|county|default';
  $field_group->group_name = 'group_county_grad';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Graduate Students',
    'weight' => '3',
    'children' => array(
      0 => 'field_county_grad_college',
      1 => 'field_county_grad_medicine',
      2 => 'field_county_grad_public_health',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-county-grad field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_county_grad|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_healthcare|node|county|default';
  $field_group->group_name = 'group_county_healthcare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Healthcare',
    'weight' => '6',
    'children' => array(
      0 => 'field_county_lab_tests',
      1 => 'field_county_outreach_visits',
      2 => 'field_county_uihc_visits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-county-healthcare field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_county_healthcare|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_healthcare|node|county|form';
  $field_group->group_name = 'group_county_healthcare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Healthcare',
    'weight' => '7',
    'children' => array(
      0 => 'field_county_lab_tests',
      1 => 'field_county_outreach_visits',
      2 => 'field_county_uihc_visits',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-healthcare field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_healthcare|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_hometown|node|county|form';
  $field_group->group_name = 'group_county_hometown';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hometown Hawkeyes',
    'weight' => '8',
    'children' => array(
      0 => 'field_county_hometown_hawkeye',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-hometown field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_hometown|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_prof_students|node|county|form';
  $field_group->group_name = 'group_county_prof_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional Students',
    'weight' => '4',
    'children' => array(
      0 => 'field_county_prof_dentistry',
      1 => 'field_county_prof_law',
      2 => 'field_county_prof_management',
      3 => 'field_county_prof_medicine',
      4 => 'field_county_prof_pharmacy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-prof-students field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_prof_students|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_professionals|node|county|default';
  $field_group->group_name = 'group_county_professionals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professionals',
    'weight' => '1',
    'children' => array(
      0 => 'field_county_dentists',
      1 => 'field_county_educators',
      2 => 'field_county_engineers',
      3 => 'field_county_nurses',
      4 => 'field_county_pharmacists',
      5 => 'field_county_physician_assistant',
      6 => 'field_county_physicians',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Professionals',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-county-professionals field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_county_professionals|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_professionals|node|county|form';
  $field_group->group_name = 'group_county_professionals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professionals',
    'weight' => '1',
    'children' => array(
      0 => 'field_county_dentists',
      1 => 'field_county_educators',
      2 => 'field_county_engineers',
      3 => 'field_county_nurses',
      4 => 'field_county_pharmacists',
      5 => 'field_county_physician_assistant',
      6 => 'field_county_physicians',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-professionals field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_professionals|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_prof|node|county|default';
  $field_group->group_name = 'group_county_prof';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional Students',
    'weight' => '4',
    'children' => array(
      0 => 'field_county_prof_dentistry',
      1 => 'field_county_prof_law',
      2 => 'field_county_prof_management',
      3 => 'field_county_prof_medicine',
      4 => 'field_county_prof_pharmacy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-county-prof field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_county_prof|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_undergraduate|node|county|default';
  $field_group->group_name = 'group_county_undergraduate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Undergraduate Students',
    'weight' => '2',
    'children' => array(
      0 => 'field_county_business',
      1 => 'field_county_clas',
      2 => 'field_county_education',
      3 => 'field_county_engineering',
      4 => 'field_county_medicine',
      5 => 'field_county_nursing',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-county-undergraduate field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_county_undergraduate|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_undergraduate|node|county|form';
  $field_group->group_name = 'group_county_undergraduate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Undergraduate',
    'weight' => '2',
    'children' => array(
      0 => 'field_county_business',
      1 => 'field_county_clas',
      2 => 'field_county_education',
      3 => 'field_county_engineering',
      4 => 'field_county_medicine',
      5 => 'field_county_nursing',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-undergraduate field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_undergraduate|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_vendors|node|county|default';
  $field_group->group_name = 'group_county_vendors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendors',
    'weight' => '5',
    'children' => array(
      0 => 'field_county_payments',
      1 => 'field_county_vendors',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-county-vendors field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_county_vendors|node|county|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_county_vendors|node|county|form';
  $field_group->group_name = 'group_county_vendors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vendors',
    'weight' => '5',
    'children' => array(
      0 => 'field_county_vendors',
      1 => 'field_county_payments',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-county-vendors field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_county_vendors|node|county|form'] = $field_group;

  return $export;
}

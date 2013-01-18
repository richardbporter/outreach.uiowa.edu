<?php
/**
 * @file
 * county.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function county_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|county|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '2',
    'children' => array(
      0 => 'field_year',
      1 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_graduate_enrolllment|node|county|form';
  $field_group->group_name = 'group_graduate_enrolllment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hometown_hawkeyes';
  $field_group->data = array(
    'label' => 'Graduate Enrollment',
    'weight' => '17',
    'children' => array(
      0 => 'field_graduate',
      1 => 'field_public_health',
      2 => 'field_graduate_medicine',
      3 => 'field_graduate_total',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_graduate_enrolllment|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_healthcare_connections|node|county|form';
  $field_group->group_name = 'group_healthcare_connections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Healthcare Connections',
    'weight' => '6',
    'children' => array(
      0 => 'field_uihc_clinic_visits',
      1 => 'field_outreach_clinic_visits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_healthcare_connections|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hometown_hawkeyes|node|county|form';
  $field_group->group_name = 'group_hometown_hawkeyes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hometown Hawkeyes',
    'weight' => '3',
    'children' => array(
      0 => 'field_alumni',
      1 => 'field_ui_educated_physicians',
      2 => 'field_total_physicians',
      3 => 'field_ui_educated_assistants',
      4 => 'field_total_assistants',
      5 => 'field_ui_educated_dentists',
      6 => 'field_total_dentists',
      7 => 'field_ui_educated_nurses',
      8 => 'field_total_nurses',
      9 => 'field_ui_educated_pharmacists',
      10 => 'field_total_pharmacists',
      11 => 'field_university_college',
      12 => 'field_enrollment_total',
      13 => 'field_educators',
      14 => 'group_undergraduate_enrollment',
      15 => 'group_graduate_enrolllment',
      16 => 'group_professional_enrollment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hometown_hawkeyes|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hygienic_lab|node|county|form';
  $field_group->group_name = 'group_hygienic_lab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hygienic Lab',
    'weight' => '8',
    'children' => array(
      0 => 'field_clinical',
      1 => 'field_elis',
      2 => 'field_inmsp',
      3 => 'field_hygienic_lab_total',
      4 => 'field_dist',
      5 => 'field_dist_1',
      6 => 'field_dist_2',
      7 => 'field_dist_3',
      8 => 'field_dist_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hygienic_lab|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impact|node|county|form';
  $field_group->group_name = 'group_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Impact',
    'weight' => '4',
    'children' => array(
      0 => 'field_vendors_paid',
      1 => 'field_sum_of_payments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_impact|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_enrollment|node|county|form';
  $field_group->group_name = 'group_professional_enrollment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hometown_hawkeyes';
  $field_group->data = array(
    'label' => 'Professional Enrollment',
    'weight' => '18',
    'children' => array(
      0 => 'field_management',
      1 => 'field_dentistry',
      2 => 'field_law',
      3 => 'field_pharmacy',
      4 => 'field_professional_medicine',
      5 => 'field_professional_total',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_professional_enrollment|node|county|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_undergraduate_enrollment|node|county|form';
  $field_group->group_name = 'group_undergraduate_enrollment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'county';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hometown_hawkeyes';
  $field_group->data = array(
    'label' => 'Undergraduate Enrollment',
    'weight' => '16',
    'children' => array(
      0 => 'field_business',
      1 => 'field_education',
      2 => 'field_engineering',
      3 => 'field_liberal_arts',
      4 => 'field_medicine',
      5 => 'field_nursing',
      6 => 'field_undergraduate_total',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_undergraduate_enrollment|node|county|form'] = $field_group;

  return $export;
}

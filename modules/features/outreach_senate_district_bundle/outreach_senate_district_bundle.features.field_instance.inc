<?php
/**
 * @file
 * outreach_senate_district_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function outreach_senate_district_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-senate_district-field_county'
  $field_instances['node-senate_district-field_county'] = array(
    'bundle' => 'senate_district',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The county or counties that fully or partially reside within this district.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_county',
    'label' => 'County',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-senate_district-field_senate_district_num'
  $field_instances['node-senate_district-field_senate_district_num'] = array(
    'bundle' => 'senate_district',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_senate_district_num',
    'label' => 'Senate district number',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('County');
  t('Senate district number');
  t('The county or counties that fully or partially reside within this district.');

  return $field_instances;
}

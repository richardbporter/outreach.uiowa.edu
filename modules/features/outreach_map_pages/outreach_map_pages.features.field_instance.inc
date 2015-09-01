<?php
/**
 * @file
 * outreach_map_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function outreach_map_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-map-field_map'
  $field_instances['node-map-field_map'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_map',
    'label' => 'Map',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Map');

  return $field_instances;
}

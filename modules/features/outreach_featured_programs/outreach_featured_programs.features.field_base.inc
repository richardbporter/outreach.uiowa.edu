<?php
/**
 * @file
 * outreach_featured_programs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function outreach_featured_programs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_fp_people_unit'
  $field_bases['field_fp_people_unit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fp_people_unit',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}

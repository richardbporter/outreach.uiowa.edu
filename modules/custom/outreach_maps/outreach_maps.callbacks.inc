<?php
/**
 * @file
 * This file contains all the callback and helper functions for the Outreach Maps module.
 */

/**
 * Callback for hook_menu().
 *
 * @param $county
 *   The name of the county.
 *
 * @return $data
 *   JSON formatted data.
 */
function _outreach_maps_load_county($title) {
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyCondition('status', 1)
  ->propertyCondition('title', $title);

  $result = $query->execute();

  if (isset($result['node'])) {
    $key = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $key[0];
    $county = node_load($nid);

    $data = array(
      'name' => ucfirst($title),
      'year' => format_date(strtotime($county->field_year['und']['0']['value']), 'custom', 'Y'),
      'students' => $county->field_enrollment_total['und']['0']['value'],
      'alumni' => $county->field_alumni['und']['0']['value'],
    );

    return drupal_json_output($data);
  }
  else {
    return 'No county found.';
  }
}

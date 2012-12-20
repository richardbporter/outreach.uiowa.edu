<?php
/**
 * @file
 * This file holds one-time helper functions to manipulate the data on the
 * Outreach site. I used them a few times by calling them manually.
 */

/**
 * Helper function to convert CSV data to an array formatted for GeoJSON. Writes
 * output to screen. Intended to be used once to create GeoJSON files.
 *
 * @param $file
 */
function _outreach_maps_csv_array($file) {
  $row = 1;
  if (($handle = fopen(drupal_get_path('module', 'outreach_maps') . '/inc/csv/' . $file . '.csv', 'r')) !== FALSE) {
      while (($data = fgetcsv($handle, 1000, ",")) !== FALSE) {
          echo "array('geometry' => array(\n  'type' => 'Point',\n  'coordinates' => array(" . $data[2] . ", " . $data[1] . "), \n),\n'properties' => array(\n  'text' => '" . $data[0] . "',\n)),\n";
          $row++;
      }
      fclose($handle);
  }
}

/**
 * Helper function to migrate county fields to district content types.
 *
 * @param string $field The field to migrate.
 * @param string $district_type The district type to migrate the fields to.
 *
 * This iterates over each county, then each value of a district field and sets
 * the corresponding district county field to the current county. The district
 * county field is a term reference.
 */
function _outreach_maps_migrate_fields($field, $district_type) {
  // Create an EFQ to get all counties.
  $county_query = new EntityFieldQuery();

  // Set some conditions.
  $county_query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyCondition('status', 1);

  // Execute the query.
  $county_result = $county_query->execute();

  // Check for a result.
  if (isset($county_result['node'])) {
    $keys = array_keys($county_result['node']);

    // Load all nodes.
    $county_nodes = node_load_multiple($keys);

    foreach ($county_nodes as $county) {
      foreach ($county->{$field}[LANGUAGE_NONE] as $key => $value) {

        $field_value = !empty($county->{$field}[LANGUAGE_NONE][$key]['value']) ? $county->{$field}[LANGUAGE_NONE][$key]['value'] : NULL;

        if ($field_value) {
          // Create an EFQ to get congressional info.
            $query = new EntityFieldQuery();

            // Set some conditions.
            $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', '$district_type' . '_district')
            ->propertyCondition('status', 1)
            ->fieldCondition('field_' . $district_type . '_district_num', 'value', $field_value, '=');

            // Execute the query.
            $result = $query->execute();

            // Check for a result.
            if (isset($result['node'])) {
              $keys = array_keys($result['node']);

              // node_load expects a single $nid parameter, not an array.
              $nid = $keys[0];
              $node = node_load($nid);

              $i = 0;

              foreach ($node->field_county[LANGUAGE_NONE] as $k => $v) {
                $exists = FALSE;
                if (isset($v['target_id'])) {
                  if ($v['target_id'] == $county->nid) {
                    $exists = TRUE;
                    dpm($v['target_id']);
                  }
                }
                $i++;
              }

              if ($exists == FALSE) {
                $node->field_county[LANGUAGE_NONE][$i]['target_id'] = $county->nid;
                node_save($node);
              }
          }
        }
      }
    }
  }

}

/**
 * Helper function to set the district number field on each district type.
 *
 * @param string $district_type The type of district, house, senate or congressional.
 */
function _outreach_maps_set_district_number($district_type) {
  $field = '';
  switch ($district_type) {
    case 'house':
      $field = 'field_house_district_num';
      break;
    case 'senate':
      $field = 'field_senate_district_num';
      break;
    case 'congressional':
      $field = 'field_congressional_district_num';
      break;
    default:
      return drupal_set_error('Incorrect field.');
      break;
  }

  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', $district_type . '_district')
  ->propertyCondition('status', 1);

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // Load all nodes.
    $districts = node_load_multiple($keys);

    foreach ($districts as $district) {
      $title_parts = explode(' ', $district->title);

      foreach ($title_parts as $char) {
        if (is_numeric($char)) {
          $district->{$field}[LANGUAGE_NONE]['0']['value'] = $char;
          node_save($district);
        }
      }
    }
  }
}

/**
 * Helper function to create a certain number of districts.
 *
 * @param  string $district_type The type of district, house, senate or congressional.
 * @param  integer $count        The number of districts to create. Each step in
 * the loop will use the current count as the district number.
 */
function _outreach_maps_create_districts($district_type, $count) {
  $field = '';
  switch ($district_type) {
    case 'house':
      $field = 'field_house_district_num';
      break;
    case 'senate':
      $field = 'field_senate_district_num';
      break;
    case 'congressional':
      $field = 'field_congressional_district_num';
      break;
    default:
      return drupal_set_error('Incorrect field.');
      break;
  }

 for ($i=1; $i <= $count; $i++) {
   $node = new stdClass();
   $node->type = $district_type . '_district';
   node_object_prepare($node);

   $title = ucwords(str_replace('_', ' ', $district_type)) . ' District ' . $i;
   $node->title = $title;
   $node->language = LANGUAGE_NONE;

   $node->{$field}[LANGUAGE_NONE]['0']['value'] = $i;

   node_save($node);
 }
}

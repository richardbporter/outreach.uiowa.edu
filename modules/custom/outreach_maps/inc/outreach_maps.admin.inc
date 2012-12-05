<?php
/**
 * @file
 *
 * This file contains all the callback and helper functions for the Outreach
 * Maps module.
 *
 * Each map has a separate callback since the fields are so different.
 *
 * These functions do not handle non-JavaScript users since JS
 * is required to even see the map.
 */

/**
 * Callback for county map in hook_menu().
 *
 * @param $title
 *   The name of the county, title of the node. Hyphenated in URL.
 *
 * @return JSON AJAX response
 */
function _outreach_maps_load_county($title) {
  // Replace the hypen with a space for the EFQ.
  $name = str_replace('-', ' ', $title);

  // Manually replace O'Brien for now.
  if ($name == 'obrien') {
    $name = "O'Brien";
  }

  // Create an EFQ to get county info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyCondition('status', 1)
  ->propertyCondition('title', $name);

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $keys[0];
    $node = node_load($nid);

    // Create a render array to store the fields.
    $data = array(
      'hometown_hawkeyes_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h6>Hometown Hawkeyes</h6>',
      ),
      'enrollment_total' => array(field_view_field('node', $node, 'field_enrollment_total', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'alumni' => array(field_view_field('node', $node, 'field_alumni', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'healthcare_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h6>Healthcare</h6>',
      ),
      'clinic_visits' => array(field_view_field('node', $node, 'field_uihc_clinic_visits', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'outreach_visits' => array(field_view_field('node', $node, 'field_outreach_clinic_visits', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'more_link' => array(
        '#type' => 'link',
        '#title' => t('See More »'),
        '#href' => 'county/' . $title,
      ),
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $title . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'fadeIn', array('fast'));

    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
  else {
    return 'County not found.';
  }
}

/**
 * Callback for house map in hook_menu().
 *
 * @param $district_number
 *   The number of the house district, title of the node. Hyphenated in URL.
 *
 * @return JSON AJAX response
 */
function _outreach_maps_load_house($district_number) {
  // Create an EFQ to get house info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'house_district')
  ->propertyCondition('status', 1)
  ->fieldCondition('field_house_district_num', 'value', $district_number, '=');

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $keys[0];
    $node = node_load($nid);

    // Get a list of counties in this district.

    // Create a render array to store the fields.
    $data = array(
      'counties_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h6>Counties</h6>',
      ),
      'counties' => array(field_view_field('node', $node, 'field_county', array('label' => 'hidden'))),
      'more_link' => array(
        '#type' => 'link',
        '#title' => t('See More »'),
        '#href' => 'house/house-district-' . $district_number,
      ),
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $district_number . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'fadeIn', array('fast'));
    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
  else {
    return 'No data found.';
  }
}

/**
 * Callback for senate map in hook_menu().
 *
 * @param $district_number
 *   The number of the senate district, title of the node. Hyphenated in URL.
 *
 * @return JSON AJAX response
 */
function _outreach_maps_load_senate($district_number) {
  // Create an EFQ to get senate info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'senate')
  ->propertyCondition('status', 1)
  ->propertyCondition('title', $name);

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $keys[0];
    $node = node_load($nid);

    // Get a list of counties in this district.

    // Create a render array to store the fields.
    $data = array(
      '#type' => 'markup',
      '#markup' => '<p>This is some content for Congressional District '. $district_number . '.',
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $district_number . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'fadeIn', array('fast'));
    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
  else {
    return 'Senate District not found.';
  }
}

/**
 * Callback for congressional map in hook_menu().
 *
 * @param $district_number
 *   The number of the congressional district, title of the node. Hyphenated in URL.
 *
 * @return JSON AJAX response
 */
function _outreach_maps_load_congressional($district_number) {
  // Create an EFQ to get congressional info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'congressional')
  ->propertyCondition('status', 1)
  ->propertyCondition('title', $name);

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $keys[0];
    $node = node_load($nid);


    // Get a list of counties in this district.

    // Create a render array to store the fields.
    $data = array(
      '#type' => 'markup',
      '#markup' => '<p>This is some content for Congressional District '. $district_number . '.',
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $district_number . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'fadeIn', array('fast'));
    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
  else {
    return 'Congressional District not found.';
  }
}

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
          echo "array('geometry' => array(\n  'type' => 'Point',\n  'coordinates' => array(". $data[2] . ", " . $data[1] . "), \n),\n'properties' => array(\n  'text' => '" . $data[0] . "',\n)),\n";
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
function _outreach_maps_migrate_fields(field, district_type) {
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
 * @param  integer $count         The number of districts to create. Each step in
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
   $node = new StdClass();
   $node->type = $district_type . '_district';
   node_object_prepare($node);

   $title = ucwords(str_replace('_', ' ', $district_type)) . ' District ' . $i;
   $node->title = $title;
   $node->language = LANGUAGE_NONE;

   $node->{$field}[LANGUAGE_NONE]['0']['value'] = $i;

   node_save($node);
 }
}

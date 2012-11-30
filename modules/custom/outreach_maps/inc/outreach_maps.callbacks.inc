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
      'outreach_visits' => array(field_view_field('node', $node, 'field_uihc_outreach_visits', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'more_link' => array(
        '#text' => t('See More »'),
        '#path' => 'county/' . $title,
        '#theme' => 'link',
        '#options' => array(
          'attributes' => array('html' => FALSE),
        ),
      ),
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $title . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'fadeIn', array('fast'));

    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
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
  ->entityCondition('bundle', 'house')
  ->propertyCondition('status', 1)
  ->fieldCondition('field_district_number', 'value', '=', $district_number);

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
      '#markup' => '<p>This is some content for House District '. $district_number . '.',
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $district_number . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $district_number . '-content', 'fadeIn', array('fast'));
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    return 'House District not found.';
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
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
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
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
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

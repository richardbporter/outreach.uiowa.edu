<?php
/**
 * @file
 *
 * This file contains all the callback functions for the Outreach
 * Maps module.
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
        '#markup' => '<h3>Hometown Hawkeyes</h3>',
      ),
      'enrollment_total' => array(field_view_field('node', $node, 'field_enrollment_total', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'alumni' => array(field_view_field('node', $node, 'field_alumni', array('label' => 'inline', 'type' => 'outreach_maps_number_formatter'))),
      'healthcare_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h3>Healthcare</h3>',
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
    return 'No data found.';
  }
}

/**
 * Callback for district maps in hook_menu().
 *
 * @param string $district_type The type of district, house, senate or congressional.
 *
 * @param int $district_number The district number, field value.
 *
 * @return JSON $response AJAX command response.
 */
function _outreach_maps_load_district($district_type, $district_number) {
  // Create an EFQ to get district info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', $district_type . '_district')
  ->propertyCondition('status', 1)
  ->fieldCondition('field_' . $district_type . '_district_num', 'value', $district_number, '=');

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
      'counties_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h3>Counties</h3>',
      ),
      'counties' => array(field_view_field('node', $node, 'field_county', array('label' => 'hidden', 'type' => 'outreach_maps_county_link_formatter'))),
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#district-' . $district_number . '-content', 'hide');
    $commands[] = ajax_command_html('#district-' . $district_number . '-content', $html);
    $commands[] = ajax_command_invoke('#district-' . $district_number . '-content', 'fadeIn', array('fast'));
    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
  else {
    return 'No data found.';
  }
}

/**
 * Helper function to return a list of linked county titles.
 * @return array county list
 */
function _outreach_maps_county_list() {
  // List to return.
  $list = array();

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
      $list[] = array(
        '#type' => 'link',
        '#title' => $county->title,
        '#href' => 'county/' . lcfirst($county->title),
        '#options' => array(
          'attributes' => array('class' => 'county-list'),
        ),
      );
    }
  }

  return $list;
}

/**
 * Helper function to return node title given an nid.
 *
 * @param  int $nid The node id.
 * @return string $title The node title.
 */
function _outreach_maps_county_title($nid) {
  // The node title to return.
  $title = '';

  // Create an EFQ to get county info.
  $query = new EntityFieldQuery();

  // Set some conditions.
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyCondition('status', 1)
  ->propertyCondition('nid', $nid);

  // Execute the query.
  $result = $query->execute();

  // Check for a result.
  if (isset($result['node'])) {
    $keys = array_keys($result['node']);

    // node_load expects a single $nid parameter, not an array.
    $nid = $keys[0];
    $node = node_load($nid);

    $title = $node->title;
  }

  return $title;
}

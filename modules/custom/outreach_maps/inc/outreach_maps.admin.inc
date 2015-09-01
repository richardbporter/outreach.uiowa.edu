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
/*
      §  26,078 University of Iowa alumni live in Johnson County
§  80% of all Iowa’s K-12 school districts have UI educated teachers and administrators, including 697 in Johnson County.
§  50% of all Iowa physicians are UI educated, including 609 in Johnson County.
§  80% of all Iowa dentists are UI educated, including 110 in Johnson County.
§  47% of all Iowa pharmacists are UI educated, including 260 in Johnson County. */
    $alumni = field_view_field('node', $node, 'field_county_alumni','default');
    $data['alumni'] = array(
      '#markup' => '<strong>'.strip_tags(render($alumni)).'</strong> University of Iowa alumni live in '.ucwords($title).' County <br />',
    );

    $educators = field_view_field('node', $node, 'field_county_educators','default');
    $data['educators'] = array(
      '#markup' => '80% of all Iowa’s K-12 school districts have UI educated teachers and administrators, including <strong>'.strip_tags(render($educators)).'</strong> in '.ucwords($title).' County.<br />',
    );

    $physicians = field_view_field('node', $node, 'field_county_physicians','default');
    $data['physicians'] = array(
      '#markup' => '50% of all Iowa physicians are UI educated, including <strong>'.strip_tags(render($physicians)).'</strong> in '.ucwords($title).' County.<br />',
    );

    $dentists = field_view_field('node', $node, 'field_county_dentists','default');
    $data['dentists'] = array(
      '#markup' => '80% of all Iowa dentists are UI educated, including <strong>'.strip_tags(render($dentists)).'</strong> in '.ucwords($title).' County.<br />',
    );

    $pharmacists = field_view_field('node', $node, 'field_county_pharmacists','default');
    $data['pharmacists'] = array(
      '#markup' => '47% of all Iowa pharmacists are UI educated, including <strong>'.strip_tags(render($pharmacists)).'</strong> in '.ucwords($title).' County.<br />',
    );

    // More link
    $data['more_link'] = array(
      '#type' => 'link',
      '#title' => t('See More »'),
      '#href' => 'county/' . $title,
      '#options' => array(
        'attributes' => array(
          'class' => 'see-more',
        ),
      ),
    );


    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_html('#'.$title.'-data', $html);

    $response = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($response);
  }
}


function _outreach_maps_county_list() {
  $options = array();

  $options['default'] = 'Select a county';

   // Create an EFQ to get all counties.
  $county_query = new EntityFieldQuery();

  // Set some conditions.
  $county_query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyOrderBy('title', 'ASC')
  ->propertyCondition('status', 1);

  // Execute the query.
  $county_result = $county_query->execute();

  // Check for a result.
  if (isset($county_result['node'])) {
    $keys = array_keys($county_result['node']);

    // Load all nodes.
    $county_nodes = node_load_multiple($keys);

    foreach ($county_nodes as $county) {
      $options[strtolower(str_replace(' ', '-', str_replace("'", '', $county->title)))] = $county->title;
    }
  }

  // Create render array for select list of counties in footer.
  $select = array(
    '#type' => 'select',
    '#options' => $options,
    '#attributes' => array(
      'class' => array('county-list'),
    ),
  );

  return $select;
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

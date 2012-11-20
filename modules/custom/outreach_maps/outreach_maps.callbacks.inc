<?php
/**
 * @file
 * This file contains all the callback and helper functions for the Outreach Maps module.
 */

/**
 * Callback for hook_menu().
 *
 * This does not handle non-JavaScript users since JS is required to even see
 * the map.
 *
 * @param $title
 *   The name of the county, title of the node. Hyphenated in URL.
 *
 * @return $data
 *   Formatted HTML data.
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

    // Get and format all fields.
    $enrollment = number_format($node->field_enrollment_total['und']['0']['value']);
    $alumni = number_format($node->field_alumni['und']['0']['value']);
    $uihc_clinic_vists = number_format($node->field_uihc_clinic_visits['und']['0']['value']);
    $uihc_outreach_vists = number_format($node->field_uihc_outreach_visits['und']['0']['value']);

    // Hometown Hawkeye fields.
    $hometown_hawkeyes = array(
      'Students: ' . $enrollment,
      'Alumni: ' . $alumni,
    );

    // Healthcare fields.
    $healthcare = array(
      'UIHC clinic visits: ' . $uihc_clinic_vists,
      'UIHC outreach visits: ' . $uihc_outreach_vists,
    );

    // Create a data variable to pass back to the page.
    $data = '';

    // Begin Hometown Hawkeyes.
    $data .= '<h6>Hometown Hawkeyes</h6>';
    $data .= '<div>';

    // Theme Hometown Hawkeyes fields and append to data.
    $data .= theme('item_list', array('items' => $hometown_hawkeyes, 'attributes' => array('class' => 'test')));

    // End Hometown Hawkeyes.
    $data .= '</div>';

    // Begin Healthcare.
    $data .= '<h6>Healthcare</h6>';
    $data .= '<div>';

    // Theme Healthcare fields and append to data.
    $data .= theme('item_list', array('items' => $healthcare, 'attributes' => array('class' => 'test')));

    // End Healthcare.
    $data .= '</div>';

    $data .= l('See More »', 'county/' . $title);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $title . '-content', $data);
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'fadeIn', array('fast'));
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    return 'County not found.';
  }
}

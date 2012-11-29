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

    // Create a render array to store the fields.
    $data = array();

    $data['hometown_hawkeyes'] = array(
      'hometown_hawkeyes_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h6>Hometown Hawkeyes</h6>',
      ),
      'hometown_hawkeyes_list' => array(
        '#items' => $hometown_hawkeyes,
        '#theme' => 'item_list',
      ),
    );

    $data['healthcare'] = array(
      'healtcare_heading' => array(
        '#type' => 'markup',
        '#markup' => '<h6>Healthcare</h6>',
      ),
      'healthcare_list' => array(
        '#items' => $healthcare,
        '#theme' => 'item_list',
      ),
    );

    $data['more_link'] = array(
      '#text' => t('See More »'),
      '#path' => 'county/' . $title,
      '#theme' => 'link',
      '#options' => array(
        'attributes' => array(),
      ),
    );

    // Convert the render array to markup to pass to ajax_command_html().
    $html = drupal_render($data);

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'hide');
    $commands[] = ajax_command_html('#' . $title . '-content', $html);
    $commands[] = ajax_command_invoke('#' . $title . '-content', 'fadeIn', array('fast'));
    //$commands[] = ajax_command_invoke('#' . $title . '-content', 'accordion');
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
  else {
    return 'County not found.';
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

<?php
/**
 * @file
 * This file generates the GeoJSON for the congressional map.
 */

/**
 * Helper function to format GeoJSON.
 *
 * @return object
 */
function _outreach_maps_return_congressional_geo_json() {
  // Create congressional data array.
  $congressional_geo_data = array(
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.89, 42.53),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.15, 41.21),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.64, 41.2),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.64, 42.63),
    ),
      'properties' => array(
      'text' => '4',
    )),
  );

  // Encode array into JSON format.
  $congressional_geo_json = drupal_json_encode($congressional_geo_data);

  // Return formatted JSON.
  return $congressional_geo_json;
}

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
      'coordinates' => array(-91.89148047, 42.52511295),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.14920807, 41.20828571),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.63737102, 41.20396153),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.64074748, 42.626428),
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

<?php

function _outreach_maps_return_county_geo_json() {
  $county_geo_data = array(
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5697204, 41.6842807),
    ),
    'properties' => array(
      'text' => 'Polk',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8271491, 41.6885843),
    ),
    'properties' => array(
      'text' => 'Harrison',
    )),
  );

  $county_geo_json = drupal_json_encode($county_geo_data);

  return $county_geo_json;
}

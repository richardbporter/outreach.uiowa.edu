<?php
/**
 * @file
 * This file generates the GeoJSON for the senate map.
 */

/**
 * Helper function to format GeoJSON.
 *
 * @return object
 */
function _outreach_maps_return_senate_geo_json() {
  // Create senate data array.
  $senate_geo_data = array(
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.4060158, 42.5260677),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.2586999, 43.088535),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.4188318, 43.1954637),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.4549414, 43.0310711),
    ),
      'properties' => array(
      'text' => '4',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6518247, 42.4066438),
    ),
      'properties' => array(
      'text' => '5',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.4676869, 43.0903313),
    ),
      'properties' => array(
      'text' => '6',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8187911, 43.1902295),
    ),
      'properties' => array(
      'text' => '7',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.9184804, 43.2488571),
    ),
      'properties' => array(
      'text' => '8',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3679583, 42.7781822),
    ),
      'properties' => array(
      'text' => '9',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.4732693, 42.4606418),
    ),
      'properties' => array(
      'text' => '10',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3270805, 42.4480123),
    ),
      'properties' => array(
      'text' => '11',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6165652, 42.6644286),
    ),
      'properties' => array(
      'text' => '12',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5382899, 42.1262839),
    ),
      'properties' => array(
      'text' => '13',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.7071429, 42.5024441),
    ),
      'properties' => array(
      'text' => '14',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5627237, 41.8541494),
    ),
      'properties' => array(
      'text' => '15',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1161414, 42.3184733),
    ),
      'properties' => array(
      'text' => '16',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6909206, 41.9411146),
    ),
      'properties' => array(
      'text' => '17',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6602044, 42.1425063),
    ),
      'properties' => array(
      'text' => '18',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6557333, 42.0094004),
    ),
      'properties' => array(
      'text' => '19',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.404056, 42.1589084),
    ),
      'properties' => array(
      'text' => '20',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.1078289, 41.6849169),
    ),
      'properties' => array(
      'text' => '21',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.1195029, 42.2123699),
    ),
      'properties' => array(
      'text' => '22',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7093554, 42.0129168),
    ),
      'properties' => array(
      'text' => '23',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.9979212, 41.8677806),
    ),
      'properties' => array(
      'text' => '24',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.4207907, 42.275576),
    ),
      'properties' => array(
      'text' => '25',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.0809827, 42.3334139),
    ),
      'properties' => array(
      'text' => '26',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.864205, 42.6602978),
    ),
      'properties' => array(
      'text' => '27',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.7932134, 42.0194357),
    ),
      'properties' => array(
      'text' => '28',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.8640148, 41.5253478),
    ),
      'properties' => array(
      'text' => '29',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.745698, 41.5628335),
    ),
      'properties' => array(
      'text' => '30',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6546248, 41.5501852),
    ),
      'properties' => array(
      'text' => '31',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7273928, 41.6311565),
    ),
      'properties' => array(
      'text' => '32',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6287668, 41.6000428),
    ),
      'properties' => array(
      'text' => '33',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5369366, 41.5651172),
    ),
      'properties' => array(
      'text' => '34',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5943785, 41.7649369),
    ),
      'properties' => array(
      'text' => '35',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.0376765, 41.1945986),
    ),
      'properties' => array(
      'text' => '36',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.8097184, 41.3471613),
    ),
      'properties' => array(
      'text' => '37',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3086236, 41.549227),
    ),
      'properties' => array(
      'text' => '38',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5189487, 41.6515485),
    ),
      'properties' => array(
      'text' => '39',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1274023, 41.6787743),
    ),
      'properties' => array(
      'text' => '40',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5004111, 41.5639369),
    ),
      'properties' => array(
      'text' => '41',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.6418154, 41.7515735),
    ),
      'properties' => array(
      'text' => '42',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5955864, 41.5533893),
    ),
      'properties' => array(
      'text' => '43',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.2261977, 41.1105424),
    ),
      'properties' => array(
      'text' => '44',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.90768, 41.1068028),
    ),
      'properties' => array(
      'text' => '45',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5068791, 40.7915813),
    ),
      'properties' => array(
      'text' => '46',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8384076, 40.7689166),
    ),
      'properties' => array(
      'text' => '47',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.3675526, 40.8875367),
    ),
      'properties' => array(
      'text' => '48',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.4701423, 40.938325),
    ),
      'properties' => array(
      'text' => '49',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8654702, 41.2432724),
    ),
      'properties' => array(
      'text' => '50',
    )),
  );

  // Encode array into JSON format.
  $senate_geo_json = drupal_json_encode($senate_geo_data);

  // Return formatted JSON.
  return $senate_geo_json;
}

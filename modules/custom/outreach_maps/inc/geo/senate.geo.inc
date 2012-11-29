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
      'coordinates' => array(-95.36595489, 43.24571932),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.85140011, 42.9623349),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.19629221, 42.60624489),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.0215613, 43.13519244),
    ),
      'properties' => array(
      'text' => '4',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.46371961, 42.58305868),
    ),
      'properties' => array(
      'text' => '5',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.03583615, 42.22241269),
    ),
      'properties' => array(
      'text' => '6',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.34167859, 42.52156201),
    ),
      'properties' => array(
      'text' => '7',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.86396826, 41.24031777),
    ),
      'properties' => array(
      'text' => '8',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.67462371, 41.96817278),
    ),
      'properties' => array(
      'text' => '9',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.36639144, 41.56328029),
    ),
      'properties' => array(
      'text' => '10',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.00981657, 41.21260101),
    ),
      'properties' => array(
      'text' => '11',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.05505594, 40.82420475),
    ),
      'properties' => array(
      'text' => '12',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7863598, 41.33161577),
    ),
      'properties' => array(
      'text' => '13',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.43515246, 41.00414601),
    ),
      'properties' => array(
      'text' => '14',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.17748073, 41.71167307),
    ),
      'properties' => array(
      'text' => '15',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.54165754, 41.60388389),
    ),
      'properties' => array(
      'text' => '16',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.59017798, 41.55231774),
    ),
      'properties' => array(
      'text' => '17',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.66020727, 41.6223119),
    ),
      'properties' => array(
      'text' => '18',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.59605086, 41.74173201),
    ),
      'properties' => array(
      'text' => '19',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.75517003, 41.69676662),
    ),
      'properties' => array(
      'text' => '20',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.71914436, 41.54412804),
    ),
      'properties' => array(
      'text' => '21',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.82111396, 41.59163068),
    ),
      'properties' => array(
      'text' => '22',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.56755632, 42.02371432),
    ),
      'properties' => array(
      'text' => '23',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.00216671, 42.17235506),
    ),
      'properties' => array(
      'text' => '24',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.07973744, 42.33881347),
    ),
      'properties' => array(
      'text' => '25',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.64236709, 43.23613463),
    ),
      'properties' => array(
      'text' => '26',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.16480091, 42.85648732),
    ),
      'properties' => array(
      'text' => '27',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.52452764, 43.07776492),
    ),
      'properties' => array(
      'text' => '28',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.81180562, 42.25712611),
    ),
      'properties' => array(
      'text' => '29',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.46677084, 42.43958793),
    ),
      'properties' => array(
      'text' => '30',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.23557721, 42.42554998),
    ),
      'properties' => array(
      'text' => '31',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.06293403, 42.66188715),
    ),
      'properties' => array(
      'text' => '32',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.65780668, 41.99849682),
    ),
      'properties' => array(
      'text' => '33',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5712803, 41.97305927),
    ),
      'properties' => array(
      'text' => '34',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.73260507, 41.93560061),
    ),
      'properties' => array(
      'text' => '35',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.71837228, 42.0728688),
    ),
      'properties' => array(
      'text' => '36',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.21740181, 41.76486478),
    ),
      'properties' => array(
      'text' => '37',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.20958221, 41.83648964),
    ),
      'properties' => array(
      'text' => '38',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.88605368, 41.43088894),
    ),
      'properties' => array(
      'text' => '39',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.75612474, 41.06460617),
    ),
      'properties' => array(
      'text' => '40',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.1710627, 40.84256316),
    ),
      'properties' => array(
      'text' => '41',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.55651772, 40.86117792),
    ),
      'properties' => array(
      'text' => '42',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.51855976, 41.64227169),
    ),
      'properties' => array(
      'text' => '43',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.21355278, 41.17748313),
    ),
      'properties' => array(
      'text' => '44',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.64428321, 41.516901),
    ),
      'properties' => array(
      'text' => '45',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.8323688, 41.563785),
    ),
      'properties' => array(
      'text' => '46',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.49447328, 41.5680873),
    ),
      'properties' => array(
      'text' => '47',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.45989391, 42.30423309),
    ),
      'properties' => array(
      'text' => '48',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.52851561, 41.85652654),
    ),
      'properties' => array(
      'text' => '49',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.71396761, 42.50954368),
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

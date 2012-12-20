<?php
/**
 * @file
 * This file generates the GeoJSON for the house map.
 */

/**
 * Helper function to format GeoJSON.
 *
 * @return object
 */
function _outreach_maps_return_house_geo_json() {
  // Create house data array.
  $house_geo_data = array(
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.80151412, 43.38846543),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.94168154, 43.10667194),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.68586148, 42.9164057),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.23005153, 43.06739291),
    ),
      'properties' => array(
      'text' => '4',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.18245462, 42.64909341),
    ),
      'properties' => array(
      'text' => '5',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.27250976, 42.37023502),
    ),
      'properties' => array(
      'text' => '6',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.22200187, 43.3648643),
    ),
      'properties' => array(
      'text' => '7',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.87302354, 42.96499264),
    ),
      'properties' => array(
      'text' => '8',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.18616082, 42.54721467),
    ),
      'properties' => array(
      'text' => '9',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.50804308, 42.58878263),
    ),
      'properties' => array(
      'text' => '10',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.12837232, 42.56164431),
    ),
      'properties' => array(
      'text' => '11',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.9525058, 41.91692898),
    ),
      'properties' => array(
      'text' => '12',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.30551596, 42.5193624),
    ),
      'properties' => array(
      'text' => '13',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.44072788, 42.52758673),
    ),
      'properties' => array(
      'text' => '14',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.88847339, 41.27219807),
    ),
      'properties' => array(
      'text' => '15',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.85642862, 41.23050897),
    ),
      'properties' => array(
      'text' => '16',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.83338494, 42.08738114),
    ),
      'properties' => array(
      'text' => '17',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.44352294, 41.79464714),
    ),
      'properties' => array(
      'text' => '18',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.96759345, 41.67545631),
    ),
      'properties' => array(
      'text' => '19',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.47921111, 41.53154577),
    ),
      'properties' => array(
      'text' => '20',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.72413034, 41.14637178),
    ),
      'properties' => array(
      'text' => '21',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.61187414, 41.35217305),
    ),
      'properties' => array(
      'text' => '22',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.50807253, 40.92295064),
    ),
      'properties' => array(
      'text' => '23',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.73336387, 40.7540842),
    ),
      'properties' => array(
      'text' => '24',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.91490418, 41.3192309),
    ),
      'properties' => array(
      'text' => '25',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.50265539, 41.35894984),
    ),
      'properties' => array(
      'text' => '26',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.60485528, 40.84382356),
    ),
      'properties' => array(
      'text' => '27',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.12837348, 41.29396769),
    ),
      'properties' => array(
      'text' => '28',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.07482369, 41.7216309),
    ),
      'properties' => array(
      'text' => '29',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.43352988, 41.68683607),
    ),
      'properties' => array(
      'text' => '30',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.51816826, 41.59686619),
    ),
      'properties' => array(
      'text' => '31',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.58549696, 41.61698144),
    ),
      'properties' => array(
      'text' => '32',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.57251923, 41.55494206),
    ),
      'properties' => array(
      'text' => '33',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.62575661, 41.54703027),
    ),
      'properties' => array(
      'text' => '34',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.63559619, 41.61749852),
    ),
      'properties' => array(
      'text' => '35',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.68039826, 41.6262608),
    ),
      'properties' => array(
      'text' => '36',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.58856207, 41.7748918),
    ),
      'properties' => array(
      'text' => '37',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.60802189, 41.68872523),
    ),
      'properties' => array(
      'text' => '38',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.75519347, 41.7119657),
    ),
      'properties' => array(
      'text' => '39',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.75507288, 41.63378457),
    ),
      'properties' => array(
      'text' => '40',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.67358334, 41.55740654),
    ),
      'properties' => array(
      'text' => '41',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.74870949, 41.53551145),
    ),
      'properties' => array(
      'text' => '42',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.75590377, 41.59873329),
    ),
      'properties' => array(
      'text' => '43',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.84644012, 41.58887219),
    ),
      'properties' => array(
      'text' => '44',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.56219743, 42.02229826),
    ),
      'properties' => array(
      'text' => '45',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6431582, 42.0436918),
    ),
      'properties' => array(
      'text' => '46',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.23910273, 42.02994345),
    ),
      'properties' => array(
      'text' => '47',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.78822269, 42.30094722),
    ),
      'properties' => array(
      'text' => '48',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.33392482, 42.13873876),
    ),
      'properties' => array(
      'text' => '49',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.90844997, 42.4736364),
    ),
      'properties' => array(
      'text' => '50',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.66103992, 43.36465641),
    ),
      'properties' => array(
      'text' => '51',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.61712218, 43.06237836),
    ),
      'properties' => array(
      'text' => '52',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.20064002, 43.08375398),
    ),
      'properties' => array(
      'text' => '53',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.16045255, 42.82891308),
    ),
      'properties' => array(
      'text' => '54',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.77235473, 43.10602259),
    ),
      'properties' => array(
      'text' => '55',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.34608, 43.057418),
    ),
      'properties' => array(
      'text' => '56',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.87879561, 42.4837099),
    ),
      'properties' => array(
      'text' => '57',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.78155608, 42.15481148),
    ),
      'properties' => array(
      'text' => '58',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.45655305, 42.53612431),
    ),
      'properties' => array(
      'text' => '59',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.4685245, 42.42301962),
    ),
      'properties' => array(
      'text' => '60',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.21029106, 42.40137019),
    ),
      'properties' => array(
      'text' => '61',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3275159, 42.51346602),
    ),
      'properties' => array(
      'text' => '62',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.30356632, 42.71125521),
    ),
      'properties' => array(
      'text' => '63',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.86888526, 42.62207615),
    ),
      'properties' => array(
      'text' => '64',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.63058448, 41.97400492),
    ),
      'properties' => array(
      'text' => '65',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.68184076, 42.02012035),
    ),
      'properties' => array(
      'text' => '66',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.64737757, 42.06124102),
    ),
      'properties' => array(
      'text' => '67',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.54947524, 41.9477915),
    ),
      'properties' => array(
      'text' => '68',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.71484836, 41.90958028),
    ),
      'properties' => array(
      'text' => '69',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.77126034, 41.99224528),
    ),
      'properties' => array(
      'text' => '70',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.91817787, 42.12561235),
    ),
      'properties' => array(
      'text' => '71',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.68582679, 42.06427763),
    ),
      'properties' => array(
      'text' => '72',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.20170294, 41.76706056),
    ),
      'properties' => array(
      'text' => '73',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.58357178, 41.713649),
    ),
      'properties' => array(
      'text' => '74',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0705249, 42.03287119),
    ),
      'properties' => array(
      'text' => '75',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.32696917, 41.6707117),
    ),
      'properties' => array(
      'text' => '76',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.64421796, 41.63950814),
    ),
      'properties' => array(
      'text' => '77',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.98040394, 41.34949785),
    ),
      'properties' => array(
      'text' => '78',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.78743663, 41.3511791),
    ),
      'properties' => array(
      'text' => '79',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.74822157, 40.99227472),
    ),
      'properties' => array(
      'text' => '80',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.31494532, 41.00318021),
    ),
      'properties' => array(
      'text' => '81',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.14603042, 40.81461948),
    ),
      'properties' => array(
      'text' => '82',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.44102513, 40.57346131),
    ),
      'properties' => array(
      'text' => '83',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.59367446, 40.95374326),
    ),
      'properties' => array(
      'text' => '84',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.51281529, 41.67128771),
    ),
      'properties' => array(
      'text' => '85',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.52205342, 41.6246248),
    ),
      'properties' => array(
      'text' => '86',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.11430441, 40.82402718),
    ),
      'properties' => array(
      'text' => '87',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.21819268, 41.19400734),
    ),
      'properties' => array(
      'text' => '88',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.62767623, 41.55280836),
    ),
      'properties' => array(
      'text' => '89',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.65365163, 41.49664473),
    ),
      'properties' => array(
      'text' => '90',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.95381004, 41.47744578),
    ),
      'properties' => array(
      'text' => '91',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.74234796, 41.62778575),
    ),
      'properties' => array(
      'text' => '92',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.53574149, 41.55012382),
    ),
      'properties' => array(
      'text' => '93',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.48119755, 41.57386603),
    ),
      'properties' => array(
      'text' => '94',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.60914656, 42.18708307),
    ),
      'properties' => array(
      'text' => '95',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.33592663, 42.40153636),
    ),
      'properties' => array(
      'text' => '96',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.60877726, 41.82621926),
    ),
      'properties' => array(
      'text' => '97',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.32040078, 41.93511193),
    ),
      'properties' => array(
      'text' => '98',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.72497078, 42.48738619),
    ),
      'properties' => array(
      'text' => '99',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.7024957, 42.5326451),
    ),
      'properties' => array(
      'text' => '100',
    )),
  );

  // Encode array into JSON format.
  $house_geo_json = drupal_json_encode($house_geo_data);

  // Return formatted JSON.
  return $house_geo_json;
}

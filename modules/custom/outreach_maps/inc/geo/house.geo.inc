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
      'coordinates' => array(-96.4618196, 42.536102),
    ),
      'properties' => array(
      'text' => '1',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.370063, 42.5219075),
    ),
      'properties' => array(
      'text' => '2',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.3269156, 42.8111378),
    ),
      'properties' => array(
      'text' => '3',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.2209888, 43.2793152),
    ),
      'properties' => array(
      'text' => '4',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.5389799, 43.1534068),
    ),
      'properties' => array(
      'text' => '5',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1267816, 43.3237634),
    ),
      'properties' => array(
      'text' => '6',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.4937474, 43.235741),
    ),
      'properties' => array(
      'text' => '7',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.3943755, 42.787924),
    ),
      'properties' => array(
      'text' => '8',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7823966, 42.5804596),
    ),
      'properties' => array(
      'text' => '9',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.4727423, 42.1303691),
    ),
      'properties' => array(
      'text' => '10',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5934867, 43.2931365),
    ),
      'properties' => array(
      'text' => '11',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.3300389, 42.8987015),
    ),
      'properties' => array(
      'text' => '12',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.1997949, 43.1486093),
    ),
      'properties' => array(
      'text' => '13',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8187911, 43.1902295),
    ),
      'properties' => array(
      'text' => '14',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.2246046, 43.2060253),
    ),
      'properties' => array(
      'text' => '15',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5136223, 43.3066296),
    ),
      'properties' => array(
      'text' => '16',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.7017284, 42.7405297),
    ),
      'properties' => array(
      'text' => '17',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0485616, 42.8242485),
    ),
      'properties' => array(
      'text' => '18',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.5094294, 42.5490073),
    ),
      'properties' => array(
      'text' => '19',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.4571184, 42.4075008),
    ),
      'properties' => array(
      'text' => '20',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3522233, 42.3774932),
    ),
      'properties' => array(
      'text' => '21',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.2890729, 42.5097258),
    ),
      'properties' => array(
      'text' => '22',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.9129404, 42.4562754),
    ),
      'properties' => array(
      'text' => '23',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.4260778, 42.7908687),
    ),
      'properties' => array(
      'text' => '24',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5657859, 42.1668803),
    ),
      'properties' => array(
      'text' => '25',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.2883423, 41.8806215),
    ),
      'properties' => array(
      'text' => '26',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.6998856, 42.5290984),
    ),
      'properties' => array(
      'text' => '27',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.7076537, 42.4818925),
    ),
      'properties' => array(
      'text' => '28',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5645139, 41.8654141),
    ),
      'properties' => array(
      'text' => '29',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5955962, 41.7194393),
    ),
      'properties' => array(
      'text' => '30',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.0849176, 42.1967016),
    ),
      'properties' => array(
      'text' => '31',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1579925, 42.4798567),
    ),
      'properties' => array(
      'text' => '32',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6870028, 41.9310251),
    ),
      'properties' => array(
      'text' => '33',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.7207974, 41.9820026),
    ),
      'properties' => array(
      'text' => '34',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6814864, 42.1570793),
    ),
      'properties' => array(
      'text' => '35',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5559994, 42.1011747),
    ),
      'properties' => array(
      'text' => '36',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6760099, 42.0282492),
    ),
      'properties' => array(
      'text' => '37',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.6288931, 41.9801771),
    ),
      'properties' => array(
      'text' => '38',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0764405, 42.0434444),
    ),
      'properties' => array(
      'text' => '39',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.6596273, 42.2440448),
    ),
      'properties' => array(
      'text' => '40',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.005584, 41.7097337),
    ),
      'properties' => array(
      'text' => '41',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.3390944, 41.6071009),
    ),
      'properties' => array(
      'text' => '42',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8890423, 42.1151199),
    ),
      'properties' => array(
      'text' => '43',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.1550032, 42.2338503),
    ),
      'properties' => array(
      'text' => '44',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6345599, 41.9914346),
    ),
      'properties' => array(
      'text' => '45',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7283076, 42.0153706),
    ),
      'properties' => array(
      'text' => '46',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.0065868, 41.7112328),
    ),
      'properties' => array(
      'text' => '47',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.9986327, 42.0260308),
    ),
      'properties' => array(
      'text' => '48',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.115614, 42.5521308),
    ),
      'properties' => array(
      'text' => '49',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.4472162, 42.2309402),
    ),
      'properties' => array(
      'text' => '50',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.0053883, 42.0724908),
    ),
      'properties' => array(
      'text' => '51',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1435412, 42.6012528),
    ),
      'properties' => array(
      'text' => '52',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8489068, 42.6697649),
    ),
      'properties' => array(
      'text' => '53',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.3670642, 42.4401733),
    ),
      'properties' => array(
      'text' => '54',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.7055571, 42.2491601),
    ),
      'properties' => array(
      'text' => '55',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8813676, 41.786828),
    ),
      'properties' => array(
      'text' => '56',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.2031037, 41.5162469),
    ),
      'properties' => array(
      'text' => '57',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6145644, 41.5384032),
    ),
      'properties' => array(
      'text' => '58',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7531966, 41.5993309),
    ),
      'properties' => array(
      'text' => '59',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7450114, 41.5529682),
    ),
      'properties' => array(
      'text' => '60',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6732224, 41.5536519),
    ),
      'properties' => array(
      'text' => '61',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6178058, 41.5371126),
    ),
      'properties' => array(
      'text' => '62',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7459097, 41.6340563),
    ),
      'properties' => array(
      'text' => '63',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.682774, 41.6229551),
    ),
      'properties' => array(
      'text' => '64',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6371236, 41.6221701),
    ),
      'properties' => array(
      'text' => '65',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6225175, 41.5855995),
    ),
      'properties' => array(
      'text' => '66',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5393876, 41.5570947),
    ),
      'properties' => array(
      'text' => '67',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5680198, 41.6211611),
    ),
      'properties' => array(
      'text' => '68',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5950026, 41.7701132),
    ),
      'properties' => array(
      'text' => '69',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.6027153, 41.7095071),
    ),
      'properties' => array(
      'text' => '70',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.1168681, 41.4074919),
    ),
      'properties' => array(
      'text' => '71',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.013886, 41.1234462),
    ),
      'properties' => array(
      'text' => '72',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.833335, 41.3370938),
    ),
      'properties' => array(
      'text' => '73',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5715315, 41.4143141),
    ),
      'properties' => array(
      'text' => '74',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.564631, 41.5059191),
    ),
      'properties' => array(
      'text' => '75',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.2119317, 41.5636435),
    ),
      'properties' => array(
      'text' => '76',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5480233, 41.6582445),
    ),
      'properties' => array(
      'text' => '77',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5056066, 41.6479283),
    ),
      'properties' => array(
      'text' => '78',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1487498, 41.7199179),
    ),
      'properties' => array(
      'text' => '79',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.9788427, 41.484804),
    ),
      'properties' => array(
      'text' => '80',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5389508, 41.5692214),
    ),
      'properties' => array(
      'text' => '81',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.4766386, 41.5663401),
    ),
      'properties' => array(
      'text' => '82',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5976229, 41.8142127),
    ),
      'properties' => array(
      'text' => '83',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.7188378, 41.6181822),
    ),
      'properties' => array(
      'text' => '84',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5975221, 41.5753267),
    ),
      'properties' => array(
      'text' => '85',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5957119, 41.525113),
    ),
      'properties' => array(
      'text' => '86',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.2516556, 41.1383295),
    ),
      'properties' => array(
      'text' => '87',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.0572423, 40.9357725),
    ),
      'properties' => array(
      'text' => '88',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.7039698, 41.3553895),
    ),
      'properties' => array(
      'text' => '89',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0588393, 40.9040124),
    ),
      'properties' => array(
      'text' => '90',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5070215, 40.8678752),
    ),
      'properties' => array(
      'text' => '91',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.494798, 40.542706),
    ),
      'properties' => array(
      'text' => '92',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.5053628, 40.9929264),
    ),
      'properties' => array(
      'text' => '93',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8752438, 40.7439859),
    ),
      'properties' => array(
      'text' => '94',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.8951902, 40.9183945),
    ),
      'properties' => array(
      'text' => '95',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6473724, 40.8641956),
    ),
      'properties' => array(
      'text' => '96',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.4131345, 40.7938978),
    ),
      'properties' => array(
      'text' => '97',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.6086107, 41.2321899),
    ),
      'properties' => array(
      'text' => '98',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8339678, 41.2725337),
    ),
      'properties' => array(
      'text' => '99',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8784388, 41.2272769),
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

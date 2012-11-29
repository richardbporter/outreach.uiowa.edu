<?php
/**
 * @file
 * This file generates the GeoJSON for the county map.
 */

/**
 * Helper function to format GeoJSON.
 *
 * @return object
 */
function _outreach_maps_return_county_geo_json() {
  // Create county data array.
  $county_geo_data = array(
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.4781643, 41.3285283),
    ),
      'properties' => array(
      'text' => 'Adair',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6969059, 41.0216555),
    ),
      'properties' => array(
      'text' => 'Adams',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.3827509, 43.2749637),
    ),
      'properties' => array(
      'text' => 'Allamakee',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8703449, 40.7446825),
    ),
      'properties' => array(
      'text' => 'Appanoose',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.9043118, 41.679178),
    ),
      'properties' => array(
      'text' => 'Audubon',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0576299, 42.0925474),
    ),
      'properties' => array(
      'text' => 'Benton',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3060589, 42.4728884),
    ),
      'properties' => array(
      'text' => 'Black Hawk',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.9391375, 42.0386005),
    ),
      'properties' => array(
      'text' => 'Boone',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3275863, 42.7808901),
    ),
      'properties' => array(
      'text' => 'Bremer',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.8386658, 42.4703284),
    ),
      'properties' => array(
      'text' => 'Buchanan',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1414325, 42.7415219),
    ),
      'properties' => array(
      'text' => 'Buena Vista',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.7800664, 42.7347075),
    ),
      'properties' => array(
      'text' => 'Butler',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6436829, 42.3861698),
    ),
      'properties' => array(
      'text' => 'Calhoun',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.8676471, 42.0394919),
    ),
      'properties' => array(
      'text' => 'Carroll',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.9333023, 41.3338235),
    ),
      'properties' => array(
      'text' => 'Cass',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1321899, 41.7723546),
    ),
      'properties' => array(
      'text' => 'Cedar',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.251266, 43.0751707),
    ),
      'properties' => array(
      'text' => 'Cerro Gordo',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.6332616, 42.7427375),
    ),
      'properties' => array(
      'text' => 'Cherokee',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3172101, 43.0597408),
    ),
      'properties' => array(
      'text' => 'Chickasaw',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.784096, 41.0291907),
    ),
      'properties' => array(
      'text' => 'Clarke',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1497261, 43.079822),
    ),
      'properties' => array(
      'text' => 'Clay',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.3239686, 42.8409038),
    ),
      'properties' => array(
      'text' => 'Clayton',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.534243, 41.8980731),
    ),
      'properties' => array(
      'text' => 'Clinton',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.3890902, 42.0431191),
    ),
      'properties' => array(
      'text' => 'Crawford',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.0407065, 41.6853206),
    ),
      'properties' => array(
      'text' => 'Dallas',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.4103452, 40.7480892),
    ),
      'properties' => array(
      'text' => 'Davis',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7845799, 40.7363787),
    ),
      'properties' => array(
      'text' => 'Decatur',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.3594424, 42.4730031),
    ),
      'properties' => array(
      'text' => 'Delaware',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1869252, 40.9153392),
    ),
      'properties' => array(
      'text' => 'Des Moines',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1960572, 43.3896107),
    ),
      'properties' => array(
      'text' => 'Dickinson',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.8787708, 42.4634808),
    ),
      'properties' => array(
      'text' => 'Dubuque',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6693701, 43.3779844),
    ),
      'properties' => array(
      'text' => 'Emmet',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.8393728, 42.8644495),
    ),
      'properties' => array(
      'text' => 'Fayette',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.7873668, 43.052741),
    ),
      'properties' => array(
      'text' => 'Floyd',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.2714246, 42.7365489),
    ),
      'properties' => array(
      'text' => 'Franklin',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.5995158, 40.7437257),
    ),
      'properties' => array(
      'text' => 'Fremont',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.3887028, 42.0424939),
    ),
      'properties' => array(
      'text' => 'Greene',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.7902612, 42.4033231),
    ),
      'properties' => array(
      'text' => 'Grundy',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.5012723, 41.6835727),
    ),
      'properties' => array(
      'text' => 'Guthrie',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7091979, 42.390768),
    ),
      'properties' => array(
      'text' => 'Hamilton',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7436965, 43.0754105),
    ),
      'properties' => array(
      'text' => 'Hancock',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.2410809, 42.3899554),
    ),
      'properties' => array(
      'text' => 'Hardin',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.8271491, 41.6885843),
    ),
      'properties' => array(
      'text' => 'Harrison',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5442697, 40.985864),
    ),
      'properties' => array(
      'text' => 'Henry',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.3219084, 43.3653124),
    ),
      'properties' => array(
      'text' => 'Howard',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.2027754, 42.7822212),
    ),
      'properties' => array(
      'text' => 'Humboldt',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.5074206, 42.39186),
    ),
      'properties' => array(
      'text' => 'Ida',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.0591226, 41.6839184),
    ),
      'properties' => array(
      'text' => 'Iowa',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.5745964, 42.1642812),
    ),
      'properties' => array(
      'text' => 'Jackson',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.0529712, 41.6856862),
    ),
      'properties' => array(
      'text' => 'Jasper',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.9674591, 41.0078821),
    ),
      'properties' => array(
      'text' => 'Jefferson',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5887572, 41.6687272),
    ),
      'properties' => array(
      'text' => 'Johnson',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1169141, 42.1251175),
    ),
      'properties' => array(
      'text' => 'Jones',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.1677213, 41.3311823),
    ),
      'properties' => array(
      'text' => 'Keokuk',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.213983, 43.2124776),
    ),
      'properties' => array(
      'text' => 'Kossuth',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.4771574, 40.6475875),
    ),
      'properties' => array(
      'text' => 'Lee',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.5976735, 42.0779506),
    ),
      'properties' => array(
      'text' => 'Linn',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.2569935, 41.218211),
    ),
      'properties' => array(
      'text' => 'Louisa',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.3314666, 41.033344),
    ),
      'properties' => array(
      'text' => 'Lucas',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.207201, 43.3835795),
    ),
      'properties' => array(
      'text' => 'Lyon',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.0151842, 41.3306215),
    ),
      'properties' => array(
      'text' => 'Madison',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.6363662, 41.3307969),
    ),
      'properties' => array(
      'text' => 'Mahaska',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.093849, 41.3314551),
    ),
      'properties' => array(
      'text' => 'Marion',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.9814522, 42.041691),
    ),
      'properties' => array(
      'text' => 'Marshall',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.6191009, 41.0337027),
    ),
      'properties' => array(
      'text' => 'Mills',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.7844663, 43.3485642),
    ),
      'properties' => array(
      'text' => 'Mitchell',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.956566, 42.0494316),
    ),
      'properties' => array(
      'text' => 'Monona',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.8696415, 41.0288472),
    ),
      'properties' => array(
      'text' => 'Monroe',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1577895, 41.0217348),
    ),
      'properties' => array(
      'text' => 'Montgomery',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.1186992, 41.483776),
    ),
      'properties' => array(
      'text' => 'Muscatine',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.6256244, 43.0837455),
    ),
      'properties' => array(
      'text' => "O'Brien",
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.6337877, 43.3785421),
    ),
      'properties' => array(
      'text' => 'Osceola',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1442898, 40.7390902),
    ),
      'properties' => array(
      'text' => 'Page',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6672964, 43.0758536),
    ),
      'properties' => array(
      'text' => 'Palo Alto',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.2158637, 42.7375853),
    ),
      'properties' => array(
      'text' => 'Plymouth',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6782788, 42.7340332),
    ),
      'properties' => array(
      'text' => 'Pocahontas',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5697204, 41.6842807),
    ),
      'properties' => array(
      'text' => 'Polk',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.5449053, 41.3401835),
    ),
      'properties' => array(
      'text' => 'Pottawattamie',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.5228819, 41.6845261),
    ),
      'properties' => array(
      'text' => 'Poweshiek',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.2442514, 40.7353342),
    ),
      'properties' => array(
      'text' => 'Ringgold',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.1052244, 42.3875258),
    ),
      'properties' => array(
      'text' => 'Sac',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-90.6222899, 41.6416792),
    ),
      'properties' => array(
      'text' => 'Scott',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-95.3089173, 41.6790143),
    ),
      'properties' => array(
      'text' => 'Shelby',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.1779288, 43.0828542),
    ),
      'properties' => array(
      'text' => 'Sioux',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.4660934, 42.0375378),
    ),
      'properties' => array(
      'text' => 'Story',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.5294114, 42.0748481),
    ),
      'properties' => array(
      'text' => 'Tama',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.6971081, 40.7379489),
    ),
      'properties' => array(
      'text' => 'Taylor',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.2450907, 41.0285502),
    ),
      'properties' => array(
      'text' => 'Union',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.952943, 40.7541168),
    ),
      'properties' => array(
      'text' => 'Van Buren',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-92.4094821, 41.031263),
    ),
      'properties' => array(
      'text' => 'Wapello',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.5643661, 41.3367685),
    ),
      'properties' => array(
      'text' => 'Warren',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.7250522, 41.3294011),
    ),
      'properties' => array(
      'text' => 'Washington',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.3326125, 40.7399826),
    ),
      'properties' => array(
      'text' => 'Wayne',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-94.1791564, 42.4343969),
    ),
      'properties' => array(
      'text' => 'Webster',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7434883, 43.3781243),
    ),
      'properties' => array(
      'text' => 'Winnebago',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-91.850788, 43.2929889),
    ),
      'properties' => array(
      'text' => 'Winneshiek',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-96.0532956, 42.3932198),
    ),
      'properties' => array(
      'text' => 'Woodbury',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.2485332, 43.373491),
    ),
      'properties' => array(
      'text' => 'Worth',
    )),
    array('geometry' => array(
      'type' => 'Point',
      'coordinates' => array(-93.7347351, 42.7330073),
    ),
      'properties' => array(
      'text' => 'Wright',
    )),
  );

  // Encode array into JSON format.
  $county_geo_json = drupal_json_encode($county_geo_data);

  // Return formatted JSON.
  return $county_geo_json;
}

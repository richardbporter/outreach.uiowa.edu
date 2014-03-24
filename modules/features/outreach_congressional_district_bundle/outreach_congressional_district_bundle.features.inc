<?php
/**
 * @file
 * outreach_congressional_district_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_congressional_district_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function outreach_congressional_district_bundle_node_info() {
  $items = array(
    'congressional_district' => array(
      'name' => t('Congressional District'),
      'base' => 'node_content',
      'description' => t('The <em>congressional district</em> aggregates data for each county that fully or partially resides within it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

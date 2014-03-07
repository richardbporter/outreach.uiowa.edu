<?php
/**
 * @file
 * outreach_county_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_county_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function outreach_county_bundle_node_info() {
  $items = array(
    'county' => array(
      'name' => t('County'),
      'base' => 'node_content',
      'description' => t('The <em>county</em> content type stores UI-related information about that county.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('The name of the county.'),
    ),
  );
  return $items;
}

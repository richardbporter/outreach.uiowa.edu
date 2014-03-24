<?php
/**
 * @file
 * outreach_map_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_map_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function outreach_map_bundle_node_info() {
  $items = array(
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => t('A <em>map</em> is page that displays a map and has a different layout then a basic page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * county.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function county_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function county_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function county_node_info() {
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

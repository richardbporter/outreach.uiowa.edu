<?php
/**
 * @file
 * outreach_counties.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_counties_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outreach_counties_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_counties_node_info() {
  $items = array(
    'county' => array(
      'name' => t('County'),
      'base' => 'node_content',
      'description' => t('An Iowa <em>county</em> that houses data and connections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

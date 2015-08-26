<?php
/**
 * @file
 * outreach_staff.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_staff_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outreach_staff_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_staff_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('A <em>staff</em> member in the Office of Outreach & Engagement'),
      'has_title' => '1',
      'title_label' => t('Last Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

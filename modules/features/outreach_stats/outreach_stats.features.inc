<?php
/**
 * @file
 * outreach_stats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_stats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outreach_stats_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_stats_node_info() {
  $items = array(
    'stats' => array(
      'name' => t('Stats'),
      'base' => 'node_content',
      'description' => t('A <em>stat</em> that can be used for display on the home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

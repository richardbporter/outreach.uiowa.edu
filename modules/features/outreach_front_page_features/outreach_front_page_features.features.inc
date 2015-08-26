<?php
/**
 * @file
 * outreach_front_page_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_front_page_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outreach_front_page_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_front_page_features_node_info() {
  $items = array(
    'front_page_feature' => array(
      'name' => t('Front Page Feature'),
      'base' => 'node_content',
      'description' => t('A <em>front page feature</em> to highlight something within the site or linked off.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

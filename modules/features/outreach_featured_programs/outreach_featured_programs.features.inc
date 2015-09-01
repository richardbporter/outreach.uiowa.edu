<?php
/**
 * @file
 * outreach_featured_programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_featured_programs_ctools_plugin_api($module = NULL, $api = NULL) {
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
function outreach_featured_programs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_featured_programs_node_info() {
  $items = array(
    'featured_program' => array(
      'name' => t('Featured Program'),
      'base' => 'node_content',
      'description' => t('A <em>featured program</em> is one managed by the OOE and can have programs, news items and events attached to it.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

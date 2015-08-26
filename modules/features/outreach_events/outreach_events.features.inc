<?php
/**
 * @file
 * outreach_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function outreach_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function outreach_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('An Outreach <em>Event</em> from the University of Iowa. This can be imported from Localist or created on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

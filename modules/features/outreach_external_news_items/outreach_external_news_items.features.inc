<?php
/**
 * @file
 * outreach_external_news_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function outreach_external_news_items_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function outreach_external_news_items_node_info() {
  $items = array(
    'external_news_item' => array(
      'name' => t('External News Item'),
      'base' => 'node_content',
      'description' => t('An <em>external news item</em> is a news item that links out to the original source.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

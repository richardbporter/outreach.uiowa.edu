<?php
/**
 * @file
 * outreach_external_news_items.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function outreach_external_news_items_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'iowa_now-xpathparser_3-timetodate';
  $feeds_tamper->importer = 'iowa_now';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'd-m-Y H:i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Unix timestamp to Date';
  $export['iowa_now-xpathparser_3-timetodate'] = $feeds_tamper;

  return $export;
}

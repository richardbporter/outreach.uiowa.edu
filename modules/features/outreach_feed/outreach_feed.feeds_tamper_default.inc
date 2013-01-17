<?php
/**
 * @file
 * outreach_feed.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function outreach_feed_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'outreach_feed-year-string_to_unix_timestamp';
  $feeds_tamper->importer = 'outreach_feed';
  $feeds_tamper->source = 'Year';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['outreach_feed-year-string_to_unix_timestamp'] = $feeds_tamper;

  return $export;
}

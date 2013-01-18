<?php
/**
 * @file
 * outreach_feed.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function outreach_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * outreach_custom_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function outreach_custom_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_outreach_site';
  $strongarm->value = 'l, F jS';
  $export['date_format_outreach_site'] = $strongarm;

  return $export;
}

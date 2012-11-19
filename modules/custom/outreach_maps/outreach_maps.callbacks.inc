<?php
/**
 * @file
 * This file contains all the callback and helper functions for the Outreach Maps module.
 */

/**
 * Callback for hook_menu().
 *
 * @param $county
 *   The name of the county.
 *
 * @return $data
 *   JSON formatted data.
 */
function _outreach_maps_load_county($title, $type = 'ajax') {
  $output = 'Delivered via AJAX.';

  // Deliver the AJAX response.
  $commands = array();
  $commands[] = ajax_command_html('.marker-popup', $output);
  $page = array('#type' => 'ajax', '#commands' => $commands);
  ajax_deliver($page);
}

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
 * @param $type
 *   Either 'ajax' or 'nojs'. Type is simply the normal URL argument to this URL.
 *
 * @return
 *   If $type == 'ajax', returns an array of AJAX Commands.
 *   Otherwise, just returns the content, which will end up being a page.
 */
function _outreach_maps_load_county($county, $type = 'ajax') {
  if ($type == 'ajax') {
    $output = 'This is some content delivered via AJAX.';

    // Deliver the AJAX response.
    $commands = array();
    $commands[] = ajax_command_alert($output);
    $page = array('#type' => 'ajax', '#commands' => $commands);
    ajax_deliver($page);
  }
}

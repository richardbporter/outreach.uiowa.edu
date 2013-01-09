<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "outreach" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "outreach".
 * 2. Uncomment the required function to use.
 */

/**
 * Implements hook_html_head_alter().
 *
 * Disable zooming on mobile devices only on map pages. Zooming in makes the
 * map pages look terrible and presents a usability problem.
 */
function outreach_html_head_alter(&$head_elements) {
  $path = current_path();

  // Map nids.
  if ($path == 'node/2117' || $path == 'node/2116' || $path == 'node/2115' || $path == 'ndoe/2114') {
   $head_elements['adaptivetheme_meta_viewport']['#attributes']['content'] = 'width=device-width,initial-scale=1,maximum-scale=1,user-scalable=no';
  }

}

/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function outreach_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function outreach_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
function outreach_preprocess_page(&$vars) {
  $vars['site_name'] = '<a href="http://www.uiowa.edu" title="The University of Iowa homepage.">The University of Iowa</a>';
}

function outreach_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
function outreach_preprocess_node(&$vars) {
}
function outreach_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function outreach_preprocess_comment(&$vars) {
}
function outreach_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function outreach_preprocess_block(&$vars) {
}
function outreach_process_block(&$vars) {
}
// */

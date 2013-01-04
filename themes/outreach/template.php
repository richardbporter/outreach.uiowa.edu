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

  $options = array();

  $options['default'] = 'Select a county';

   // Create an EFQ to get all counties.
  $county_query = new EntityFieldQuery();

  // Set some conditions.
  $county_query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'county')
  ->propertyCondition('status', 1);

  // Execute the query.
  $county_result = $county_query->execute();

  // Check for a result.
  if (isset($county_result['node'])) {
    $keys = array_keys($county_result['node']);

    // Load all nodes.
    $county_nodes = node_load_multiple($keys);

    foreach ($county_nodes as $county) {
      $options[strtolower(str_replace(' ', '-', str_replace("'", '', $county->title)))] = $county->title;
    }
  }

  // Create render array for select list of counties in footer.
  $select = array(
    '#type' => 'select',
    '#options' => $options,
    '#attributes' => array(
      'id' => 'county-list',
    ),
  );

  $vars['county_list'] = $select;
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

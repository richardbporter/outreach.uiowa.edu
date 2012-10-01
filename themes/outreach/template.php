<?php
/**
 * @file
 * 
 * This file includes template preprocess functions.
 */

/**
 * Implements template_preprocess_html().
 * 
 * @param $variables
 */
function outreach_preprocess_html(&$variables) {
  // Include mapbox.js
  drupal_add_js('http://api.tiles.mapbox.com/mapbox.js/v0.6.5/mapbox.js');
  
  // Include mapbox.css
  drupal_add_css('http://api.tiles.mapbox.com/mapbox.js/v0.6.5/mapbox.css');
}
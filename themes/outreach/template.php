<?php

/**
 * @file
 * Contains theme override functions and preprocess functions for the outreach theme.
 */

/**
 * Implements hook_html_head_alter().
 *
 * @param $head_elements
 */
function outreach_html_head_alter(&$head_elements) {
  // Changes the default meta content-type tag to the shorter HTML5 version.
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );

  // For the third generation iPad with high-resolution Retina Display.
  $head_elements['apple_touch_icon_144'] = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#weight' => -10,
    '#attributes' => array(
      'href' => 'img/icons/apple-touch-icon-144x144-precomposed',
      'sizes' => '144x144',
      'rel' => "apple-touch-icon-precomposed",
    ),
  );

  // For the iPhone 4 with high-resolution Retina Display.
  $head_elements['apple_touch_icon_114'] = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#weight' => -9,
    '#attributes' => array(
      'href' => 'img/icons/apple-touch-icon-114x114-precomposed',
      'sizes' => '114x114',
      'rel' => "apple-touch-icon-precomposed",
    ),
  );

  // For the first-generation iPad.
  $head_elements['apple_touch_icon_72'] = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#weight' => -8,
    '#attributes' => array(
      'href' => 'img/icons/apple-touch-icon-72x72-precomposed',
      'sizes' => '72x72',
      'rel' => "apple-touch-icon-precomposed",
    ),
  );

  // For non-Retina iPhone, iPod Touch, and Android 2.1+ devices.
  $head_elements['apple_touch_icon_57'] = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#weight' => -7,
    '#attributes' => array(
      'href' => 'img/icons/apple-touch-icon-57x57-precomposed',
      'rel' => "apple-touch-icon-precomposed",
    ),
  );

  // For Nokia devices.
  $head_elements['apple_touch_icon'] = array(
    '#type' => 'html_tag',
    '#tag' => 'link',
    '#weight' => -6,
    '#attributes' => array(
      'href' => 'img/icons/apple-touch-icon',
      'rel' => "shortcut-icon",
    ),
  );
}

/**
 * Implements template_preprocess_search_block_form().
 *
 * @param $variables
 */
function outreach_preprocess_search_block_form(&$vars) {
  // Changes the search form to use the HTML5 "search" input attribute.
  $vars['search_form'] = str_replace('type="text"', 'type="search"', $vars['search_form']);
}

/**
 * Implements template_preprocess_html().
 *
 * @param $vars
 */
function outreach_preprocess_html(&$vars) {
  // Create IE meta tag. Forces latest IE rendering mode and Google Chrome Frame.
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    )
  );

  //  Create viewport meta tag. Mobile viewport optimized: h5bp.com/viewport
  $meta_viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'width=device-width',
      'name' => 'viewport',
    )
  );

  // Create HandHeldFriendly meta tag, for older Palm and Blackberry devices.
  $meta_handheld_friendly = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'True',
      'name' => 'HandheldFriendly',
    ),
  );

  // Create MobileOptimized meta tag, for PocketPC.
  $meta_mobile_optimized = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => '320',
      'name' => 'MobileOptimized',
    ),
  );

  // Create cleartype meta tag, for Mobile IE. Smoothes fonts for easy reading.
  $meta_cleartype = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'on',
      'name' => 'cleartype',
    ),
  );

  // Create Apple mobile web app meta tag. Makes the site run in full-screen
  // mode when launching from the home screen. Hides address bar and component bar.
  $meta_apple_mobile_web_app_capable = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'yes',
      'name' => 'apple-mobile-web-app-capable',
    ),
  );

  // Create Apple web app status bar style meta tag. Makes it black/translucent.
  $meta_apple_mobile_web_app_status_bar_style = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'black-translucent',
      'name' => 'apple-mobile-web-app-status-bar-style',
    ),
  );



  // Add header meta tags.
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
  drupal_add_html_head($meta_viewport, 'meta_viewport');
  drupal_add_html_head($meta_handheld_friendly, 'meta_handheld_friendly');
  drupal_add_html_head($meta_mobile_optimized, 'meta_mobile_optimized');
  drupal_add_html_head($meta_cleartype, 'meta_cleartype');
  drupal_add_html_head($meta_apple_mobile_web_app_capable, 'meta_apple_mobile_web_app_capable');
  drupal_add_html_head($meta_apple_mobile_web_app_status_bar_style, 'meta_apple_mobile_web_app_status_bar_style');

  // Ensure that the $vars['rdf'] variable is an object.
  if (!isset($vars['rdf']) || !is_object($vars['rdf'])) {
    $vars['rdf'] = new StdClass();
  }

  // Set doctype accordingly if RDF is enabled. http://dev.w3.org/html5/rdfa/
  if (module_exists('rdf')) {
    $vars['doctype'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD HTML+RDFa 1.1//EN">' . "\n";
    $vars['rdf']->version = 'version="HTML+RDFa 1.1"';
    $vars['rdf']->namespaces = $vars['rdf_namespaces'];
    $vars['rdf']->profile = ' profile="' . $vars['grddl_profile'] . '"';
  } else {
    $vars['doctype'] = '<!DOCTYPE html>' . "\n";
    $vars['rdf']->version = '';
    $vars['rdf']->namespaces = '';
    $vars['rdf']->profile = '';
  }
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function outreach_breadcrumb($vars) {
  $breadcrumb = $vars['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('breadcrumb_display');
  if ($show_breadcrumb == 'yes') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $separator = filter_xss(theme_get_setting('breadcrumb_separator'));
      $trailing_separator = $title = '';

      // Add the title and trailing separator
      if (theme_get_setting('breadcrumb_title')) {
        if ($title = drupal_get_title()) {
          $trailing_separator = $separator;
        }
      }
      // Just add the trailing separator
      elseif (theme_get_setting('breadcrumb_trailing')) {
        $trailing_separator = $separator;
      }

      // Assemble the breadcrumb
      return implode($separator, $breadcrumb) . $trailing_separator . $title;
    }
  }
  // Otherwise, return an empty string.
  return '';
}

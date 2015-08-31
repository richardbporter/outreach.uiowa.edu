<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * outreach2 theme.
 */

function outreach2_field_collection_view($variables) {
  return '<div>'. $variables['element']['#children'] . '</div>';
}

/**
 * Implements hook_preprocess_page().
 */

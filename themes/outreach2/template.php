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
 function outreach2_preprocess_page(&$variables) {
   if(isset($variables['node'])){
     if($variables['node']->type == 'county'){
       $variables['title'] = "Iowa Impact: ".$variables['node']->title. " County";
     }
     if($variables['node']->type == 'staff'){
       $variables['title'] = $variables['node']->field_staff_first_name['und'][0]['value']. " " .$variables['node']->title;
     }
   }
 }

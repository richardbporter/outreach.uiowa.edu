<?php
/**
 * @file
 * outreach_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function outreach_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: event_page_display.
  $styles['event_page_display'] = array(
    'label' => 'Event Page Display',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 295,
          'height' => 175,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'event_page_display',
        ),
        'weight' => 0,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 295,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_thumbnail.
  $styles['event_thumbnail'] = array(
    'label' => 'Event Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 220,
          'height' => 148,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'event_thumbnail',
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_program_banner.
  $styles['featured_program_banner'] = array(
    'label' => 'Featured Program Banner',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 944,
          'height' => 354,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'featured_program_banner',
        ),
        'weight' => 0,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 944,
          'height' => 354,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_program_home_page.
  $styles['featured_program_home_page'] = array(
    'label' => 'Featured Program Home Page',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 309,
          'height' => 176,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'featured_program_home_page',
        ),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 309,
          'height' => 176,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_program_person.
  $styles['featured_program_person'] = array(
    'label' => 'Featured Program Person',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 110,
          'height' => 110,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'featured_program_person',
        ),
        'weight' => 0,
      ),
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_feature.
  $styles['front_page_feature'] = array(
    'label' => 'Front Page Feature',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 610,
          'height' => 460,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'front_page_feature',
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 460,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hometown_hawkeye.
  $styles['hometown_hawkeye'] = array(
    'label' => 'Hometown Hawkeye',
    'effects' => array(
      12 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 196,
          'height' => 140,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'hometown_hawkeye',
        ),
        'weight' => 0,
      ),
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 196,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_photo.
  $styles['profile_photo'] = array(
    'label' => 'Profile Photo',
    'effects' => array(
      14 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 200,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'profile_photo',
        ),
        'weight' => 0,
      ),
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

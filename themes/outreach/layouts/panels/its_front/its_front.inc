<?php
// Plugin definition
$plugin = array(
  'title' => t('ITS Front'),
  'icon' => 'its-front.png',
  'category' => t('Panopoly'),
  'theme' => 'its-front',
  'css' => 'its-front.css',
  'regions' => array(
    'header' => t('Header'),
    'column1' => t('Row 1: First Column'),
    'column2' => t('Row 1: Second Column'),
    'secondarycolumn1' => t('Row 2: First Column'),
    'secondarycolumn2' => t('Row 2: Second Column'),
    'secondarycolumn3' => t('Row 2: Third Column'),
	'secondarycolumn4' => t('Row 2: Fourth Column'),
  ),
);

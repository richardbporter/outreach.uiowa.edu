<?php
/**
 * @file
 * Template for Panopoly Sanderson.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display its-front clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="its-front-container its-front-header clearfix panel-panel">
    <div class="its-front-container-inner its-front-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div

  <div class="its-front-container its-front-column-content its-front-column-content-row1 clearfix">
    <div class="its-front-column-content-region its-front-column1 panel-panel">
      <div class="its-front-column-content-region-inner its-front-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="its-front-column-content-region its-front-column2 panel-panel">
      <div class="its-front-column-content-region-inner its-front-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
  </div>
  
  <div class="its-front-container its-front-secondary-column-content its-front-column-content-row2 clearfix">
    <div class="its-front-secondary-column-content-region its-front-secondary-column1 panel-panel">
      <div class="its-front-secondary-column-content-region-inner its-front-secondary-column1-inner panel-panel-inner">
        <?php print $content['secondarycolumn1']; ?>
      </div>
    </div>
    <div class="its-front-secondary-column-content-region its-front-secondary-column2 panel-panel">
      <div class="its-front-secondary-column-content-region-inner its-front-secondary-column2-inner panel-panel-inner">
        <?php print $content['secondarycolumn2']; ?>
      </div>
    </div>
    <div class="its-front-secondary-column-content-region its-front-secondary-column3 panel-panel">
      <div class="its-front-secondary-column-content-region-inner its-front-secondary-column3-inner panel-panel-inner">
        <?php print $content['secondarycolumn3']; ?>
      </div>
    </div>
	<div class="its-front-secondary-column-content-region its-front-secondary-column4 panel-panel">
      <div class="its-front-secondary-column-content-region-inner its-front-secondary-column4-inner panel-panel-inner">
        <?php print $content['secondarycolumn4']; ?>
      </div>
    </div>
  </div>
  
</div><!-- /.its-front -->

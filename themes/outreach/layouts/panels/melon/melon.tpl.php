<?php
/**
 * @file
 * Template for Panopoly Melon.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display melon clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="melon-container melon-header clearfix panel-panel">
    <div class="melon-container-inner melon-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="melon-container melon-column-content clearfix">
    
    <div class="melon-content-container">
      <div class="melon-content-container-inner">
        
        <div class="melon-content-container-column-container clearfix">
          <div class="melon-column-content-region melon-content-column1 melon-column panel-panel">
            <div class="melon-column-content-region-inner melon-content-column1-inner melon-column-inner panel-panel-inner">
              <?php print $content['contentcolumn1']; ?>
            </div>
          </div>
          <div class="melon-column-content-region melon-content-column2 melon-column panel-panel">
            <div class="melon-column-content-region-inner melon-content-column2-inner melon-column-inner panel-panel-inner">
              <?php print $content['contentcolumn2']; ?>
            </div>
          </div>
        </div><!-- /.melon-content-container-column-container -->

        <div class="melon-column-content-region melon-content-header panel-panel">
          <div class="melon-column-content-region-inner melon-content-header-inner panel-panel-inner">
            <?php print $content['contentheader']; ?>
          </div>
        </div>
      
      </div>
    </div><!-- /.melon-content-container -->
    
    <div class="melon-sidebar melon-column-content-region melon-column panel-panel">
      <div class="melon-sidebar-inner melon-column-content-region-inner melon-column-inner panel-panel-inner">
        <?php print $content['sidebar']; ?>
      </div>
    </div>
    
  </div><!-- /.melon-column-content -->
  
</div><!-- /.melon -->

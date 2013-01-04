/**
 * @file
 * This file holds the non-map related user interface code.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Define behavior.
  Drupal.outreachMapsUI = function() {
    $('#about-button').click(function(e) {
      e.preventDefault();
      $('#about-dialog').dialog({
        modal: true,
        resizable: false,
        draggable: false,
        closeOnEscape: true,
        buttons: {
          Ok: function() {
            $(this).dialog('close');
          }
        }
      });
    });

    // Social networking popup.
    $('#share-button').click(function(e) {
      e.preventDefault();
      $('#share-dialog').dialog({
        modal: true,
        resizable: false,
        draggable: false,
        closeOnEscape: true,
        buttons: {
          Ok: function() {
            $(this).dialog('close');
          }
        }
      });
    });
  };

  // Attach outreachMapsUI behavior.
  Drupal.behaviors.outreachMapsUI = {
    attach: function(context, settings) {
      $('#map-ui', context).once('outreachMapsUI', function() {
        Drupal.outreachMapsUI();
      });
    }
  };

})(jQuery);

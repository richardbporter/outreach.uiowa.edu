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
      $('#about-message').dialog({
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

    //$('#help-button').tooltip();

    var open = false;

    $('#help-button').click(function(e) {
      e.preventDefault();
      if(open === false) {
          $('#footer-wrapper').animate({ height: '300px' });
          $(this).css('backgroundPosition', 'bottom left');
          $(this).text('Hide');
          open = true;
      } else {
          $('#footer-wrapper').animate({ height: '25px' });
          $(this).css('backgroundPosition', 'top left');
          $(this).text('Help');
          open = false;
      }
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

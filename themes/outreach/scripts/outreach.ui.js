/**
 * @file
 * This file holds the theme related scripts for the Outreach site.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.outreachUI = function() {
    $('#primary-menu-bar ul.menu').tinyNav({
      header: 'Navigation'
    });

    // Uniform the tinynav.
    $('.tinynav').uniform();

    // Set the default value.
    $('.county-list').val('default');

    // Redirect to the county page on change.
    $('.county-list').change(function(e) {
      var county = $(this, ':selected').val();
      if (county === 'default') {
        return;
      }
      else {
        window.location = Drupal.settings.basePath + 'county/' + county;
      }
    });

    // Uniform the county list.
    $('.county-list').uniform();

    if (window.navigator.standalone) {
      // fullscreen mode
      $('.node-type-map #footer-wrapper').height();
      alert('full screen');
    }
  };

  // Attach outreachUI behavior.
  Drupal.behaviors.outreachUI = {
    attach: function(context, settings) {
      $('#page', context).once('outreachUI', function() {
        Drupal.outreachUI();
      });
    }
  };

})(jQuery);

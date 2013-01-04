/**
 * @file
 * This file holds the theme related scripts for the Outreach site.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.tinyNav = function() {
    $('#primary-menu-bar ul.menu').tinyNav({
      header: 'Navigation'
    });

    // Set the default value.
    $('#county-list').val('default');

    // Redirect to the county page on change.
    $('#county-list').change(function(e) {
      var county = $(this, ':selected').val();
      if (county === 'default') {
        return;
      }
      else {
        window.location = Drupal.settings.basePath + 'county/' + county;
      }
    });
  };

  // Attach tinyNav behavior.
  Drupal.behaviors.tinyNav = {
    attach: function(context, settings) {
      $('#primary-menu-bar', context).once('tinyNav', function() {
        Drupal.tinyNav();
      });
    }
  };

})(jQuery);

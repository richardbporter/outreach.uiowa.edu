/**
 * @file
 * This file holds the theme related scripts for the Outreach site.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.tinyNav = function() {
    $('#primary-menu-bar ul.menu').tinyNav();
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

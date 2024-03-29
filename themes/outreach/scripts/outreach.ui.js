/**
 * @file
 * This file holds the theme related scripts for the Outreach site.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Fix to hide AJAX error alert messages.
  // http://drupal.org/node/1232416#comment-6667014
  window.alert = function(arg) { if (window.console && console.log) { console.log(arg);}};

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

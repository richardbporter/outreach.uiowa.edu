/**
 * @file
 * This file holds the application code for the congressional map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the congressional map.
  Drupal.outreachMapsCongressional = function() {
    // Add an extra function to the Drupal ajax object which allows us to trigger
    // an ajax response without an element that triggers it.
    Drupal.ajax.prototype.specifiedResponse = function() {
      var ajax = this;

      // Do not perform another ajax command if one is already in progress.
      if (ajax.ajaxing) {
        return false;
      }

      try {
        $.ajax(ajax.options);
      }
      catch (err) {
        alert('An error occurred while attempting to process ' + ajax.options.url);
        return false;
      }

      return false;
    };

    // Helper function to return the center-scroll offset on click and touch.
    // @TODO: Refactor this because it seems horribly inefficient.
    Drupal.outreachMapsCongressional.getOffset = function() {
      var offset = 0, height = $(window).height(), z = map.zoom();

      if (height >= 500 && height <= 900) {
        if (z === 8) {
          offset = 0.8;
        }
        else if (z === 9) {
          offset = 0.4;
        }
        else {
          offset = 0.2;
        }
      }
      else if (height >= 380 && height <= 499)  {
        if (z === 8) {
          offset = 0.2;
        }
        else {
          offset = 0.1;
        }
      }
      else if (height <= 379) {
        if (z === 8) {
          offset = 0.3;
        }
        else if (z === 9) {
          offset = 0.1;
        }
        else {
          offset = 0.1;
        }
      }

      return offset;
    };

    // Create a base layer object.
    var baseLayer = mapbox.layer().id('uiowa-its.map-ljseri7h');

    // Create array of event handlers.
    var eventHandlers = [
      easey_handlers.DragHandler(),
      easey_handlers.DoubleClickHandler(),
      easey_handlers.TouchHandler()
    ];

   // Create the map object.
    var map = mapbox.map('map', baseLayer, null, eventHandlers);

    // Add the UI components.
    map.ui.zoomer.add();

    // Set the zoom range.
    map.setZoomRange(8, 10);

    // Zoom to top-left of Iowa if viewport is small.
    if ($(window).height() <= 500) {
      map.centerzoom({ lat: 43.3835795, lon: -96.207201 }, 8);
    }
    else {
      map.centerzoom({ lat: 41.9742807, lon: -93.5697204 }, 8);
    }

    // Add the congressional layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-congressional-districts'));

    // Initalize the features variable and parse the congressional GeoJSON object into it.
    var features = $.parseJSON(Drupal.settings.congressionalGeoJSON);

    // Create the congressional markers layer with custom factory function.
    var congressionalMarkers = mapbox.markers.layer().features(features).factory(function(f) {
      // Define a new factory function. This takes a GeoJSON object
      // as its input and returns an element that represents the point.
      var congressionalLink = document.createElement('a');
      $(congressionalLink).addClass('congressional-marker use-ajax');
      $(congressionalLink).addClass('congressional' + f.properties.text);
      $(congressionalLink).text(f.properties.text);
      $(congressionalLink).attr('href', Drupal.settings.basePath + 'outreach-maps/congressional/' + f.properties.text);

      // var congressionalImage = document.createElement('img');
      // $(congressionalImage).attr('src', '/sites/outreach.uiowa.edu/themes/outreach/images/marker-24.png');
      // $(congressionalLink).html(congressionalImage);

      // Add function that centers marker on click.
      MM.addEvent(congressionalLink, 'click', function(e) {
          map.ease.location({
            lat: f.geometry.coordinates[1] + Drupal.outreachMapsCongressional.getOffset(),
            lon: f.geometry.coordinates[0]
          }).zoom(map.zoom()).optimal();
      });

      // Add function that calls ajax and centers marker on touch.
      MM.addEvent(congressionalLink, 'touchend', function(e) {
        // Define a custom ajax action not associated with an element.
        var custom_settings = {};
        custom_settings.url = Drupal.settings.basePath + 'outreach-maps/congressional/' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "");
        custom_settings.event = 'touchend';
        custom_settings.keypress = false;
        custom_settings.prevent = false;
        Drupal.ajax['outreach_maps_congressional_ajax_action'] = new Drupal.ajax(null, $(document.body), custom_settings);

        // Trigger the response.
        Drupal.ajax['outreach_maps_congressional_ajax_action'].specifiedResponse();

        // Center map.
        map.ease.location({
          lat: f.geometry.coordinates[1] + Drupal.outreachMapsCongressional.getOffset(),
          lon: f.geometry.coordinates[0]
        }).zoom(map.zoom()).optimal();
      });

      return congressionalLink;
    });

     // Create congressional interaction.
    var congressionalInteraction = mapbox.markers.interaction(congressionalMarkers);

    // Turn off hover tooltips.
    congressionalInteraction.showOnHover(false);

    // Add the couny markers layer to the map.
    map.addLayer(congressionalMarkers);

     // Set a custom formatter for tooltips.
    // Provide a function that returns html to be used in tooltip.
    congressionalInteraction.formatter(function(f) {
      var o = '<h3 class="pane-title">Congressional District ' + f.properties.text + '</h3>';
      o += '<div id="district-' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "") + '-content"></div>';
      return o;
    });

    // Reduce font size for zoom level 7.
    map.addCallback("zoomed", function(map, zoomOffset) {
      var z = Math.round(map.zoom());
      if (zoomOffset == -1 && z == 7) {
        $('.marker').addClass('seven');
      } else {
        $('.marker').removeClass('seven');
      }
    });

    // Add attribution.
    // map.ui.attribution.add().content('<a href="http://mapbox.com/about/maps">Terms &amp; Feedback</a>');
  };

  // Attach outreachMapsCongressional behavior.
  Drupal.behaviors.outreachMapsCongressional = {
    attach: function(context, settings) {
      $('#map', context).once('outreachMapsCongressional', function() {
        Drupal.outreachMapsCongressional();
      });
    }
  };

})(jQuery);

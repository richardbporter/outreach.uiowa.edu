/**
 * @file
 * This file holds the application code for the congressional map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the congressional map.
  Drupal.congressionalMap = function() {
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

    // Basic map configuration.
    map.center({ lat: 41.9842807, lon: -93.5697204 });
    map.setZoomRange(7, 12);
    map.zoom(8, true);

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
              lat: f.geometry.coordinates[1],
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
      var o = '<h2>Congressional District ' + f.properties.text + '</h2>';
      o += '<hr>';
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

  // Attach congressionalMap behavior.
  Drupal.behaviors.congressionalMap = {
    attach: function(context, settings) {
      $('#map', context).once('congressionalMap', function() {
        Drupal.congressionalMap();
      });
    }
  };

})(jQuery);

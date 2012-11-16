/**
 * @file
 * This file holds the application code for the counties map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.initializeCountyMap = function() {
    // Create a base layer object.
    var baseLayer = mapbox.layer().id('uiowa-its.map-eyt0wixl');

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

    // Center the map over Iowa (Polk County) and zoom in.
    map.center({ lat: 41.9842807, lon: -93.5697204 });
    map.setZoomRange(7, 9);
    map.zoom(8, true);

    // Add the counties layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-counties'));

    // Create the county marker layer.
    var countyMarkers = mapbox.markers.layer();

    // Bind interactions to markers in this layer.
    mapbox.markers.interaction(countyMarkers);

    // Add the marker layer to the map.
    map.addLayer(countyMarkers);

    // Add a marker to the countyMarkers layer. Geometry is lon, lat.
    countyMarkers.add_feature({
        geometry: {
            coordinates: [-91.5887572, 41.6687272]
        },
        properties: {
          'marker-color': '#000',
          'marker-symbol': 'star-stroked',
          title: 'Example Marker',
          description: 'This is a single marker.'
        }
    });

    // Add attribution.
    map.ui.attribution.add().content('<a href="http://mapbox.com/about/maps">Terms &amp; Feedback</a>');

    // Log the map object.
    console.log(johnsonCounty, johnsonCountyCoords, countyMarkers);
  };

  // Attach countyMap behavior.
  Drupal.behaviors.countyMap = {
    attach: function(context, settings) {
      $('#map', context).once('countyMap', function() {
        // Initialize the map.
        Drupal.initializeCountyMap();
      });
    }
  }
})(jQuery);

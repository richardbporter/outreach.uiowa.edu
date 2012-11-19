/**
 * @file
 * This file holds the application code for the counties map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.initializeMap = function() {
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

    // Basic map configuration.
    map.center({ lat: 41.9842807, lon: -93.5697204 });
    //map.setPanLimits([{ lat: 41.2053, lon: -77.1827 }, { lat: 43.0040, lon: -108.1540 }]);
    map.setZoomRange(7, 9);

    // Zoom in one step closer if the viewport permits.
    if ($(window).width() > 1290 && $(window).height() > 800) {
      map.zoom(8, true);
    }
    else {
      map.zoom(7, true);
    }

    // Add the counties layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-counties'));

    // Create the county markers layer with custom factory function.
    var countyMarkers = mapbox.markers.layer().features([{
      // Polk County
      'geometry': { 'type': 'Point', 'coordinates': [-93.5697204, 41.6842807]},
      'properties': { 'text': 'Polk' }
    }, {
      // Harrison County
      'geometry': { 'type': 'Point', 'coordinates': [-95.8271491, 41.6885843]},
      'properties': { 'text': 'Harrison' }
    }]).factory(function(f) {
      // Define a new factory function. This takes a GeoJSON object
      // as its input and returns an element that represents the point.
      var countyLink = document.createElement('a');
      $(countyLink).addClass('marker use-ajax');
      $(countyLink).addClass(f.properties.text.toLowerCase());
      $(countyLink).text(f.properties.text);
      $(countyLink).attr('href', '/outreach-maps/county/' + f.properties.text.toLowerCase());
      return countyLink;
    });

     // Create county interaction.
    var countyInteraction = mapbox.markers.interaction(countyMarkers);

    // Turn off hover tooltips.
    countyInteraction.showOnHover(false);

    // Add the couny markers layer to the map.
    map.addLayer(countyMarkers);

     // Set a custom formatter for tooltips.
    // Provide a function that returns html to be used in tooltip.
    countyInteraction.formatter(function(f) {
      var o = '<h2>' + f.properties.text + '</h2>';
      return o;
    });

    // Add attribution.
    map.ui.attribution.add().content('<a href="http://mapbox.com/about/maps">Terms &amp; Feedback</a>');
  };

  // Attach initializeMap behavior.
  Drupal.behaviors.initializeMap = {
    attach: function(context, settings) {
      $('#map', context).once('initializeMap', function() {
        Drupal.initializeMap();
      });
    }
  };

})(jQuery);

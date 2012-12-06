/**
 * @file
 * This file holds the application code for the house map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the house map.
  Drupal.houseMap = function() {
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
    map.setZoomRange(6, 12);
    map.zoom(8, true);

    // Add the house layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-house-districts'));

    // Initalize the features variable and parse the house GeoJSON object into it.
    var features = $.parseJSON(Drupal.settings.houseGeoJSON);

    // Create the house markers layer with custom factory function.
    var houseMarkers = mapbox.markers.layer().features(features).factory(function(f) {
      // Define a new factory function. This takes a GeoJSON object
      // as its input and returns an element that represents the point.
      var houseLink = document.createElement('a');
      $(houseLink).addClass('house-marker use-ajax');
      $(houseLink).addClass('house-' + f.properties.text);
      $(houseLink).text(f.properties.text);
      $(houseLink).attr('href', '/outreach-maps/house/' + f.properties.text);

      // var houseImage = document.createElement('img');
      // $(houseImage).attr('src', '/sites/outreach.uiowa.edu/themes/outreach/images/marker-24.png');
      // $(houseLink).html(houseImage);

      // Add function that centers marker on click.
        MM.addEvent(houseLink, 'click', function(e) {
            map.ease.location({
              lat: f.geometry.coordinates[1],
              lon: f.geometry.coordinates[0]
            }).zoom(map.zoom()).optimal();
        });


      return houseLink;
    });

     // Create house interaction.
    var houseInteraction = mapbox.markers.interaction(houseMarkers);

    // Turn off hover tooltips.
    houseInteraction.showOnHover(false);

    // Add the couny markers layer to the map.
    map.addLayer(houseMarkers);

     // Set a custom formatter for tooltips.
    // Provide a function that returns html to be used in tooltip.
    houseInteraction.formatter(function(f) {
      var o = '<h2>House District ' + f.properties.text + '</h2>';
      o += '<div id="' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "") + '-content"></div>';
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
    map.ui.attribution.add().content('<a href="http://mapbox.com/about/maps">Terms &amp; Feedback</a>');
  };

  // Attach houseMap behavior.
  Drupal.behaviors.houseMap = {
    attach: function(context, settings) {
      $('#map', context).once('houseMap', function() {
        Drupal.houseMap();
      });
    }
  };

})(jQuery);

/**
 * @file
 * This file holds the application code for the senate map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the senate map.
  Drupal.senateMap = function() {
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

    // Add the senate layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-senate-districts'));

    // Initalize the features variable and parse the senate GeoJSON object into it.
    var features = $.parseJSON(Drupal.settings.senateGeoJSON);

    // Create the senate markers layer with custom factory function.
    var senateMarkers = mapbox.markers.layer().features(features).factory(function(f) {
      // Define a new factory function. This takes a GeoJSON object
      // as its input and returns an element that represents the point.
      var senateLink = document.createElement('a');
      $(senateLink).addClass('senate-marker use-ajax');
      $(senateLink).addClass('senate-' + f.properties.text);
      $(senateLink).text(f.properties.text);
      $(senateLink).attr('href', '/outreach-maps/senate/' + f.properties.text);

      // var senateImage = document.createElement('img');
      // $(senateImage).attr('src', '/sites/outreach.uiowa.edu/themes/outreach/images/marker-24.png');
      // $(senateLink).html(senateImage);

      // Add function that centers marker on click.
        MM.addEvent(senateLink, 'click', function(e) {
            map.ease.location({
              lat: f.geometry.coordinates[1],
              lon: f.geometry.coordinates[0]
            }).zoom(map.zoom()).optimal();
        });


      return senateLink;
    });

     // Create senate interaction.
    var senateInteraction = mapbox.markers.interaction(senateMarkers);

    // Turn off hover tooltips.
    senateInteraction.showOnHover(false);

    // Add the couny markers layer to the map.
    map.addLayer(senateMarkers);

     // Set a custom formatter for tooltips.
    // Provide a function that returns html to be used in tooltip.
    senateInteraction.formatter(function(f) {
      var o = '<h2>Senate District ' + f.properties.text + '</h2>';
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

  // Attach senateMap behavior.
  Drupal.behaviors.senateMap = {
    attach: function(context, settings) {
      $('#map', context).once('senateMap', function() {
        Drupal.senateMap();
      });
    }
  };

})(jQuery);

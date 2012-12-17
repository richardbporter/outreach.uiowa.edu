/**
 * @file
 * This file holds the application code for the county map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the county map.
  Drupal.outreachMapsCounty = function() {
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

    // Add the county layer.
    map.addLayer(mapbox.layer().id('uiowa-its.iowa-counties'));

    // Initalize the features variable and parse the county GeoJSON object into it.
    var features = $.parseJSON(Drupal.settings.countyGeoJSON);

    // Create the county markers layer with custom factory function.
    var countyMarkers = mapbox.markers.layer().features(features).factory(function(f) {
      // Define a new factory function. This takes a GeoJSON object
      // as its input and returns an element that represents the point.
      var countyLink = document.createElement('a');
      $(countyLink).addClass('county-marker use-ajax');
      $(countyLink).addClass(f.properties.text.toLowerCase().replace(' ', '-'));
      $(countyLink).text(f.properties.text);
      $(countyLink).attr('href', Drupal.settings.basePath + 'outreach-maps/county/' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", ""));

      // Create a centering function.
      var center = function(e) {
        map.ease.location({
          lat: f.geometry.coordinates[1],
          lon: f.geometry.coordinates[0]
        }).zoom(map.zoom()).optimal();
      };

      // Add function that centers marker on click.
      MM.addEvent(countyLink, 'click', center);

      // Add function that centers marker on touch.
      MM.addEvent(countyLink, 'touchstart', center);

      // Define a custom ajax action not associated with an element.
      var custom_settings = {};
      custom_settings.url = Drupal.settings.basePath + 'outreach-maps/county/' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "");
      custom_settings.event = 'touchstart';
      custom_settings.keypress = false;
      custom_settings.prevent = false;
      Drupal.ajax['outreach_maps_county_ajax_action'] = new Drupal.ajax(null, $(document.body), custom_settings);

      // Trigger the response.
      Drupal.ajax['outreach_maps_county_ajax_action'].specifiedResponse();

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
      var o = '<h2>' + f.properties.text + ' County</h2>';
      o += '<hr>';
      o += '<div id="' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "") + '-content"></div>';
      return o;
    });

    // // Reduce font size for zoom level 7.
    // map.addCallback("zoomed", function(map, zoomOffset) {
    //   var z = Math.round(map.zoom());
    //   if (z < 8) {
    //     $('#map a.county-marker').addClass('smaller');
    //   } else {
    //     $('#map a.county-marker').removeClass('smaller');
    //   }
    // });
  };

  // Attach outreachMapsCounty behavior.
  Drupal.behaviors.outreachMapsCounty = {
    attach: function(context, settings) {
      $('#map', context).once('outreachMapsCounty', function() {
        Drupal.outreachMapsCounty();
      });
    }
  };

})(jQuery);

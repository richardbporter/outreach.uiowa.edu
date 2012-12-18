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
    map.setZoomRange(7, 12);
    map.zoom(8, true);

    // Create an array of house districts that are close together.
    var clustered = [
      '13', '14', '15', '16', '30', '31', '32', '33', '34', '35', '36', '37',
      '38', '39', '40', '41', '42', '43', '44', '45', '46', '59', '60', '61',
      '62', '65', '66', '67', '68', '69', '70', '74', '77', '85', '86', '89',
      '90', '93', '94', '99', '100'
    ];

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
      // If this district is clustered.
      if ($.inArray(f.properties.text, clustered) != -1) {
        $(houseLink).addClass('cluster');
      }
      $(houseLink).text(f.properties.text);
      $(houseLink).attr('href', Drupal.settings.basePath + 'outreach-maps/house/' + f.properties.text);

      // Add function that centers marker on click.
      MM.addEvent(houseLink, 'click', function(e) {
          map.ease.location({
            lat: f.geometry.coordinates[1] + 0.2,
            lon: f.geometry.coordinates[0]
          }).zoom(map.zoom()).optimal();
      });

      // Add function that calls ajax and centers marker on touch.
      MM.addEvent(countyLink, 'touchstart', function(e) {
        // Define a custom ajax action not associated with an element.
        var custom_settings = {};
        custom_settings.url = Drupal.settings.basePath + 'outreach-maps/house/' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "");
        custom_settings.event = 'touchstart';
        custom_settings.keypress = false;
        custom_settings.prevent = false;
        Drupal.ajax['outreach_maps_house_ajax_action'] = new Drupal.ajax(null, $(document.body), custom_settings);

        // Trigger the response.
        Drupal.ajax['outreach_maps_house_ajax_action'].specifiedResponse();

        // Center map.
        map.ease.location({
          lat: f.geometry.coordinates[1] + 0.5, // Adjust for smaller viewport.
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
      o += '<hr>';
      o += '<div id="district-' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "") + '-content"></div>';
      return o;
    });

    // Create cluster marker layer.
    var clusterMarkers = mapbox.markers.layer().features([{
      'geometry': {'type': 'Point', 'coordinates': [-92.3060589, 42.4728884]},
      'properties': { 'text': 'black-hawk' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-90.8787708, 42.4634808]},
      'properties': { 'text': 'dubuque' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-91.5887572, 41.6687272]},
      'properties': { 'text': 'johnson' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-91.5976735, 42.0779506]},
      'properties': { 'text': 'linn' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-93.8697204, 41.77842807]},
      'properties': { 'text': 'polk' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-95.5449053, 41.3401835]},
      'properties': { 'text': 'pottawattamie' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-90.6222899, 41.6416792]},
      'properties': { 'text': 'scott' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-93.4660934, 42.0375378]},
      'properties': { 'text': 'story' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-96.0532956, 42.3932198]},
      'properties': { 'text': 'woodbury' }
    }]).factory(function(f) {
      var clusterLink = document.createElement('a');
      $(clusterLink).addClass('cluster-marker cluster-marker-' + f.properties.text);
      $(clusterLink).attr('href', '');
      return clusterLink;
    });

    // Add cluster markers layer.
    map.addLayer(clusterMarkers);

    // Cluster click handlers.
    $('#black-hawk, .cluster-marker-black-hawk').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.4728884, lon: -92.3060589 }).zoom(11).optimal();
    });

    $('#dubuque, .cluster-marker-dubuque').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.4634808, lon: -90.8787708 }).zoom(11).optimal();
    });

    $('#johnson, .cluster-marker-johnson').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6687272, lon: -91.5887572 }).zoom(11).optimal();
    });

    $('#linn, .cluster-marker-linn').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.0779506, lon: -91.5976735 }).zoom(11).optimal();
    });

    $('#polk, .cluster-marker-polk').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6842807, lon: -93.5697204 }).zoom(11).optimal();
    });

    $('#pottawattamie, .cluster-marker-pottawattamie').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.3401835, lon: -95.5449053 }).zoom(11).optimal();
    });

    $('#scott, .cluster-marker-scott').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6416792, lon: -90.6222899 }).zoom(11).optimal();
    });

    $('#story, .cluster-marker-story').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.0375378, lon: -93.4660934 }).zoom(11).optimal();
    });

    $('#woodbury, .cluster-marker-woodbury').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.3932198, lon: -96.0532956 }).zoom(11).optimal();
    });

     // Perform various actions on the zoom event.
    map.addCallback("zoomed", function(map, zoomOffset) {
      // Get the target zoom level.
      var z = Math.round(map.zoom());

      // @TODO: Currently not using cluster markers. Add back in if client wants.
      if (z >= 10) {
        $('.cluster-marker').fadeOut();
        $('.cluster').fadeIn();
      } else {
        $('.cluster').fadeOut();
        $('.cluster-marker').fadeIn();
      }
    });

    // Add attribution.
    // map.ui.attribution.add().content('<a href="http://mapbox.com/about/maps">Terms &amp; Feedback</a>');
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

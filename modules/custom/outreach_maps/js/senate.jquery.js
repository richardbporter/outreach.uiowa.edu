/**
 * @file
 * This file holds the application code for the senate map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the senate map.
  Drupal.senateMap = function() {
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

    // Zoom in one step closer if the viewport permits.
    if ($(window).width() > 1290 && $(window).height() > 800) {
      map.zoom(8, true);
    } else {
      map.zoom(7, true);
    }

    // Create an array of senate districts that are close together.
    var clustered = [
      '16', '17', '18', '19', '20', '21', '22', '30', '31', '33', '34', '35', '43', '45', '47'
    ];

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
       // If this district is clustered.
      if ($.inArray(f.properties.text, clustered) != -1) {
        $(senateLink).addClass('cluster');
      }
      $(senateLink).text(f.properties.text);
      $(senateLink).attr('href', Drupal.settings.basePath + 'outreach-maps/senate/' + f.properties.text);

      // var senateImage = document.createElement('img');
      // $(senateImage).attr('src', '/sites/outreach.uiowa.edu/themes/outreach/images/marker-24.png');
      // $(senateLink).html(senateImage);

      // Add function that centers marker on click.
      MM.addEvent(senateLink, 'click', function(e) {
          map.ease.location({
            lat: f.geometry.coordinates[1] + 0.1,
            lon: f.geometry.coordinates[0]
          }).zoom(map.zoom()).optimal();
      });

      // Add function that calls ajax and centers marker on touch.
      MM.addEvent(senateLink, 'touchstart', function(e) {
        // Define a custom ajax action not associated with an element.
        var custom_settings = {};
        custom_settings.url = Drupal.settings.basePath + 'outreach-maps/senate/' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "");
        custom_settings.event = 'touchstart';
        custom_settings.keypress = false;
        custom_settings.prevent = false;
        Drupal.ajax['outreach_maps_senate_ajax_action'] = new Drupal.ajax(null, $(document.body), custom_settings);

        // Trigger the response.
        Drupal.ajax['outreach_maps_senate_ajax_action'].specifiedResponse();

        // Center map.
        map.ease.location({
          lat: f.geometry.coordinates[1] + 0.4, // Adjust for smaller viewport.
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
      var o = '<h3 class="pane-title">Senate District ' + f.properties.text + '</h3>';
      o += '<div id="district-' + f.properties.text.toLowerCase().replace(' ', '-').replace("'", "") + '-content"></div>';
      return o;
    });

    // Create cluster marker layer.
    var clusterMarkers = mapbox.markers.layer().features([{
      'geometry': {'type': 'Point', 'coordinates': [-93.8697204, 41.77842807]},
      'properties': { 'text': 'polk' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-92.3060589, 42.4728884]},
      'properties': { 'text': 'black-hawk' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-91.5887572, 41.6687272]},
      'properties': { 'text': 'johnson' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-91.5976735, 42.0779506]},
      'properties': { 'text': 'linn' }
    }, {
      'geometry': {'type': 'Point', 'coordinates': [-90.6222899, 41.6416792]},
      'properties': { 'text': 'scott' }
    }]).factory(function(f) {
      var clusterLink = document.createElement('a');
      $(clusterLink).addClass('cluster-marker cluster-marker-' + f.properties.text);
      $(clusterLink).attr('href', '');
      return clusterLink;
    });

    // Add cluster markers layer.
    map.addLayer(clusterMarkers);

    // Cluster click handlers.
    $('#polk, .cluster-marker-polk').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6842807, lon: -93.5697204 }).zoom(11).optimal();
    });

    $('#black-hawk, .cluster-marker-black-hawk').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.4728884, lon: -92.3060589 }).zoom(11).optimal();
    });

    $('#johnson, .cluster-marker-johnson').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6687272, lon: -91.5887572 }).zoom(11).optimal();
    });

    $('#linn, .cluster-marker-linn').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 42.0779506, lon: -91.5976735 }).zoom(11).optimal();
    });

    $('#scott, .cluster-marker-scott').click(function(e) {
      e.preventDefault();
      map.ease.location({ lat: 41.6416792, lon: -90.6222899 }).zoom(11).optimal();
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

  // Attach senateMap behavior.
  Drupal.behaviors.senateMap = {
    attach: function(context, settings) {
      $('#map', context).once('senateMap', function() {
        Drupal.senateMap();
      });
    }
  };

})(jQuery);

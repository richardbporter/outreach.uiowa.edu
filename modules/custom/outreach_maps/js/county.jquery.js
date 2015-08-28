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


    var infowindow = null;
    map = new google.maps.Map(document.getElementById('map'), {
      zoom: 8,
      center: {lat: 42, lng: -93.5},
      disableDefaultUI: true
    });


    var styles = [
    {
        "featureType": "all",
        "elementType": "labels.text.fill",
        "stylers": [
            {
                "saturation": 36
            },
            {
                "color": "#333333"
            },
            {
                "lightness": 40
            }
        ]
    },
    {
        "featureType": "all",
        "elementType": "labels.text.stroke",
        "stylers": [
            {
                "visibility": "on"
            },
            {
                "color": "#ffffff"
            },
            {
                "lightness": 16
            }
        ]
    },
    {
        "featureType": "all",
        "elementType": "labels.icon",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "administrative",
        "elementType": "geometry.fill",
        "stylers": [
            {
                "color": "#fefefe"
            },
            {
                "lightness": 20
            }
        ]
    },
    {
        "featureType": "administrative",
        "elementType": "geometry.stroke",
        "stylers": [
            {
                "color": "#fefefe"
            },
            {
                "lightness": 17
            },
            {
                "weight": 1.2
            }
        ]
    },
    {
        "featureType": "administrative",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "landscape",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#f5f5f5"
            },
            {
                "lightness": 20
            }
        ]
    },
    {
        "featureType": "landscape",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "landscape.natural",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "landscape.natural.terrain",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "poi",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#f5f5f5"
            },
            {
                "lightness": 21
            }
        ]
    },
    {
        "featureType": "poi.park",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#dedede"
            },
            {
                "lightness": 21
            }
        ]
    },
    {
        "featureType": "road.highway",
        "elementType": "geometry.fill",
        "stylers": [
            {
                "color": "#ffffff"
            },
            {
                "lightness": 17
            }
        ]
    },
    {
        "featureType": "road.highway",
        "elementType": "geometry.stroke",
        "stylers": [
            {
                "color": "#ffffff"
            },
            {
                "lightness": 29
            },
            {
                "weight": 0.2
            }
        ]
    },
    {
        "featureType": "road.highway",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    },
    {
        "featureType": "road.arterial",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#ffffff"
            },
            {
                "lightness": 18
            }
        ]
    },
    {
        "featureType": "road.local",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#ffffff"
            },
            {
                "lightness": 16
            }
        ]
    },
    {
        "featureType": "transit",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#f2f2f2"
            },
            {
                "lightness": 19
            }
        ]
    },
    {
        "featureType": "water",
        "elementType": "geometry",
        "stylers": [
            {
                "color": "#e9e9e9"
            },
            {
                "lightness": 17
            }
        ]
    },
    {
        "featureType": "water",
        "elementType": "labels.text",
        "stylers": [
            {
                "visibility": "off"
            }
        ]
    }
    ];
    map.setOptions({styles:styles});
    map.data.addGeoJson(countiesJSON);
    map.data.setStyle({
      fillColor: '#ffd400',
      fillOpacity: 0.7,
      strokeWeight: 0.5
    });
    map.data.forEach(function(feature){
        var points = feature.getGeometry().getArray();
        var ring = points[0].getArray();
        var bounds = new google.maps.LatLngBounds();
        for (j = 0; j < ring.length; j++) {
          bounds.extend(ring[j]);
        }
        var mapLabel = new MapLabel({
            text: feature.getProperty('name'),
            position: bounds.getCenter(),
            map: map,
            fontSize: 12,
            align: 'center',
            minZoom: 7
        });

    });

    map.data.addListener('click', function(event) {
      var countyTitle = event.feature.G.name.toLowerCase().replace(' ', '-').replace("'", "");
      console.log("evented");
      if(infowindow){
        infowindow.close();
      }
      var custom_settings = {};
      custom_settings.url = Drupal.settings.basePath + 'outreach-maps/county/' + countyTitle;
      custom_settings.event = 'click';
      custom_settings.keypress = false;
      custom_settings.prevent = false;

      Drupal.ajax['outreach_maps_county_ajax_action'] = new Drupal.ajax(null, $('#footer'), custom_settings);

      // Trigger the response.
      Drupal.ajax['outreach_maps_county_ajax_action'].specifiedResponse();


      var infoWindowText = "<h3>"+event.feature.G.name+" County Impact</h3> \
      <hr><div id=\""+countyTitle+"-data\"></div> ";

      infowindow = new google.maps.InfoWindow({
        content:infoWindowText,
        position:event.latLng,
        maxWidth: 500
      });
      map.setCenter(event.latLng);
      infowindow.open(map);
    });

    map.data.addListener('mouseover', function(event){
      map.data.overrideStyle(event.feature, {fillColor: '#222222'});
    });
    map.data.addListener('mouseout', function(event){
      map.data.revertStyle();
    });
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

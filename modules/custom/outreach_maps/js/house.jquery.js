/**
 * @file
 * This file holds the application code for the house map.
 */

// Namespace jQuery to avoid conflicts.
(function($) {
  // Initialize the house map.
  Drupal.outreachMapsHouse = function() {
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
    map.data.addGeoJson(houseJSON);
    map.data.setStyle({
      fillColor: '#ffd400',
      fillOpacity: 0.7,
      strokeWeight: 0.5
    });

    map.data.addListener('click', function(event) {
      var firstColumn = '', secondColumn = '';
      if(event.feature.G.COUNTIES){
        for(i=0;i<event.feature.G.COUNTIES.length;i++){
          if(i%2 == 0){
            firstColumn += "<li><a href=\"/county/"+event.feature.G.COUNTIES[i][1]+"\">"+event.feature.G.COUNTIES[i][0]+"</a></li>";
          }
          else{
            secondColumn += "<li><a href=\"/county/"+event.feature.G.COUNTIES[i][1]+"\">"+event.feature.G.COUNTIES[i][0]+"</a></li>";
          }
        }
      }

      if(infowindow){
        infowindow.close();
      }
      var infoWindowText = "<h3>"+event.feature.G.NAMELSAD+"</h3> \
      <hr> \
      <h4>Counties</h4> \
      <ul style=\"float: left;width: 50%; padding:0; margin: 0; list-style-type: none;\">"+firstColumn+"</ul> \
      <ul style=\"float: left;width: 50%; padding:0; margin: 0;list-style-type: none;\">"+secondColumn+"</ul>";

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
  Drupal.behaviors.outreachMapsHouse = {
    attach: function(context, settings) {
      $('#map', context).once('outreachMapsHouse', function() {
        Drupal.outreachMapsHouse();
      });
    }
  };

})(jQuery);

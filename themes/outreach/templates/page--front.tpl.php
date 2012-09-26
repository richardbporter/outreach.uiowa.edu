<!doctype html>
<!-- Conditional comment for mobile ie7 blogs.msdn.com/b/iemobile/ -->
<!--[if IEMobile 7 ]>    <html class="no-js iem7" lang="en"> <![endif]-->
<!--[if (gt IEMobile 7)|!(IEMobile)]><!--> <html class="no-js" lang="en"> <!--<![endif]-->

<head>
  <meta charset="utf-8">

  <title>Outreach | The University of Iowa</title>
  <meta name="description" content="Connecting across the state.">

  <meta name="HandheldFriendly" content="True">
  <meta name="MobileOptimized" content="320">
  <meta name="viewport" content="width=device-width">

  <link rel="apple-touch-icon-precomposed" sizes="114x114" href="img/h/apple-touch-icon.png">
  <link rel="apple-touch-icon-precomposed" sizes="72x72" href="img/m/apple-touch-icon.png">
  <link rel="apple-touch-icon-precomposed" href="img/l/apple-touch-icon-precomposed.png">
  <link rel="shortcut icon" href="img/l/apple-touch-icon.png">

  <!-- <meta name="apple-mobile-web-app-capable" content="yes">
  <meta name="apple-mobile-web-app-status-bar-style" content="black"> -->
  <!-- <script>(function(){var a;if(navigator.platform==="iPad"){a=window.orientation!==90||window.orientation===-90?"img/startup-tablet-landscape.png":"img/startup-tablet-portrait.png"}else{a=window.devicePixelRatio===2?"img/startup-retina.png":"img/startup.png"}document.write('<link rel="apple-touch-startup-image" href="'+a+'"/>')})()</script> -->
  
  <!-- <script>(function(a,b,c){if(c in b&&b[c]){var d,e=a.location,f=/^(a|html)$/i;a.addEventListener("click",function(a){d=a.target;while(!f.test(d.nodeName))d=d.parentNode;"href"in d&&(d.href.indexOf("http")||~d.href.indexOf(e.host))&&(a.preventDefault(),e.href=d.href)},!1)}})(document,window.navigator,"standalone")</script> -->
  
  <meta http-equiv="cleartype" content="on">

  <link rel="stylesheet" href="css/screen.css">
  <link rel="stylesheet" href="wax/theme/controls.css">
  
  <script src="js/libs/modernizr-2.0.6.min.js"></script>
  <script src="js/wax/ext/modestmaps.min.js"></script>
  <script src="js/wax/dist/wax.mm.js"></script>
  <script src="js/helper.js"></script>
  <script src="js/script.js"></script>
</head>

<body>

  <div id="container">
    <header>
      <hgroup>
        <h1>Outreach</h1>
        <h2>Connecting across the state.</h2>
      </hgroup>
    </header>
    
    <div id="main" role="main">
      <p>The University of Iowa is committed to its mission of statewide service. Our students, faculty and staff come from all corners of the state, with all 99 counties represented in the student body, and University of Iowa Hospitals and Clinics delivers the highest quality health care to Iowans whether they travel to Iowa City or receive services in their home county.</p>
      <p>We invite you to learn more about University of Iowa connections in your county and share in the Iowa Promise, which includes dedication to excellence and a pledge to serve all Iowans.</p>
      
      <div id="modestmaps-setup">
        <script>
        var url = 'http://api.tiles.mapbox.com/v3/mapbox.world-light.jsonp';
        wax.tilejson(url, function(tilejson) {
        	// Set up a map in a div with the id 'modestmaps-setup'
          var m = new MM.Map('modestmaps-setup',
          // Use Wax's connector to add a new custom layer
          new wax.mm.connector(tilejson),
          // And it'll be 240px by 120px
          new MM.Point(240,120));

          // Center it on the United States, at zoom level 2.
          m.setCenterZoom({ lat: 39, lon: -98 }, 2);
        });
        </script>
      </div>
    </div>

    <footer>
      <p>The University of Iowa</p> 
      <p>Office of Governmental Relations</p>
      <p>Copyright 2012 All Rights Reserved.</p>
    </footer>
  </div> <!--! end of #container -->


  <script src="//ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js"></script>
  <script>window.jQuery || document.write('<script src="js/libs/jquery-1.7.1.min.js"><\/script>')</script>


  <!-- scripts concatenated and minified via ant build script -->
  <script src="js/helper.js"></script>
  <!-- end concatenated and minified scripts-->

  <!-- <script src="https://getfirebug.com/firebug-lite.js"></script> -->

  <script> // Change UA-XXXXX-X to be your site's ID
    var _gaq=[["_setAccount","UA-XXXXX-X"],["_trackPageview"]];
    (function(d,t){var g=d.createElement(t),s=d.getElementsByTagName(t)[0];g.async=1;
    g.src=("https:"==location.protocol?"//ssl":"//www")+".google-analytics.com/ga.js";
    s.parentNode.insertBefore(g,s)}(document,"script"));
  </script>

</body>
</html>

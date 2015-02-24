#outreach.uiowa.edu

The outreach.uiowa.edu site is a heavily customized site. It uses MapBox and
custom modules to display text markers on rasterized images hosted on
the ITS Web Services tile hosting account: http://tiles.mapbox.com/uiowa-its

Clicking these markers performs an AJAX call to retreive field data from nodes. The AJAX response updates the marker popup on the map. The editor role has permission to edit county nodes which is where all the field data is stored. They can also import the Outreach Feed to do a bulk update of all counties. When doing an import, the year field needs month and day granularity
to be converted properly, e.g. 8-1-2015 for the year 2015.

# Base Theme
This is an HTML5, mobile-friendly, minimal base theme that takes components 
from HTML5 Boilerplate and the Drupal Boron theme.

## Modifications
* Add meta IE render engine and meta viewport tags to <head> via template.php.
* Add conditional <html> classes to html.tpl.php.
** Remove xml:lang attribute from <html> element.
** Add $rdf->version attribute to <html> element.
* Remove html5 shim script from theme settings.
* Add normalize.css from H5BP.
* Split up main.css from H5BP into separate components.
** defaults.css for 'opinionated defaults'
** mq.css for media queries
* Add modernizr js.
* Move main menu in page.tpl.php below header.
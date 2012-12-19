<?php
/**
 * @file
 * Adaptivetheme implementation to display a single Drupal page.
 *
 * ###  Full Width Wrappers  ###
 *
 * This page template that has 100% width wrappers, which effectively
 * divide the page up into sections to you can style with full width
 * backgrounds. AT Commerce uses markup similar to this to achieve
 * its style - its worth checking out to see how I did this.
 *
 * To use copy this to your subtheme and rename it page.tpl.php,
 * or enable this in theme settings under "Site Tweaks".
 *
 * Available variables:
 *
 * Adaptivetheme supplied variables:
 * - $site_logo: Themed logo - linked to front with alt attribute.
 * - $site_name: Site name linked to the homepage.
 * - $site_name_unlinked: Site name without any link.
 * - $hide_site_name: Toggles the visibility of the site name.
 * - $visibility: Holds the class .element-invisible or is empty.
 * - $primary_navigation: Themed Main menu.
 * - $secondary_navigation: Themed Secondary/user menu.
 * - $primary_local_tasks: Split local tasks - primary.
 * - $secondary_local_tasks: Split local tasks - secondary.
 * - $tag: Prints the wrapper element for the main content.
 * - $is_mobile: Bool, requires the Browscap module to return TRUE for mobile
 *   devices. Use to test for a mobile context.
 * - *_attributes: attributes for various site elements, usually holds id, class
 *   or role attributes.
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Core Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * Adaptivetheme Regions:
 * - $page['leaderboard']: full width at the very top of the page
 * - $page['menu_bar']: menu blocks placed here will be styled horizontal
 * - $page['secondary_content']: full width just above the main columns
 * - $page['content_aside']: like a main content bottom region
 * - $page['tertiary_content']: full width just above the footer
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see adaptivetheme_preprocess_page()
 * @see adaptivetheme_process_page()
 */
?>
<div id="page-wrapper">
  <div id="page" class="<?php print $classes; ?>">
    <?php if($page['leaderboard']): ?>
      <div id="leaderboard-wrapper">
        <div class="container clearfix">
          <?php print render($page['leaderboard']); ?>
        </div>
      </div>
    <?php endif; ?>

    <div id="header-wrapper">
      <div class="container clearfix">
        <header<?php print $header_attributes; ?>>

          <?php if ($site_logo || $site_name || $site_slogan): ?>
            <!-- start: Branding -->
            <div<?php print $branding_attributes; ?>>

              <?php if ($site_logo): ?>
                <div id="logo">
                  <?php print $site_logo; ?>
                </div>
              <?php endif; ?>

              <?php if ($site_name || $site_slogan): ?>
                <!-- start: Site name and Slogan hgroup -->
                <hgroup<?php print $hgroup_attributes; ?>>

                  <?php if ($site_name): ?>
                    <h1<?php print $site_name_attributes; ?>><?php print $site_name; ?></h1>
                  <?php endif; ?>

                  <?php if ($site_slogan): ?>
                    <h2<?php print $site_slogan_attributes; ?>><?php print $site_slogan; ?></h2>
                  <?php endif; ?>

                </hgroup><!-- /end #name-and-slogan -->
              <?php endif; ?>


            </div><!-- /end #branding -->
          <?php endif; ?>

          <?php if ($page['menu_bar'] || $primary_navigation || $secondary_navigation): ?>
            <div id="nav-wrapper">
              <div class="container clearfix">
                <?php print render($page['menu_bar']); ?>
                <?php if ($primary_navigation): print $primary_navigation; endif; ?>
                <?php if ($secondary_navigation): print $secondary_navigation; endif; ?>
              </div>
            </div>
          <?php endif; ?>

        <?php print render($page['header']); ?>

        </header>
      </div>
    </div>

    <?php if ($breadcrumb): ?>
      <div id="breadcrumb-wrapper">
        <div class="container clearfix">
          <?php print $breadcrumb; ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($messages || $page['help']): ?>
      <div id="messages-help-wrapper">
        <div class="container clearfix">
          <?php print $messages; ?>
          <?php print render($page['help']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($page['secondary_content']): ?>
      <div id="secondary-content-wrapper">
        <div class="container clearfix">
          <?php print render($page['secondary_content']); ?>
        </div>
      </div>
    <?php endif; ?>

    <div id="content-wrapper"><div class="container">
      <div id="columns"><div class="columns-inner clearfix">
        <div id="content-column"><div class="content-inner">

          <?php print render($page['highlighted']); ?>

          <<?php print $tag; ?> id="main-content">

            <?php print render($title_prefix); ?>

            <!-- Begin map. -->
            <div id="map">
              <a href="#" class="zoomer zoomin">+</a>
              <a href="#" class="zoomer zoomout">-</a>
              <div class="marker-popup"></div>
            </div>

            <div id='map-ui'>
              <ul>
                <li><a id="share-button" href="#">Share +</a></li>
                <li><a id="about-button" href="#">About</a></li>
              </ul>

              <?php if ($map == 'house'): ?>
                <ul>
                  <li><a class="wide" href='#' id='black-hawk'>Black Hawk County</a></li>
                  <li><a class="wide" href='#' id='dubuque'>Dubuque County</a></li>
                  <li><a class="wide" href='#' id='johnson'>Johnson County</a></li>
                  <li><a class="wide" href='#' id='linn'>Linn County</a></li>
                  <li><a class="wide" href='#' id='polk'>Polk County</a></li>
                  <li><a class="wide" href='#' id='pottawattamie'>Pottawattamie County</a></li>
                  <li><a class="wide" href='#' id='scott'>Scott County</a></li>
                  <li><a class="wide" href='#' id='story'>Story County</a></li>
                  <li><a class="wide" href='#' id='woodbury'>Woodbury County</a></li>
                </ul>
              <?php elseif ($map == 'senate'): ?>
                <ul>
                  <li><a class="wide" href='#' id='black-hawk'>Black Hawk County</a></li>
                  <li><a class="wide" href='#' id='johnson'>Johnson County</a></li>
                  <li><a class="wide" href='#' id='linn'>Linn County</a></li>
                  <li><a class="wide" href='#' id='polk'>Polk County</a></li>
                  <li><a class="wide" href='#' id='scott'>Scott County</a></li>
                </ul>
              <?php endif; ?>
            </div>
            <div id="share-dialog" title="Share">
              <p>Share this map on Facebook, Twitter or Google Plus.</p>
              <ul>
                <li><a id="facebook" href="http://www.facebook.com/sharer.php?u=http://outreach.uiowa.edu" target="_blank">Facebook</a></li>
                <li><a id="twitter" href="http://twitter.com/share?url=http://outreach.uiowa.edu&text=Connecting across the state of Iowa." target="_blank">Twitter</a></li>
                <li><a id="plusone" href="https://plusone.google.com/_/+1/confirm?hl=en&url=http://outreach.uiowa.edu" target="_blank">Google +1</a></li>
              </ul>
            </div>

            <div id="about-dialog" title="About">
              <p>The University of Iowa impacts the lives of Iowans from border
              to border and river to river. We invite you to learn more about
              our connections in your community.</p>
              <p>Click on a county or district name to bring up information
              about it. Use the zoom controls in the top left to zoom in/out.
              Click and drag the map around to see more/less of Iowa.</p>
            </div>

            <?php print $feed_icons; ?>

            <?php print render($title_suffix); // Prints page level contextual links ?>

          </<?php print $tag; ?>>

          <?php print render($page['content_aside']); ?>

        </div></div>

        <?php print render($page['sidebar_first']); ?>
        <?php print render($page['sidebar_second']); ?>

      </div></div>
    </div></div>

    <?php if ($page['tertiary_content']): ?>
      <div id="tertiary-content-wrapper">
        <div class="container clearfix">
          <?php print render($page['tertiary_content']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($page['footer']): ?>
      <div id="footer-wrapper">
        <div class="container clearfix">
          <a href="#" id="help-button" title="Having trouble with the map? Click 'Help' for a list of counties.">Help</a>
          <footer<?php print $footer_attributes; ?>>
            <?php print render($page['footer']); ?>
          </footer>
        </div>
      </div>
    <?php endif; ?>

  </div>
</div>

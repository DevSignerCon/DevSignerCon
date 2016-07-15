<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>

<div id="page">

  <div id="header-wrapper">
    <header class="header" id="header-section" role="banner">

      <div class="header-inner">
        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
        <?php endif; ?>

        <?php if ($site_name || $site_slogan): ?>
          <div class="header__name-and-slogan" id="name-and-slogan">
            <?php if ($site_name): ?>
              <h1 class="header__site-name" id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
            <?php endif; ?>
          </div>
        <?php endif; ?>

        <div id="navigation-wrapper">

          <?php print render($page['navigation']); ?>

        </div>
      </div>

      <?php if ($page['header']): ?>
        <div class="region-header">
        <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>

    </header>
  </div>

  <div id="main">

    <div id="content-wrapper">
      <div id="content-horse"></div>
      <div id="content" class="column" role="main">
        <div class="content-inner">
          <?php if ($page['highlighted']): ?>
            <div class="region-highlighted">
            <?php print render($page['highlighted']); ?>
            </div>
          <?php endif; ?>
          <?php print $breadcrumb; ?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?>
            <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
          <?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php print $messages; ?>
          <?php print render($tabs); ?>
          <?php if ($page['help']): ?>
            <div class="region-help">
            <?php print render($page['help']); ?>
            </div>
          <?php endif; ?>
          <?php if ($action_links): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
          <?php endif; ?>
          <div class="region-content">
            <?php print render($page['content']); ?>
          </div>
          <?php print $feed_icons; ?>
        </div>

        <?php
          // Render the sidebars to see if there's anything in them.
          $sidebar_first  = render($page['sidebar_first']);
          $sidebar_second = render($page['sidebar_second']);
        ?>

        <?php if ($sidebar_first || $sidebar_second): ?>
          <aside class="sidebars">
            <?php print $sidebar_first; ?>
            <?php print $sidebar_second; ?>
          </aside>
        <?php endif; ?>

      </div><!-- #content -->
    </div><!-- #content-wrapper -->

    <?php if ($page['tier_1']): ?>
      <div class="region-tier_1">
      <?php print render($page['tier_1']); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['tier_2']): ?>
      <div class="region-tier_2">
      <?php print render($page['tier_2']); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['tier_3']): ?>
      <div class="region-tier_3">
      <?php print render($page['tier_3']); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['tier_4']): ?>
      <div class="region-tier_4">
        <div class="tier4-frame">
        <?php print render($page['tier_4']); ?>
        </div>
      </div>
    <?php endif; ?>

    <?php if ($page['tier_5']): ?>
      <div class="region-tier_5">
      <?php print render($page['tier_5']); ?>
      </div>
    <?php endif; ?>

  </div>

  <div id="footer-wrapper">
    <?php print render($page['footer']); ?>
  </div>

</div>

<?php if ($page['bottom']): ?>
  <div class="region-bottom">
  <?php print render($page['bottom']); ?>
  </div>
<?php endif; ?>

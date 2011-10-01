<!-- Layout -->
    <div id="wrapper">
      <div id="header">
        <?php print render($page['header']); ?>

        <?php if ($logo): ?>
          <a href="<?php print check_url($front_page); ?>" title="<?php print check_plain($site_name); ?>">
            <img src="<?php print check_url($logo); ?>" alt="<?php print check_plain($site_name); ?>" id="logo" />
          </a>
        <?php endif; ?>
        <?php print '<h1><a href="'. check_url($front_page) .'" title="'. check_plain($site_name) .'">';
          if ($site_name) {
            print '<span id="sitename">'. check_plain($site_name) .'</span>';
          }
          if ($site_slogan) {
            print '<span id="siteslogan">'. check_plain($site_slogan) .'</span>';
          }
          print '</a></h1>';
        ?>
        
        <?php if ($search_box): ?><?php print $search_box ?><?php endif; ?>

<?php if ($main_menu): ?>
      <div id="primary-links">
        <?php print theme('links__system_main_menu', array(
          'links' => $main_menu,
          'attributes' => array(
            'id' => 'main-menu-links',
            'class' => array('links', 'primary-links'),
          ),
          'heading' => array(
            'text' => t('Main menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </div> <!-- /#main-menu -->
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <div id="secondary-links">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'id' => 'secondary-menu-links',
            'class' => array('links', 'secondary-links'),
          ),
          'heading' => array(
            'text' => t('Secondary menu'),
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </div> <!-- /#secondary-menu -->
    <?php endif; ?>

      <div id="container" <?php if (!empty($secondary_links)) print 'class="with-tabs"'?>>
        <div class="border-left"></div>
        <div id="center">
          <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title">
          <?php print $title; ?>
        </h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
      <?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
        </div> <!-- /#center -->
  
        <?php if ($right): ?>
          <div id="sidebar-right" class="sidebar">
            <?php print $right ?>
          </div> <!-- /#sidebar-right -->
        <?php endif; ?>

        <div id="footer" class="clear">
        <?php if (!empty($primary_links)) : ?>
          <?php print theme('links', $primary_links, array('class' => 'footer_menu')) ?>
        <?php endif; ?>
          <?php print $footer_message . $footer ?>
        </div> <!-- /#footer -->

        <div id="container_bottom">
          <div class="border-left"></div>
          <div class="border-center"></div>
          <div class="border-right"></div>
        </div>
      </div> <!-- /#container -->
      <span class="clear">&nbsp;</span>
    </div> 
    <!-- /#wrapper -->
<!-- /layout -->

  <?php print $closure ?>
<!-- Header. -->
<div id="header">
  <div id="header-inside">
    <div id="header-inside-left">
            
      <?php if ($logo): ?>
      <a href="<?php print check_url($front_page); ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
      <div class="clearfix">
      <?php if ($site_name): ?>
      <span id="site-name"><a href="<?php print check_url($front_page); ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></span>
      <?php endif; ?>
      <?php if ($site_slogan): ?>
      <span id="slogan"><?php print $site_slogan; ?></span>
      <?php endif; ?>
      </div><!-- /site-name-wrapper -->
      <?php endif; ?>
            
      </div>
	  
      <div id="header-inside-right">
        <?php print render($page['search_area']); ?>    
      </div>
    
    </div><!-- EOF: #header-inside -->

</div><!-- EOF: #header -->

<!-- Header Menu. -->
<div id="header-menu">

<div id="header-menu-inside">
  <?php print render($page['menu']); ?>
</div><!-- EOF: #header-menu-inside -->

</div><!-- EOF: #header-menu -->


<!-- Preface -->
<?php if ($page['preface']): ?>
  <div id="preface">
    <div id="preface-inside">    
      <?php print render($page['preface']); ?>
    </div><!-- EOF: #preface-inside -->
  </div><!-- EOF: #preface -->
<?php endif; ?> 

<!-- Content. -->
<div id="content">
  <div id="content-inside" class="inside">
    
  <!-- Rij 1 -->
  <?php if ($page['rij1']): ?>
    <div id="rij1">
      <?php print render($page['rij1']); ?>    
    </div><!-- EOF: #rij1 -->	
  <?php endif; ?> 


  <!-- Rij 2 -->
  <?php if ($page['rij2']): ?>
    <div id="rij2">
      <?php print render($page['rij2']); ?>    
    </div><!-- EOF: #rij2 -->	
  <?php endif; ?> 


    <div id="main">
      <?php if (theme_get_setting('breadcrumb_display','corporateclean')): print $breadcrumb; endif; ?>
            
	<?php if ($page['highlighted']): ?>
          <div id="highlighted">
            <?php print render($page['highlighted']); ?>
          </div>
        <?php endif; ?>
    
	<?php if ($messages): ?>
	  <div id="console" class="clearfix">
	    <?php print $messages; ?>
	  </div>
	<?php endif; ?>
  
	<?php if ($page['help']): ?>
	  <div id="help">
	    <?php print render($page['help']); ?>
	  </div>
	<?php endif; ?>

	<?php if ($action_links): ?>
	  <ul class="action-links">
	    <?php print render($action_links); ?>
	  </ul>
	<?php endif; ?>
	
	<?php print render($title_prefix); ?>
	  <?php if ($title): ?>
	    <h1><?php print $title ?></h1>
	  <?php endif; ?>
	<?php print render($title_suffix); ?>
	
	<?php if ($tabs): ?>
          <?php print render($tabs); ?>
        <?php endif; ?>
	
	<?php print render($page['content']); ?>
	
	<!-- Bottom region --> 
	<?php if ($page['bottom1'] || $page['bottom1']): ?>   
	  <div id="bottom">   
	    <div class="bottom1">
	      <?php print render($page['bottom1']); ?>
	    </div>
	  
	    <div class="bottom2">
	      <?php print render($page['bottom2']); ?>
	    </div>
          </div><!-- EOF: #bottom -->
	<?php endif; ?>
				    
	<?php print $feed_icons; ?>
            
        </div><!-- EOF: #main -->
        
        <div id="sidebar">         
          <?php print render($page['sidebar_first']); ?>
        </div><!-- EOF: #sidebar -->

    </div><!-- EOF: #content-inside -->

</div><!-- EOF: #content -->

<!-- Footer -->    
<div id="footer">
  <div id="footer-inside">
    <div class="footer-area first">
    <?php print render($page['footer_first']); ?>
    </div><!-- EOF: .footer-area -->
    
    <div class="footer-area second">
    <?php print render($page['footer_second']); ?>
    </div><!-- EOF: .footer-area -->
    
    <div class="footer-area third">
    <?php print render($page['footer_third']); ?>
    </div><!-- EOF: .footer-area -->
      
  </div><!-- EOF: #footer-inside -->
</div><!-- EOF: #footer -->
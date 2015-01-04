<div class="wrapper">
  <header>
    <nav class="top-navigation nav-bar">
      <?php print render($top_menu);  ?>
    </nav>
    <h1 class="site-name"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span>Library of the</span> Haskala</a></h1>
    <hr>

  </header>


  <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>

  <a id="main-content"></a>

  <?php print render($title_prefix); ?>
  <?php if (!empty($title)): ?>
    <h1 class="page-header"><?php print $title; ?></h1>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php print $messages; ?>

  <?php if (!empty($tabs)): ?>
    <?php print render($tabs); ?>
  <?php endif; ?>

  <?php if (!empty($action_links)): ?>
    <ul class="action-links"><?php print render($action_links); ?></ul>
  <?php endif; ?>

  <?php print render($page['content']); ?>

  <footer>
    <nav class="icons-nav nav-bar">
      <?php print render($icons_menu);  ?>
    </nav>
    <div class="login-area">
      <?php print render($user_menu);  ?>
    </div>
  </footer>

</div>

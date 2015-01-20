<div class="wrapper">
  <header>
    <nav class="top-navigation nav-bar top-menu">
      <?php print render($top_menu);  ?>
    </nav>
    <h1 class="site-name"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span>Library of the</span> Haskala</a></h1>
    <hr>
    <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
  </header>

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

<section class="main-content">
  <?php print $content['intro']; ?>
</section>

<section class="search">
  <?php print $content['search']; ?>
</section>

<section class="tags-cloud-wrapper">
  <h3><?php print t('Tag cloud by topics'); ?></h3>
  <div class="tags-cloud">
    <nav class="nav-bar">
      <?php print $content['topics']; ?>
    </nav>
  </div>
</section>

<section>
  <h3 class="hr-title"><?php print $type_label; ?></h3>
  <div class="main-content">
    <div class="node node-<?php print $type; ?>">
      <h1><?php print $title; ?></h1>
      <?php print render($content); ?>
    </div>
  </div>
</section>

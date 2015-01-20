<?php
/**
 * @file
 * Default theme implementation to display a Book details.
 *
 * Available variables:
 * - $nid: the nid of the node.
 * - $grouped_fields: render haskala-book-fields.tpl
 *
 */
?>

<section>
  <h3 class="hr-title">Book</h3>
  <div class="main-content">
    <div id="node-<?php print $nid; ?>" class="node node-book">
          <?php print $grouped_fields; ?>
    </div>
  </div>
</section>




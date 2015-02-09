<div class="field field-name-field-current-name field-type-text field-label-above">
  <div class="field-label"><?php print $title_label; ?>:</div>
  <div class="field-items">
    <div class="field-item even">
      <a href="<?php print $term_url; ?>"><?php print $term_name; ?></a>
    </div>
  </div>
</div>

<?php print render($content); ?>
<?php

/**
 * @file
 * Default theme implementation to display a Book details.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $top_details_group: An array of node book top details group fields items.
 * - $tabs: An array of node book bottom details groups fields items.
 *
 */
?>

<section id="top-details">
  <?php if (!empty($title)): ?>
    <h1 class="title page-header"><?php print $title; ?></h1>
  <?php endif; ?>

  <?php if (!empty($top_details_group)): ?>
    <div class="top-fields">
      <div class="field">
        <div class="field-label type-label"><?php print t('Type of book'); ?>:</div>
        <div class="content"></div>
      </div>
      <?php foreach($top_details_group as $single_tab_fields): ?>
        <?php foreach($single_tab_fields as $key_field => $tab_field): ?>
          <?php // Sub group in tab if exist.
          if ($key_field === 'sub_title'): ?>
            <div class="tab-sub-title <?php print $tab_field == t('Type of book') ? 'type-of-book' : ''; ?>">
              <?php print $tab_field; ?>
            </div>
          <?php else: ?>
            <?php print render($tab_field); ?>
          <?php endif; ?>
        <?php endforeach; ?>
      <?php endforeach; ?>
    </div>
  <?php endif; ?>
</section>

<section id="bottom-details">
  <nav id="details-navigation">
    <ul>
      <?php foreach($tabs as $group_name => $group): ?>
          <li><a href="#<?php print $group_name; ?>"><?php print $group_name; ?></a></li>
      <?php endforeach; ?>
    </ul>
  </nav>
  <section id="groups">
    <?php foreach($tabs as $tab_name => $multi_tab_fields): ?>
      <div class="fields-group">
        <div class="fields-group-name" id="<?php print $tab_name; ?>"><?php print $tab_name; ?></div>
        <div class="fields">
          <?php foreach($multi_tab_fields as $key => $single_tab_fields):
            // Sub title in tab if exist.?>
            <?php if ($key === 'sub_title'): ?>
              <div class = "tab-sub-title">
                <?php print $single_tab_fields; ?>
              </div>
            <?php else: ?>
              <div class="fields-multi">
                <?php foreach ($single_tab_fields as $key_field => $tab_field): ?>
                  <?php // Sub group in tab if exist.
                  if ($key_field === 'sub_title'): ?>
                    <div class="tab-sub-title">
                      <?php print $tab_field; ?>
                    </div>
                  <?php else: ?>
                    <?php print render($tab_field); ?>
                  <?php endif; ?>
                <?php endforeach; ?>
              </div>
            <?php endif; ?>
          <?php endforeach; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </section>
</section>






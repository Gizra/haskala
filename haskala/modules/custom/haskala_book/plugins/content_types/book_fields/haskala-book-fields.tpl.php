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

      <section class="top-details">
        <?php if (!empty($title)): ?>
          <h1 class="title page-header"><?php print $title; ?></h1>
        <?php endif; ?>

        <div class="top-fields">
          <div class="field">
            <div class="field-label type-label">Type of book:</div>
            <div class="content"></div>
          </div>
          <?php foreach($top_details_group as $field):
            print render($field);
          endforeach; ?>
        </div>
      </section>
      <section class="bottom-details">
        <nav class="details-navigation">
          <ul>
            <?php foreach($tabs as $group_name => $group): ?>
                <li><a href="#<?php print $group_name; ?>"><?php print $group_name; ?></a></li>
            <?php endforeach; ?>
          </ul>
        </nav>
        <section class="groups">
          <?php foreach($tabs as $tab_name => $tab_fields): ?>
              <div class="fields-group">
                <div class="fields-group-name" id="<?php print $tab_name; ?>"><?php print $tab_name; ?></div>
                <div class="fields">
                  <?php foreach($tab_fields as $tab_field):
                    print render($tab_field);
                  endforeach; ?>
                </div>
              </div>
          <?php endforeach; ?>
        </section>
      </section>






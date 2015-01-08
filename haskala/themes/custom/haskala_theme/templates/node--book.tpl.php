<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<section>
  <h3 class="hr-title">BOOK</h3>
  <div class="main-content">
    <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
      <section class="top-details">
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
        <h1 class="title page-header"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php if (!$page): ?>
          <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
        <?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php if ($display_submitted): ?>
          <div class="submitted">
            <?php print $submitted; ?>
          </div>
        <?php endif; ?>

        <div class="content"<?php print $content_attributes; ?>>
          <?php
          // We hide the comments and links now so that we can render them later.
          hide($content['comments']);
          hide($content['links']);
          //print render($content);
          ?>
          <div class="top-fields">
            <div class="field">
              <div class="field-label type-label">Type of book:</div>
              <div class="content"></div>
            </div>
            <div class="field">
              <div class="field-label">Full title of book:</div>
              <div class="content">Abhandlung von der Freiheit des Menschen</div>
            </div>
            <div class="field">
              <div class="field-label">Text is presented as original?</div>
              <div class="content">Yes</div>
            </div>
            <div class="field">
              <div class="field-label">Are there sources mentioned in the book itself?</div>
              <div class="content">Yes</div>
            </div>
            <div class="field">
              <div class="field-label">List of sources Leibniz:</div>
              <div class="content">Theodicee.</div>
            </div>
            <div class="field">
              <div class="field-label">References:</div>
              <div class="content">11</div>
            </div>
          </div>
        </div>
      </section>
      <section class="bottom-details">
        <nav class="details-navigation">
          <ul>
            <li class="first"><a href="#">Translation</a></li>
            <li><a href="#">New edition</a></li>
            <li><a href="#">Volumes</a></li>
            <li><a href="#">Publisher/Printing press</a></li>
            <li><a href="#">Editions</a></li>
            <li class="last"><a href="#">Book Structure</a></li>
          </ul>
        </nav>
        <div>
          <div class="fields-group">
            <div class="fields-group-name">Translation</div>
            <div class="fields">
              <div class="field">
                <div class="field-label">Name of the publisher -</div>
                <div class="content">Michaelis</div>
              </div>
              <div class="field">
                <div class="field-label">Year of publication as it appears in the book -</div>
                <div class="content">1797</div>
              </div>
              <div class="field">
                <div class="field-label">Place of publication as it appears in the book -</div>
                <div class="content">Neustrelitz</div>
              </div>
              <div class="field">
                <div class="field-label">Format of date -</div>
                <div class="content">modern</div>
              </div>
            </div>
          </div>
          <div class="fields-group">
            <div class="fields-group-name">New edition</div>
            <div class="fields">
              <div class="field">
                <div class="field-label">Name of the publisher -</div>
                <div class="content">Michaelis</div>
              </div>
              <div class="field">
                <div class="field-label">Year of publication as it appears in the book -</div>
                <div class="content">1797</div>
              </div>
              <div class="field">
                <div class="field-label">Place of publication as it appears in the book -</div>
                <div class="content">Neustrelitz</div>
              </div>
            </div>
          </div>
          <div class="fields-group">
            <div class="fields-group-name fields-group-name-last">Publisher/
              printing press
            </div>
            <div class="fields">
              <div class="field">
                <div class="field-label">Are there personal addresses?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Are there rabbinical approbations?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Are there recommendations?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Are there dedications?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Are there thanks?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Is there an appeal to sell subscriptions?</div>
                <div class="content">No</div>
              </div>
              <div class="field">
                <div class="field-label">Is there a list of subscribers?</div>
                <div class="content">No</div>
              </div>
            </div>
          </div>
        </div>
      </section>

      <?php print render($content['links']); ?>

      <?php print render($content['comments']); ?>

    </div>
  </div>
</section>



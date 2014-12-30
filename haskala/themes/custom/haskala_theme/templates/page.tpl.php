<div class="wrapper">
  <header>
    <nav class="top-navigation nav-bar">
      <?php print drupal_render(menu_tree('menu-top-menu'));  ?>
      <!--<ul>
        <li class="search"><a href="#"></a></li>
      </ul>-->
    </nav>
    <h1 class="site-name"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><span>Library of the</span> Haskala</a></h1>
    <hr>

  </header>

  <section class="main-content">
    <p> A few words about this site, who are we and what can be found here,</p>
    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus tincidunt vehicula arcu, congue volutpat massa scelerisque ut. Nunc luctus nec libero ut luctus. Nunc dictum sagittis dui vitae blandit. Nulla ut erat vitae arcu faucibus egestas feugiat a eros. Cras nec nibh vitae tellus dictum suscipit a non dui. Phasellus at mattis urna. Integer odio arcu, commodo et condimentum vitae, volutpat ut mi.  </p>
  </section>

  <section class="search">
    <form>
      <input class="search-text" placeholder="SEARCH">
      <input type="submit" class="submit" value="">
    </form>
  </section>

  <section class="tags-cloud-wrapper">
    <h3>TAG CLOUD BY TOPICS</h3>
    <div class="tags-cloud">
      <nav class="nav-bar">
        <ul>
          <li><a href="tags/ipsum">ipsum</a></li>
          <li><a href="tags/ipsum">dolor</a></li>
          <li><a href="tags/ipsum">sic</a></li>
          <li><a href="tags/ipsum">amet</a></li>
          <li><a href="tags/ipsum">consectetur</a></li>
          <li><a href="tags/ipsum">adipiscing</a></li>
          <li><a href="tags/ipsum">elit</a></li>
          <li><a href="tags/ipsum">Phsellus</a></li>
          <li><a href="tags/ipsum">tincidunt</a></li>
          <li><a href="tags/ipsum">idunt</a></li>
          <li><a href="tags/ipsum">congue</a></li>
          <li><a href="tags/ipsum">massa scelerisque utsit</a></li>
          <li><a href="tags/ipsum">dictum sagittis</a></li>
          <li><a href="tags/ipsum">sit</a></li>
          <li><a href="tags/ipsum">dipsic</a></li>
          <li><a href="tags/ipsum">egestas</a></li>
          <li><a href="tags/ipsum">elit</a></li>
          <li><a href="tags/ipsum">suspic a non</a></li>
          <li><a href="tags/ipsum">dictum</a></li>
          <li><a href="tags/ipsum">arcu</a></li>
          <li><a href="tags/ipsum">Nulla ut erat</a></li>
          <li><a href="tags/ipsum">amet</a></li>
          <li><a href="tags/ipsum">arcu</a></li>
          <li><a href="tags/ipsum">dolor</a></li>
          <li><a href="tags/ipsum">Cras nec dsghfjgnibh</a></li>
          <li><a href="tags/ipsum">vitae tellus</a></li>
          <li><a href="tags/ipsum">dictum sagittis</a></li>
          <li><a href="tags/ipsum">ecteture</a></li>
          <li><a href="tags/ipsum">dui vitae</a></li>
        </ul>
      </nav>
    </div>
  </section>


  <footer>
    <nav class="icons-nav nav-bar">
      <?php print drupal_render(menu_tree('menu-icons-menu'));  ?>
    </nav>
    <div class="login-area">
      <?php print drupal_render(menu_tree('user-menu'));  ?>
    </div>
  </footer>

</div>






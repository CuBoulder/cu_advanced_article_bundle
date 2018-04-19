<?php
  $filter_class = !empty($content['exposed_filter']) ? 'has-exposed-filter' : '';
?>
<div id="article-toggle-<?php print $bean->bid; ?>" class="article-grid-list">
  <div class="article-grid-list-filter clearfix <?php print $filter_class; ?>">
    <div class="article-toggle-navigation clearfix" aria-hidden="true">
      <ul>
        <li>
          <a href="#article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-grid-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-th" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
        </li>
        <li>
          <a href="#article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-list-link" data-article-toggle-id="<?php print $bean->bid; ?>"><i class="fa fa-align-justify" aria-hidden="true"></i> <span class="element-invisible">Grid</span></a>
        </li>
      </ul>
    </div>
    <?php
      print render($content['exposed_filter']);
    ?>
  </div>


  <div id="article-toggle-grid-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-grid">
    <div class="row clearfix">
      <?php
        print render($content['article_grid']);
      ?>
    </div>

  </div>
  <div id="article-toggle-list-<?php print $bean->bid; ?>" class="article-toggle-section article-toggle-list">
    <?php
      print render($content['article_list']);
    ?>
  </div>
  <?php
    print render($content['error']);
  ?>
  <div class="article-view-toggle-link">
    <?php
      print render($content['more_link']);
    ?>
  </div>
</div>

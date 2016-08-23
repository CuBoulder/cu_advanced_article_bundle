<?php

?>
<div class="article-view-mode-teaser node-view-mode-teaser clearfix">
  <?php if(!empty($fields['field_article_thumbnail'])): ?>
    <?php print $fields['field_article_thumbnail']->content; ?>
  <?php endif; ?>
  <div class="article-view-mode-teaser-content node-view-mode-teaser-content">
    <h2 class="node-title"><?php print $fields['title']->content; ?></h2>
      <p class="date">
        <?php
          if (function_exists('cu_date_formats_medium')) {
            print cu_date_formats_medium($fields['created']->content);
          }
        ?>
      </p>
    <div class="article-summary"><?php print $fields['body_1']->content; ?></div>
  </div>
</div>

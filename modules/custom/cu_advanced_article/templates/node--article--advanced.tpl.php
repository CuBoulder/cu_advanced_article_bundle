<?php
  hide($content['field_tags']);
  hide($content['article_tags']);
  hide($content['field_article_categories']);
  hide($content['article_meta']);
  if (!empty($content['field_adv_article_image'])) {
    hide($content['field_adv_article_image']);
  }
  if (!empty($content['field_adv_article_video'])) {
    hide($content['field_adv_article_video']);
  }
  if (!empty($content['field_adv_article_audio'])) {
    hide($content['field_adv_article_audio']);
  }
  if (!empty($content['field_adv_article_quote'])) {
    hide($content['field_adv_article_quote']);
  }
  if (!empty($content['field_adv_article_gallery'])) {
    hide($content['field_adv_article_gallery']);
  }
  if (!empty($content['field_adv_article_highlights'])) {
    hide($content['field_adv_article_highlights']);
  }

?>

<?php $tag = isset($heading_tag['#tag']) ? $heading_tag['#tag'] : 'h2'; ?>
<?php if (!empty($author_meta)): ?>
  <div class="author-meta">
    <?php print join(' <span class="author-meta-separator">&bull;</span> ', $author_meta); ?>
  </div>
<?php endif; ?>

<div class="advanced-article-content-wrapper clearfix row ">
  <?php if (!empty($content['priority'])): ?>
    <div class="advanced-article-priority-content col-lg-12 col-md-12 col-sm-12 col-xs-12 ">
      <?php print render($content['priority']); ?>
    </div>
  <?php endif; ?>
  <div class="advanced-article-content col-lg-12 col-md-12 col-sm-12 col-xs-12">

    <?php
      if (!empty($content['field_adv_article_highlights'])) {
        print render($content['field_adv_article_highlights']);
      }
    ?>


    <?php if (!empty($content['body'])): ?>
      <?php $bodyimg = strpos($content['body'][0]['#markup'], '<img'); ?>
      <?php if(!empty($content['field_image']) && ($bodyimg === FALSE)): ?>

        <div class="article-image">
          <?php print render($content['field_image']); ?>
        </div>
      <?php else: ?>
        <?php hide($content['field_image']); ?>
      <?php endif; ?>
    <?php endif; ?>
    <?php print render($content); ?>
    <?php print render($content_bottom); ?>

  </div>
</div>
<?php print render($content['article_meta']); ?>

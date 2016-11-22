<?php

/**
* Implements hook_drush_cache_clear().
*/
function cu_article_syndicate_drush_cache_clear(&$types) {
  $types['cu_article_syndicate'] = '_cu_article_syndicate_cache_clear';
}

/**
* Utility function that clears all the entries in our cache bin.
*/
function _cu_article_syndicate_cache_clear() {
  cache_clear_all('*', 'cu_article_syndicate', true);
}

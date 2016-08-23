<?php
/**
 * @file
 * cu_article_view_toggle.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_article_view_toggle_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'article_grid_list';
  $bean_type->label = 'Article Grid/List';
  $bean_type->options = '';
  $bean_type->description = 'A block of articles that allows the user to switch between grid and list views.';
  $export['article_grid_list'] = $bean_type;

  return $export;
}

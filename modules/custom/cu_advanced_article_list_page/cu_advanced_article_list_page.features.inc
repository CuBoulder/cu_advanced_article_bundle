<?php
/**
 * @file
 * cu_advanced_article_list_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_advanced_article_list_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cu_advanced_article_list_page_node_info() {
  $items = array(
    'advanced_article_list_page' => array(
      'name' => t('Advanced Article List Page'),
      'base' => 'node_content',
      'description' => t('Lists articles with exposed filters for Category, Tag, Media, and Audience.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

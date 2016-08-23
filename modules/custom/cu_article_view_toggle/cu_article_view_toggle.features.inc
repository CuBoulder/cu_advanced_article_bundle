<?php
/**
 * @file
 * cu_article_view_toggle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_article_view_toggle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

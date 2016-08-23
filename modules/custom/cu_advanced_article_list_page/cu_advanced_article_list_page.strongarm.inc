<?php
/**
 * @file
 * cu_advanced_article_list_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cu_advanced_article_list_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_advanced_article_list_page';
  $strongarm->value = 'edit-display';
  $export['additional_settings__active_tab_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'attachment_links_create_alias_advanced_article_list_page';
  $strongarm->value = 0;
  $export['attachment_links_create_alias_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'attachment_links_selection_advanced_article_list_page';
  $strongarm->value = '0';
  $export['attachment_links_selection_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_advanced_article_list_page';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_advanced_article_list_page';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_advanced_article_list_page';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__advanced_article_list_page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'embed' => array(
        'custom_settings' => FALSE,
      ),
      'feature' => array(
        'custom_settings' => FALSE,
      ),
      'promo' => array(
        'custom_settings' => FALSE,
      ),
      'sidebar' => array(
        'custom_settings' => FALSE,
      ),
      'table' => array(
        'custom_settings' => FALSE,
      ),
      'title' => array(
        'custom_settings' => FALSE,
      ),
      'grid' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_advanced_article_list_page';
  $strongarm->value = array(
    0 => 'menu-footer-menu',
    1 => 'main-menu',
    2 => 'menu-secondary-menu',
  );
  $export['menu_options_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_advanced_article_list_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_advanced_article_list_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_advanced_article_list_page';
  $strongarm->value = '1';
  $export['node_preview_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_advanced_article_list_page';
  $strongarm->value = 0;
  $export['node_submitted_advanced_article_list_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_advanced_article_list_page_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_advanced_article_list_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_media_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_media_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_syndication_audience_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_syndication_audience_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_advanced_article_list_page';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_advanced_article_list_page'] = $strongarm;

  return $export;
}

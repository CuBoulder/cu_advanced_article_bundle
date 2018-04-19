<?php
/**
 * @file
 * cu_article_view_toggle.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_article_view_toggle_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_grid_list_expose|bean|article_grid_list|form';
  $field_group->group_name = 'group_article_grid_list_expose';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'article_grid_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expose Filters',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_page_cat_expose',
      1 => 'field_article_page_tag_expose',
      2 => 'field_article_page_media_expose',
      3 => 'field_article_page_aud_expose',
      4 => 'field_article_page_childterms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-grid-list-expose field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_article_grid_list_expose|bean|article_grid_list|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_grid_list_filters|bean|article_grid_list|form';
  $field_group->group_name = 'group_article_grid_list_filters';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'article_grid_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '2',
    'children' => array(
      0 => 'field_article_page_filter',
      1 => 'field_article_page_category',
      2 => 'field_article_page_media',
      3 => 'field_article_page_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-grid-list-filters field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_article_grid_list_filters|bean|article_grid_list|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Expose Filters');
  t('Filters');

  return $field_groups;
}

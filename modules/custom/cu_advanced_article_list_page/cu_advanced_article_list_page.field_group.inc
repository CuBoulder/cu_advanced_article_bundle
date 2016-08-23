<?php
/**
 * @file
 * cu_advanced_article_list_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_advanced_article_list_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adv_article_list_expose|node|advanced_article_list_page|form';
  $field_group->group_name = 'group_adv_article_list_expose';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_article_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expose Filters',
    'weight' => '5',
    'children' => array(
      0 => 'field_article_page_cat_expose',
      1 => 'field_article_page_tag_expose',
      2 => 'field_article_page_media_expose',
      3 => 'field_article_page_aud_expose',
      4 => 'field_article_page_childterms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Expose Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-adv-article-list-expose field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_adv_article_list_expose|node|advanced_article_list_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adv_article_list_filters|node|advanced_article_list_page|form';
  $field_group->group_name = 'group_adv_article_list_filters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'advanced_article_list_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_page_category',
      1 => 'field_article_page_filter',
      2 => 'field_article_page_media',
      3 => 'field_article_page_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filters',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-adv-article-list-filters field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_adv_article_list_filters|node|advanced_article_list_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Expose Filters');
  t('Filters');

  return $field_groups;
}

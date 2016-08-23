<?php
/**
 * @file
 * cu_advanced_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cu_advanced_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|article|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '6',
    'children' => array(
      0 => 'field_adv_article_video',
      1 => 'field_adv_article_quote',
      2 => 'field_adv_article_audio',
      3 => 'field_adv_article_gallery',
      4 => 'field_adv_article_priority',
      5 => 'field_adv_article_image',
      6 => 'field_adv_article_highlights',
      7 => 'field_adv_article_downloads',
      8 => 'field_adv_article_media',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'advanced-article-fields',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_advanced|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legacy|node|article|form';
  $field_group->group_name = 'group_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '19',
    'children' => array(
      0 => 'field_legacy_topic',
      1 => 'field_legacy_audience',
      2 => 'field_legacy_college_school',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Legacy',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-legacy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_legacy|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_syndication|node|article|form';
  $field_group->group_name = 'group_syndication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Syndication',
    'weight' => '18',
    'children' => array(
      0 => 'field_adv_article_synd_unit',
      1 => 'field_adv_article_synd_aud',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Syndication',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-syndication field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_syndication|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced');
  t('Legacy');
  t('Syndication');

  return $field_groups;
}

<?php
/**
 * @file
 * cu_article_view_toggle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_article_view_toggle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-article_grid_list-field_article_link'.
  $field_instances['bean-article_grid_list-field_article_link'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_link',
    'label' => 'More Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 1,
        'profile' => 'express_linkit_field_profile',
      ),
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_aud_expose'.
  $field_instances['bean-article_grid_list-field_article_page_aud_expose'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_article_page_aud_expose',
    'label' => 'Show Audience Filter',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_audience'.
  $field_instances['bean-article_grid_list-field_article_page_audience'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_article_page_audience',
    'label' => 'Filter by Audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_cat_expose'.
  $field_instances['bean-article_grid_list-field_article_page_cat_expose'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_page_cat_expose',
    'label' => 'Show Category Filter',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_category'.
  $field_instances['bean-article_grid_list-field_article_page_category'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_page_category',
    'label' => 'Filter by Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_childterms'.
  $field_instances['bean-article_grid_list-field_article_page_childterms'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => array(
      0 => array(
        'value' => 'all',
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_article_page_childterms',
    'label' => 'Child Terms',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_filter'.
  $field_instances['bean-article_grid_list-field_article_page_filter'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_page_filter',
    'label' => 'Filter by Tag',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-article_grid_list-field_article_page_media'.
  $field_instances['bean-article_grid_list-field_article_page_media'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_article_page_media',
    'label' => 'Filter by Media',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_media_expose'.
  $field_instances['bean-article_grid_list-field_article_page_media_expose'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_article_page_media_expose',
    'label' => 'Show Media Filter',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'bean-article_grid_list-field_article_page_tag_expose'.
  $field_instances['bean-article_grid_list-field_article_page_tag_expose'] = array(
    'bundle' => 'article_grid_list',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_page_tag_expose',
    'label' => 'Show Tags Filter',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Child Terms');
  t('Filter by Audience');
  t('Filter by Category');
  t('Filter by Media');
  t('Filter by Tag');
  t('More Link');
  t('Show Audience Filter');
  t('Show Category Filter');
  t('Show Media Filter');
  t('Show Tags Filter');

  return $field_instances;
}

<?php
/**
 * @file
 * cu_advanced_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cu_advanced_article_taxonomy_default_vocabularies() {
  return array(
    'legacy_audience' => array(
      'name' => 'Legacy Audience',
      'machine_name' => 'legacy_audience',
      'description' => 'Legacy News Center Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'legacy_college_school' => array(
      'name' => 'Legacy College/School',
      'machine_name' => 'legacy_college_school',
      'description' => 'Legacy News Center Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'legacy_topic' => array(
      'name' => 'Legacy Topic',
      'machine_name' => 'legacy_topic',
      'description' => 'Legacy News Center Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'media' => array(
      'name' => 'Media',
      'machine_name' => 'media',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'syndication_audience' => array(
      'name' => 'Syndication Audience',
      'machine_name' => 'syndication_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'syndication_unit' => array(
      'name' => 'Syndication Unit',
      'machine_name' => 'syndication_unit',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

<?php
/**
 * @file
 * cu_advanced_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cu_advanced_article_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_legacy_audience_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_legacy_audience_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_legacy_college_school_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_legacy_college_school_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_legacy_topic_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_legacy_topic_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_syndication_unit_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_syndication_unit_pattern'] = $strongarm;

  return $export;
}

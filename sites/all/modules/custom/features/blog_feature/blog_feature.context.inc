<?php
/**
 * @file
 * blog_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blog_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_home';
  $context->description = 'Home context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-flex_slider-block' => array(
          'module' => 'views',
          'delta' => 'flex_slider-block',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'tier_1',
          'weight' => '-10',
        ),
        'views-blog-block' => array(
          'module' => 'views',
          'delta' => 'blog-block',
          'region' => 'tier_2',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'tier_3',
          'weight' => '-10',
        ),
        'views-session_tracks-block' => array(
          'module' => 'views',
          'delta' => 'session_tracks-block',
          'region' => 'tier_4',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'tier_5',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home context');
  $export['blog_home'] = $context;

  return $export;
}

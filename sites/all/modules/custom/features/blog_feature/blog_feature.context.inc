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
  $context->description = 'Home context for blog';
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
        'views-blog-block' => array(
          'module' => 'views',
          'delta' => 'blog-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home context for blog');
  $export['blog_home'] = $context;

  return $export;
}

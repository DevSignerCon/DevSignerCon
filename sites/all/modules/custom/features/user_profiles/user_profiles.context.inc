<?php
/**
 * @file
 * user_profiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function user_profiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user';
  $context->description = 'User Profile Blocks';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
        'user' => 'user',
      ),
    ),
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-your_session-block' => array(
          'module' => 'views',
          'delta' => 'your_session-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-your_session_evals-block' => array(
          'module' => 'views',
          'delta' => 'your_session_evals-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Profile Blocks');
  $export['user'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_view';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'users/*' => 'users/*',
      ),
    ),
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'other',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-your_session-block_2' => array(
          'module' => 'views',
          'delta' => 'your_session-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['user_view'] = $context;

  return $export;
}

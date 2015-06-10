<?php
/**
 * @file
 * session.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function session_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_entityform_session_pattern';
  $strongarm->value = 'conference/sessions/[entityform:field_session_title]';
  $export['pathauto_entityform_session_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_entity_available_entity_types';
  $strongarm->value = array(
    'entityform' => 'entityform',
    'file' => 0,
  );
  $export['pathauto_entity_available_entity_types'] = $strongarm;

  return $export;
}

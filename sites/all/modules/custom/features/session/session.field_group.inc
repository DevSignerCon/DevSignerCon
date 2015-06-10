<?php
/**
 * @file
 * session.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function session_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session|entityform|session|form';
  $field_group->group_name = 'group_session';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Session',
    'weight' => '2',
    'children' => array(
      0 => 'field_session_title',
      1 => 'field_session_description',
      2 => 'field_exerience_level',
      3 => 'field_takeaways',
      4 => 'field_categories',
      5 => 'field_session_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Session',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-session field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_session|entityform|session|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_speaker|entityform|session|form';
  $field_group->group_name = 'group_speaker';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'session';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Speakers',
    'weight' => '9',
    'children' => array(
      0 => 'field_speaker_bio',
      1 => 'field_speaking_experience',
      2 => 'field_contact_name',
      3 => 'field_email_address',
      4 => 'field_speaker',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Speakers',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_speaker|entityform|session|form'] = $field_group;

  return $export;
}

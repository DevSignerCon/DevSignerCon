<?php
/**
 * @file
 * user_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function user_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|full';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_photo',
      2 => 'field_speaker_bio',
      3 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Public Profile',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-profile field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile|user|user|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_profile|user|user|form';
  $field_group->group_name = 'group_public_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public Profile',
    'weight' => '0',
    'children' => array(
      0 => 'field_contact_name',
      1 => 'field_photo',
      2 => 'field_speaker_bio',
      3 => 'field_website',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-public-profile field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_public_profile|user|user|form'] = $field_group;

  return $export;
}

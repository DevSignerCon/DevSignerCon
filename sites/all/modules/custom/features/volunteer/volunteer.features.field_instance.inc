<?php
/**
 * @file
 * volunteer.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function volunteer_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-volunteer-field_additional_notes'
  $field_instances['entityform-volunteer-field_additional_notes'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Special needs? Special abilities? Special requests?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_additional_notes',
    'label' => 'Anything we should know?',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_contact_name'
  $field_instances['entityform-volunteer-field_contact_name'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_contact_name',
    'label' => 'Full Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_days_available'
  $field_instances['entityform-volunteer-field_days_available'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mark \'Other\' if you\'d like to be notified of other days to volunteer, for example, helping to put up posters or drive to pick up swag from print shops',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_days_available',
    'label' => 'Which days are you available to help out?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_email'
  $field_instances['entityform-volunteer-field_email'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Contact E-mail Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'emailwidget',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_have_car'
  $field_instances['entityform-volunteer-field_have_car'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_have_car',
    'label' => 'Do you have access to a car?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_preferred_nickname'
  $field_instances['entityform-volunteer-field_preferred_nickname'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For your name tag, Starlord.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_preferred_nickname',
    'label' => 'Preferred Nickname',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-volunteer-field_shirt_size'
  $field_instances['entityform-volunteer-field_shirt_size'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you need a size that isn\'t listed here, let us know.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_shirt_size',
    'label' => 'What size of shirt would you like?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anything we should know?');
  t('Contact E-mail Address');
  t('Do you have access to a car?');
  t('For your name tag, Starlord.');
  t('Full Name');
  t('If you need a size that isn\'t listed here, let us know.
');
  t('Mark \'Other\' if you\'d like to be notified of other days to volunteer, for example, helping to put up posters or drive to pick up swag from print shops');
  t('Preferred Nickname');
  t('Special needs? Special abilities? Special requests?');
  t('What size of shirt would you like?');
  t('Which days are you available to help out?');

  return $field_instances;
}

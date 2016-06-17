<?php
/**
 * @file
 * contact_us.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function contact_us_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-contact_us-field_contact_name'
  $field_instances['entityform-contact_us-field_contact_name'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_email_address'
  $field_instances['entityform-contact_us-field_email_address'] = array(
    'bundle' => 'contact_us',
    'default_value' => NULL,
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
    'entity_type' => 'entityform',
    'field_name' => 'field_email_address',
    'label' => 'Contact Address',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'emailwidget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_message'
  $field_instances['entityform-contact_us-field_message'] = array(
    'bundle' => 'contact_us',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_message',
    'label' => 'Message',
    'required' => 1,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-contact_us-field_subject'
  $field_instances['entityform-contact_us-field_subject'] = array(
    'bundle' => 'contact_us',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_subject',
    'label' => 'Subject',
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
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Address');
  t('Full Name');
  t('Message');
  t('Subject');

  return $field_instances;
}

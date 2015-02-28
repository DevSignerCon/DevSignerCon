<?php
/**
 * @file
 * session.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function session_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-session-field_categories'
  $field_instances['entityform-session-field_categories'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This will be added and used later by the session lead to organize the schedule.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_categories',
    'label' => 'Session Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-session-field_exerience_level'
  $field_instances['entityform-session-field_exerience_level'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_exerience_level',
    'label' => 'Exerience Level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-session-field_session_description'
  $field_instances['entityform-session-field_session_description'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_session_description',
    'label' => 'Session Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-session-field_session_format'
  $field_instances['entityform-session-field_session_format'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Presentations and discussions will each be 45-60 minutes, while hands-on workshops will be 2 hours (Friday night) or 3 hours (Saturday and Sunday).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_session_format',
    'label' => 'Session Format',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-session-field_session_title'
  $field_instances['entityform-session-field_session_title'] = array(
    'bundle' => 'session',
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
    'field_name' => 'field_session_title',
    'label' => 'Session Title',
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

  // Exported field_instance: 'entityform-session-field_speaker_bio'
  $field_instances['entityform-session-field_speaker_bio'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_speaker_bio',
    'label' => 'Speaker Bio',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-session-field_speaking_experience'
  $field_instances['entityform-session-field_speaking_experience'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If speakers have presented on this or other topics before, please let us know where, and if a recording is available. This will not be made public. If there is more than one speaker, use "Add another item" to list speaking experience for each. Note that speakers do need NOT have extensive presentation experience.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_speaking_experience',
    'label' => 'Speaking Experience',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-session-field_takeaways'
  $field_instances['entityform-session-field_takeaways'] = array(
    'bundle' => 'session',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_takeaways',
    'label' => 'What will attendees walk away with? (session takeaways)',
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exerience Level');
  t('If speakers have presented on this or other topics before, please let us know where, and if a recording is available. This will not be made public. If there is more than one speaker, use "Add another item" to list speaking experience for each. Note that speakers do need NOT have extensive presentation experience.
');
  t('Presentations and discussions will each be 45-60 minutes, while hands-on workshops will be 2 hours (Friday night) or 3 hours (Saturday and Sunday).');
  t('Session Category');
  t('Session Description');
  t('Session Format');
  t('Session Title');
  t('Speaker Bio');
  t('Speaking Experience');
  t('This will be added and used later by the session lead to organize the schedule.');
  t('What will attendees walk away with? (session takeaways)');

  return $field_instances;
}

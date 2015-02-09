<?php
/**
 * @file
 * sponsor.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sponsor_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-sponsor-field_additional_notes'
  $field_instances['entityform-sponsor-field_additional_notes'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this space to tell us any additional information before we contact you. No need to put payment information in this section. We will contact you for secure payment after you have submitted the form.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_additional_notes',
    'label' => 'Additional Notes',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_address'
  $field_instances['entityform-sponsor-field_address'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_bronze'
  $field_instances['entityform-sponsor-field_bronze'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Two complimentary tickets. Sponsor logo will appear on inner page of the schedule/programs and on sponsor page of Devsigner event website.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bronze',
    'label' => 'Bronze',
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

  // Exported field_instance: 'entityform-sponsor-field_community_sponsor'
  $field_instances['entityform-sponsor-field_community_sponsor'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name or logo will appear on sponsor page of website. Names will appear in alphabetical order.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_community_sponsor',
    'label' => 'Community Sponsor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_community_sponsor_name'
  $field_instances['entityform-sponsor-field_community_sponsor_name'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Community Sponsor Name as it should appear on website (Community Sponsor Only)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_community_sponsor_name',
    'label' => 'Community Sponsor Name',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_company'
  $field_instances['entityform-sponsor-field_company'] = array(
    'bundle' => 'sponsor',
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
    'field_name' => 'field_company',
    'label' => 'Organization / Company',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_contact_name'
  $field_instances['entityform-sponsor-field_contact_name'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who is the point of contact in your organization?',
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
    'field_name' => 'field_contact_name',
    'label' => 'Contact Name',
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_email'
  $field_instances['entityform-sponsor-field_email'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
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
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_gold'
  $field_instances['entityform-sponsor-field_gold'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Four complimentary tickets. Sponsor logo will appear on most printed items, any session intro slides, outer page of schedules/programs, all pages of the Devsigner event website, and all event swag. Sponsor will be mentioned in introduction and any closing speeches. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gold',
    'label' => 'Gold',
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

  // Exported field_instance: 'entityform-sponsor-field_phone'
  $field_instances['entityform-sponsor-field_phone'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Contact Telephone Number',
    'required' => 1,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_platinum'
  $field_instances['entityform-sponsor-field_platinum'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Six complimentary tickets. Sponsor logo will appear on most printed items, any session intro slides, outer page of schedules/programs, all pages of the Devsigner event website, and all event swag. Sponsor will be mentioned in introduction and any closing speeches. EXCLUSIVE TO PLATINUM: Completely sponsor one session.',
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
    'field_name' => 'field_platinum',
    'label' => 'Platinum',
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

  // Exported field_instance: 'entityform-sponsor-field_silver'
  $field_instances['entityform-sponsor-field_silver'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Three complimentary tickets. Sponsor logo will appear on some larger printed items, inner page of the schedule/program, and sponsor page of Devsigner event website.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_silver',
    'label' => 'Silver',
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
  t('Additional Notes');
  t('Address');
  t('Bronze');
  t('Community Sponsor');
  t('Community Sponsor Name');
  t('Community Sponsor Name as it should appear on website (Community Sponsor Only)');
  t('Contact E-mail Address');
  t('Contact Name');
  t('Contact Telephone Number');
  t('Four complimentary tickets. Sponsor logo will appear on most printed items, any session intro slides, outer page of schedules/programs, all pages of the Devsigner event website, and all event swag. Sponsor will be mentioned in introduction and any closing speeches. ');
  t('Gold');
  t('Name or logo will appear on sponsor page of website. Names will appear in alphabetical order.');
  t('Organization / Company');
  t('Platinum');
  t('Silver');
  t('Six complimentary tickets. Sponsor logo will appear on most printed items, any session intro slides, outer page of schedules/programs, all pages of the Devsigner event website, and all event swag. Sponsor will be mentioned in introduction and any closing speeches. EXCLUSIVE TO PLATINUM: Completely sponsor one session.');
  t('Three complimentary tickets. Sponsor logo will appear on some larger printed items, inner page of the schedule/program, and sponsor page of Devsigner event website.');
  t('Two complimentary tickets. Sponsor logo will appear on inner page of the schedule/programs and on sponsor page of Devsigner event website.');
  t('Use this space to tell us any additional information before we contact you. No need to put payment information in this section. We will contact you for secure payment after you have submitted the form.');
  t('Who is the point of contact in your organization?');

  return $field_instances;
}

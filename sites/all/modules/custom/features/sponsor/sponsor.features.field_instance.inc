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

  // Exported field_instance: 'entityform-sponsor-field_a_la_carte_sponsorships'
  $field_instances['entityform-sponsor-field_a_la_carte_sponsorships'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The a la carte options will become available closer to the event as we determine our logistical needs. They will start at $500 and will vary in price depending on expenses and brand exposure availability.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a_la_carte_sponsorships',
    'label' => 'A la Carte Sponsorships (prices not yet available)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_additional_notes'
  $field_instances['entityform-sponsor-field_additional_notes'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Anything else we should know? No need to put payment information in this section. We will contact you for secure payment after this form has been submitted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 14,
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
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_bronze'
  $field_instances['entityform-sponsor-field_bronze'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Benefits: Bronze sponsor\'s name/logo appears on some of the larger printed items, inner page of the schedule and program, and event sponsor page. Bronze sponsorship also includes one complimentary tickets, one or more social media shoutouts, and a link to sponsor\'s website on the event website sponsor page.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_community_sponsor'
  $field_instances['entityform-sponsor-field_community_sponsor'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Benefits: Community sponsor\'s name or logo will appear on sponsor page of event website. We will also link to the community sponsor\'s website, if applicable.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 10,
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
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 11,
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
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_contact_name'
  $field_instances['entityform-sponsor-field_contact_name'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Who will be our primary point of contact for your company?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_email_address'
  $field_instances['entityform-sponsor-field_email_address'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_gold'
  $field_instances['entityform-sponsor-field_gold'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Benefits: Gold sponsor\'s name/logo appears on most printed items, the event website sponsor page, any session intro slides, outer page of schedules, and event swag. Gold sponsorship also includes three complimentary tickets, one or more social media shoutouts, link to sponsor\'s website on the event website sponsor page, and verbal mentions in the introduction and any closing speeches.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 7,
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
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_platinum'
  $field_instances['entityform-sponsor-field_platinum'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Benefits: Platinum sponsor\'s name/logo appears on most printed items, the event website sponsor page, any session intro slides, all pages of the event website, outer page of schedules, and event swag. Platinum sponsorship also includes five complimentary tickets, one or more social media shoutouts, link to sponsor\'s website on the event website sponsor page, and verbal mentions in the introduction and any closing speeches. Platinum sponsor may also sponsor one session.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_silver'
  $field_instances['entityform-sponsor-field_silver'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Benefits: Silver sponsor\'s name/logo appears on some of the larger printed items, inner page of the schedule and program, and event sponsor page. Silver sponsorship also includes two complimentary tickets, one or more social media shoutouts, and a link to sponsor\'s website on the event website sponsor page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-sponsor-field_we_re_hiring'
  $field_instances['entityform-sponsor-field_we_re_hiring'] = array(
    'bundle' => 'sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add a “We’re Hiring!” emblem next to your logo/name in your sponsorship category.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_we_re_hiring',
    'label' => 'We\'re Hiring',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A la Carte Sponsorships (prices not yet available)');
  t('Add a “We’re Hiring!” emblem next to your logo/name in your sponsorship category.');
  t('Additional Notes');
  t('Address');
  t('Anything else we should know? No need to put payment information in this section. We will contact you for secure payment after this form has been submitted.');
  t('Benefits: Bronze sponsor\'s name/logo appears on some of the larger printed items, inner page of the schedule and program, and event sponsor page. Bronze sponsorship also includes one complimentary tickets, one or more social media shoutouts, and a link to sponsor\'s website on the event website sponsor page.
');
  t('Benefits: Community sponsor\'s name or logo will appear on sponsor page of event website. We will also link to the community sponsor\'s website, if applicable.');
  t('Benefits: Gold sponsor\'s name/logo appears on most printed items, the event website sponsor page, any session intro slides, outer page of schedules, and event swag. Gold sponsorship also includes three complimentary tickets, one or more social media shoutouts, link to sponsor\'s website on the event website sponsor page, and verbal mentions in the introduction and any closing speeches.');
  t('Benefits: Platinum sponsor\'s name/logo appears on most printed items, the event website sponsor page, any session intro slides, all pages of the event website, outer page of schedules, and event swag. Platinum sponsorship also includes five complimentary tickets, one or more social media shoutouts, link to sponsor\'s website on the event website sponsor page, and verbal mentions in the introduction and any closing speeches. Platinum sponsor may also sponsor one session.');
  t('Benefits: Silver sponsor\'s name/logo appears on some of the larger printed items, inner page of the schedule and program, and event sponsor page. Silver sponsorship also includes two complimentary tickets, one or more social media shoutouts, and a link to sponsor\'s website on the event website sponsor page.');
  t('Bronze');
  t('Community Sponsor');
  t('Community Sponsor Name');
  t('Community Sponsor Name as it should appear on website (Community Sponsor Only)');
  t('Contact Address');
  t('Contact Name');
  t('Contact Telephone Number');
  t('Gold');
  t('Organization / Company');
  t('Platinum');
  t('Silver');
  t('The a la carte options will become available closer to the event as we determine our logistical needs. They will start at $500 and will vary in price depending on expenses and brand exposure availability.');
  t('We\'re Hiring');
  t('Who will be our primary point of contact for your company?');

  return $field_instances;
}

<?php
/**
 * @file
 * session.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function session_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sessions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Sessions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sessions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_experience_level_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_session_format_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_session_title' => 'field_session_title',
    'field_speaker' => 'field_speaker',
    'field_experience_level' => 'field_experience_level',
    'field_session_format' => 'field_session_format',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_speaker' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_experience_level' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_session_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_speaker_target_id']['id'] = 'field_speaker_target_id';
  $handler->display->display_options['relationships']['field_speaker_target_id']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['relationships']['field_speaker_target_id']['field'] = 'field_speaker_target_id';
  $handler->display->display_options['relationships']['field_speaker_target_id']['label'] = 'speaker';
  /* Field: Entityform Submission: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Entityform Submission: Session Title */
  $handler->display->display_options['fields']['field_session_title']['id'] = 'field_session_title';
  $handler->display->display_options['fields']['field_session_title']['table'] = 'field_data_field_session_title';
  $handler->display->display_options['fields']['field_session_title']['field'] = 'field_session_title';
  $handler->display->display_options['fields']['field_session_title']['label'] = 'Session';
  $handler->display->display_options['fields']['field_session_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['path'] = '[url]';
  /* Field: Field: Full Name */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['label'] = 'Speakers';
  /* Field: Entityform Submission: Experience Level */
  $handler->display->display_options['fields']['field_experience_level']['id'] = 'field_experience_level';
  $handler->display->display_options['fields']['field_experience_level']['table'] = 'field_data_field_experience_level';
  $handler->display->display_options['fields']['field_experience_level']['field'] = 'field_experience_level';
  $handler->display->display_options['fields']['field_experience_level']['label'] = 'Experience';
  $handler->display->display_options['fields']['field_experience_level']['field_api_classes'] = TRUE;
  /* Field: Entityform Submission: Session Format */
  $handler->display->display_options['fields']['field_session_format']['id'] = 'field_session_format';
  $handler->display->display_options['fields']['field_session_format']['table'] = 'field_data_field_session_format';
  $handler->display->display_options['fields']['field_session_format']['field'] = 'field_session_format';
  $handler->display->display_options['fields']['field_session_format']['label'] = 'Format';
  $handler->display->display_options['fields']['field_session_format']['field_api_classes'] = TRUE;
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Entityform Submission: Session Status (field_session_status) */
  $handler->display->display_options['filters']['field_session_status_value']['id'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['filters']['field_session_status_value']['field'] = 'field_session_status_value';
  $handler->display->display_options['filters']['field_session_status_value']['value'] = array(
    'accepted' => 'accepted',
  );
  /* Filter criterion: Entityform Submission: Experience Level (field_experience_level) */
  $handler->display->display_options['filters']['field_experience_level_tid']['id'] = 'field_experience_level_tid';
  $handler->display->display_options['filters']['field_experience_level_tid']['table'] = 'field_data_field_experience_level';
  $handler->display->display_options['filters']['field_experience_level_tid']['field'] = 'field_experience_level_tid';
  $handler->display->display_options['filters']['field_experience_level_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_experience_level_tid']['expose']['operator_id'] = 'field_experience_level_tid_op';
  $handler->display->display_options['filters']['field_experience_level_tid']['expose']['label'] = 'Experience Level';
  $handler->display->display_options['filters']['field_experience_level_tid']['expose']['operator'] = 'field_experience_level_tid_op';
  $handler->display->display_options['filters']['field_experience_level_tid']['expose']['identifier'] = 'field_experience_level_tid';
  $handler->display->display_options['filters']['field_experience_level_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_experience_level_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_experience_level_tid']['vocabulary'] = 'experience_level';
  /* Filter criterion: Entityform Submission: Session Format (field_session_format) */
  $handler->display->display_options['filters']['field_session_format_tid']['id'] = 'field_session_format_tid';
  $handler->display->display_options['filters']['field_session_format_tid']['table'] = 'field_data_field_session_format';
  $handler->display->display_options['filters']['field_session_format_tid']['field'] = 'field_session_format_tid';
  $handler->display->display_options['filters']['field_session_format_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_session_format_tid']['expose']['operator_id'] = 'field_session_format_tid_op';
  $handler->display->display_options['filters']['field_session_format_tid']['expose']['label'] = 'Session Format';
  $handler->display->display_options['filters']['field_session_format_tid']['expose']['operator'] = 'field_session_format_tid_op';
  $handler->display->display_options['filters']['field_session_format_tid']['expose']['identifier'] = 'field_session_format_tid';
  $handler->display->display_options['filters']['field_session_format_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_session_format_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_session_format_tid']['vocabulary'] = 'formats';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'conference/sessions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sessions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['sessions'] = array(
    t('Master'),
    t('Sessions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('All'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('speaker'),
    t('Session'),
    t('Speakers'),
    t('Experience'),
    t('Format'),
    t('Experience Level'),
    t('Session Format'),
    t('Page'),
  );
  $export['sessions'] = $view;

  return $export;
}

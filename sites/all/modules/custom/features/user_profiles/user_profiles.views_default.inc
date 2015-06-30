<?php
/**
 * @file
 * user_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'your_session';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Your Session';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Session(s)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_session_title' => 'field_session_title',
    'edit_entityform' => 'edit_entityform',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entityform Submission: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
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
  $handler->display->display_options['fields']['field_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_session_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_session_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_title']['element_wrapper_type'] = 'span';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['element_type'] = 'span';
  $handler->display->display_options['fields']['edit_entityform']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'Edit Session';
  /* Field: Entityform Submission: Session Status */
  $handler->display->display_options['fields']['field_session_status']['id'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['table'] = 'field_data_field_session_status';
  $handler->display->display_options['fields']['field_session_status']['field'] = 'field_session_status';
  $handler->display->display_options['fields']['field_session_status']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_status']['element_label_type'] = 'span';
  /* Contextual filter: Entityform Submission: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'entityform';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );

  /* Display: Account Block */
  $handler = $view->new_display('block', 'Account Block', 'block');

  /* Display: Sidebar Block */
  $handler = $view->new_display('block', 'Sidebar Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_session_title' => 'field_session_title',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Entityform Submission: Session Title */
  $handler->display->display_options['fields']['field_session_title']['id'] = 'field_session_title';
  $handler->display->display_options['fields']['field_session_title']['table'] = 'field_data_field_session_title';
  $handler->display->display_options['fields']['field_session_title']['field'] = 'field_session_title';
  $handler->display->display_options['fields']['field_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_session_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_session_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['hide_empty'] = TRUE;

  /* Display: Account Block Non-owner */
  $handler = $view->new_display('block', 'Account Block Non-owner', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Session(s)';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_session_title' => 'field_session_title',
    'edit_entityform' => 'edit_entityform',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_session_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_session_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_title']['element_wrapper_type'] = 'span';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Entityform Submission: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'entityform';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $translatables['your_session'] = array(
    t('Master'),
    t('Your Session(s)'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User Submitting'),
    t('Edit Session'),
    t('Session Status'),
    t('All'),
    t('Account Block'),
    t('Sidebar Block'),
    t('Account Block Non-owner'),
    t('Session(s)'),
  );
  $export['your_session'] = $view;

  $view = new view();
  $view->name = 'your_session_evals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Your Session Evals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Session Evaluations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_session_title' => 'field_session_title',
    'edit_entityform' => 'edit_entityform',
  );
  $handler->display->display_options['row_options']['separator'] = ' - ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Session question responses are ranked from 1 to 5, with 1 being the most positive, and 5 being the most negative. Evaluations are sorted by date, with the newest ones at the top.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no evaluations have been submitted yet for your session(s).';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entityform Submission: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_session_name_entityform']['id'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['relationships']['reverse_field_session_name_entityform']['table'] = 'entityform';
  $handler->display->display_options['relationships']['reverse_field_session_name_entityform']['field'] = 'reverse_field_session_name_entityform';
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
  $handler->display->display_options['fields']['field_session_title']['label'] = '';
  $handler->display->display_options['fields']['field_session_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_session_title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_session_title']['alter']['prefix'] = 'Session: ';
  $handler->display->display_options['fields']['field_session_title']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_session_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_title']['element_wrapper_type'] = 'span';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'html5_tools_iso8601';
  /* Field: Entityform Submission: Speaker's Knowledge on the Topic */
  $handler->display->display_options['fields']['field_speaker_knowledge']['id'] = 'field_speaker_knowledge';
  $handler->display->display_options['fields']['field_speaker_knowledge']['table'] = 'field_data_field_speaker_knowledge';
  $handler->display->display_options['fields']['field_speaker_knowledge']['field'] = 'field_speaker_knowledge';
  $handler->display->display_options['fields']['field_speaker_knowledge']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['fields']['field_speaker_knowledge']['element_type'] = 'span';
  /* Field: Entityform Submission: Speaker's Presentation */
  $handler->display->display_options['fields']['field_speaker_presentation']['id'] = 'field_speaker_presentation';
  $handler->display->display_options['fields']['field_speaker_presentation']['table'] = 'field_data_field_speaker_presentation';
  $handler->display->display_options['fields']['field_speaker_presentation']['field'] = 'field_speaker_presentation';
  $handler->display->display_options['fields']['field_speaker_presentation']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['fields']['field_speaker_presentation']['element_type'] = 'span';
  /* Field: Entityform Submission: Did You Learn Something New? */
  $handler->display->display_options['fields']['field_did_you_learn_something']['id'] = 'field_did_you_learn_something';
  $handler->display->display_options['fields']['field_did_you_learn_something']['table'] = 'field_data_field_did_you_learn_something';
  $handler->display->display_options['fields']['field_did_you_learn_something']['field'] = 'field_did_you_learn_something';
  $handler->display->display_options['fields']['field_did_you_learn_something']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['fields']['field_did_you_learn_something']['element_type'] = 'span';
  /* Field: Entityform Submission: Additional Comments */
  $handler->display->display_options['fields']['field_additional_comments']['id'] = 'field_additional_comments';
  $handler->display->display_options['fields']['field_additional_comments']['table'] = 'field_data_field_additional_comments';
  $handler->display->display_options['fields']['field_additional_comments']['field'] = 'field_additional_comments';
  $handler->display->display_options['fields']['field_additional_comments']['relationship'] = 'reverse_field_session_name_entityform';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Entityform Submission: User uid */
  $handler->display->display_options['arguments']['user']['id'] = 'user';
  $handler->display->display_options['arguments']['user']['table'] = 'entityform';
  $handler->display->display_options['arguments']['user']['field'] = 'user';
  $handler->display->display_options['arguments']['user']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['user']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'session' => 'session',
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'entityform';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_session_name_entityform';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'session_evaluation' => 'session_evaluation',
  );

  /* Display: Account Block */
  $handler = $view->new_display('block', 'Account Block', 'block');
  $translatables['your_session_evals'] = array(
    t('Master'),
    t('Your Session Evaluations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Session question responses are ranked from 1 to 5, with 1 being the most positive, and 5 being the most negative. Evaluations are sorted by date, with the newest ones at the top.'),
    t('Sorry, no evaluations have been submitted yet for your session(s).'),
    t('User Submitting'),
    t('Entityform Submission referencing Entityform Submission from field_session_name'),
    t('Session: '),
    t('Date submitted'),
    t('Speaker\'s Knowledge on the Topic'),
    t('Speaker\'s Presentation'),
    t('Did You Learn Something New?'),
    t('Additional Comments'),
    t('All'),
    t('Account Block'),
  );
  $export['your_session_evals'] = $view;

  return $export;
}

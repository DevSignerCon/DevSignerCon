<?php
/**
 * @file
 * session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function session_default_entityform_type() {
  $items = array();
  $items['session'] = entity_import('entityform_type', '{
    "type" : "session",
    "label" : "Submit A Session",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Submit Session",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "Rockstar! We\\u0027ve got your submission. We\\u0027ll be in touch soon! Please share your session on Twitter, Facebook, or your blog.",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_CLOSED",
      "roles" : { "3" : "3", "1" : 0, "2" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003ESession submission deadline: Friday, June 5th.\\u003C\\/p\\u003E",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/session",
        "alias" : "conference\\/session-submission",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/session\\/confirm",
        "alias" : "conference\\/session-submission\\/confirmation",
        "language" : "und"
      }
    }
  }');
  return $items;
}

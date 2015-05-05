<?php
/**
 * @file
 * volunteer.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function volunteer_default_entityform_type() {
  $items = array();
  $items['volunteer'] = entity_import('entityform_type', '{
    "type" : "volunteer",
    "label" : "Volunteer",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "Welcome to the Devsigner volunteer team! We will be in touch soon.",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "One of us! One of us!", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/volunteer",
        "alias" : "conference\\/volunteer",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/volunteer\\/confirm",
        "alias" : "conference\\/volunteer\\/confirmation",
        "language" : "und"
      }
    }
  }');
  return $items;
}

<?php
/**
 * @file
 * sponsor.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function sponsor_default_entityform_type() {
  $items = array();
  $items['sponsor'] = entity_import('entityform_type', '{
    "type" : "sponsor",
    "label" : "Sponsor Application",
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
        "value" : "Thank you for your generous support! A Devsigner representative will contact you soon to complete your sponsorship. All sponsors may receive additional swag and benefits, based on the discretion of the organizers.  ",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "Fill out and submit this order form, and a Devsigner representative will contact you for secure payment.",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : {
      "submit" : {
        "source" : "eform\\/submit\\/sponsor",
        "alias" : "sponsors\\/apply",
        "language" : "und"
      },
      "confirm" : {
        "source" : "eform\\/sponsor\\/confirm",
        "alias" : "sponsors\\/apply\\/confirmation",
        "language" : "und"
      }
    }
  }');
  return $items;
}

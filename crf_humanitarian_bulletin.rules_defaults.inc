<?php
/**
 * @file
 * crf_humanitarian_bulletin.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crf_humanitarian_bulletin_default_rules_configuration() {
  $items = array();
  $items['rules_email_ocha_focal_point_on_humanitarian_bulletin_submission'] = entity_import('rules_config', '{ "rules_email_ocha_focal_point_on_humanitarian_bulletin_submission" : {
      "LABEL" : "Email OCHA focal point on Humanitarian Bulletin submission",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "humanitarian_bulletin" : "humanitarian_bulletin" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "node:field-nc-request" ],
            "field" : "field_crf_req_contact"
          }
        }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-nc-request:field-crf-req-contact" ] },
            "ITEM" : { "current_contact" : "Current contact" },
            "DO" : [
              { "mail" : {
                  "to" : [ "current-contact:mail" ],
                  "subject" : "Humanitarian Bulletin provided by [node:author:field-first-name] [node:author:field-last-name] in [node:field-nc-request:title] is now finalised",
                  "message" : "Dear [current-contact:field-first-name] [current-contact:field-last-name],\\r\\n\\r\\nKindly note that the Humanitarian Bulletin by [node:author:field-first-name] [node:author:field-last-name] in the Information Request [node:field-nc-request:title] has been finalised.\\r\\n\\r\\n[node:log]\\r\\n\\r\\nThe information can be viewed online: [node:url]\\r\\n\\r\\nNo action is required on your part at this time.\\r\\n\\r\\nKind regards,\\r\\nOCHA\\r\\n",
                  "from" : [ "node:author:mail" ],
                  "language" : [ "" ]
                }
              }
            ]
          }
        },
        { "redirect" : { "url" : "\\u003Cfront\\u003E" } }
      ]
    }
  }');
  return $items;
}

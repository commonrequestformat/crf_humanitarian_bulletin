<?php
/**
 * @file
 * crf_humanitarian_bulletin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function crf_humanitarian_bulletin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_humanitarian_bulletin';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autosave_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['autosave_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_humanitarian_bulletin';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_humanitarian_bulletin';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['comment_anonymous_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['comment_default_mode_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_humanitarian_bulletin';
  $strongarm->value = '50';
  $export['comment_default_per_page_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['comment_form_location_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_humanitarian_bulletin';
  $strongarm->value = '1';
  $export['comment_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_humanitarian_bulletin';
  $strongarm->value = '1';
  $export['comment_preview_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['comment_subject_field_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_diff_inline_node_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['diff_show_diff_inline_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_inline_node_humanitarian_bulletin';
  $strongarm->value = 'diff_complete';
  $export['diff_view_mode_inline_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_humanitarian_bulletin';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_standard_node_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['diff_view_mode_standard_node_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__humanitarian_bulletin';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_humanitarian_bulletin';
  $strongarm->value = '0';
  $export['language_content_type_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_humanitarian_bulletin';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_humanitarian_bulletin';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_humanitarian_bulletin';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_humanitarian_bulletin';
  $strongarm->value = '0';
  $export['node_preview_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['node_submitted_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_humanitarian_bulletin';
  $strongarm->value = 0;
  $export['print_display_comment_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['print_display_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_humanitarian_bulletin';
  $strongarm->value = 1;
  $export['print_display_urllist_humanitarian_bulletin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_humanitarian_bulletin';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_humanitarian_bulletin'] = $strongarm;

  return $export;
}

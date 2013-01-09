<?php
/**
 * @file
 * crf_humanitarian_bulletin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_humanitarian_bulletin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function crf_humanitarian_bulletin_node_info() {
  $items = array(
    'humanitarian_bulletin' => array(
      'name' => t('Humanitarian Bulletin Information'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * carti.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function carti_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function carti_node_info() {
  $items = array(
    'carti' => array(
      'name' => t('Carti'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

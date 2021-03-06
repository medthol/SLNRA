<?php
/**
 * @file
 * nra_tenders.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_tenders_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_tenders_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_tenders_node_info() {
  $items = array(
    'nra_tenders' => array(
      'name' => t('Tenders'),
      'base' => 'node_content',
      'description' => t('Use  Tenders content type to create all  Tender Pages. These pages are linked to the  Tenders menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

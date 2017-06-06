<?php
/**
 * @file
 * nra_people_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nra_people_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nra_people_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nra_people_profiles_node_info() {
  $items = array(
    'nra_people_profiles' => array(
      'name' => t('People Profiles'),
      'base' => 'node_content',
      'description' => t('Use People Profiles content type to create all Staff Profile Pages. These pages are linked to the Management Team, Board of Directors, and About Us menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
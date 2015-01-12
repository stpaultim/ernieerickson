<?php
/**
 * @file
 * movin_up1234.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function movin_up1234_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function movin_up1234_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function movin_up1234_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('A blog post for posting blog posts to blogs.'),
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

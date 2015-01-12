<?php
/**
 * @file
 * photo_gallery.features.inc
 */

/**
 * Implements hook_node_info().
 */
function photo_gallery_node_info() {
  $items = array(
    'photo_gallery' => array(
      'name' => t('Photo-Gallery'),
      'base' => 'node_content',
      'description' => t('An entire photo album with it\'s own page. Make sure you put it all up at once or you might need to call your grandson.'),
      'has_title' => '1',
      'title_label' => t('Album Name'),
      'help' => t('Where did you go? This title is going to appear at the top of the page so pick something short that describes what the album is about.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

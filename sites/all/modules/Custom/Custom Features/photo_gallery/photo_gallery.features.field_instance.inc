<?php
/**
 * @file
 * photo_gallery.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function photo_gallery_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-photo_gallery-field_description'
  $field_instances['node-photo_gallery-field_description'] = array(
    'bundle' => 'photo_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'I gave you 2000 words to describe you\'re photo gallery. Write out a story from the trip or just give write something about who was with you and what you did. This can be increased with a short call to your site administrators.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 2000,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-photo_gallery-field_photos'
  $field_instances['node-photo_gallery-field_photos'] = array(
    'bundle' => 'photo_gallery',
    'deleted' => 0,
    'description' => 'All of your photos!',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'Photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'preview',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('All of your photos!');
  t('Description');
  t('I gave you 2000 words to describe you\'re photo gallery. Write out a story from the trip or just give write something about who was with you and what you did. This can be increased with a short call to your site administrators.');
  t('Photos');

  return $field_instances;
}

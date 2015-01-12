<?php
/**
 * @file
 * movin_up1234.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function movin_up1234_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page_context';
  $context->description = 'All the posts';
  $context->tag = 'Posts';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'content' => 'content',
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 'content',
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
      'zurb_foundation' => array(
        'disable' => array(
          'content' => 'content',
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All the posts');
  t('Posts');
  $export['front_page_context'] = $context;

  return $export;
}

<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_library_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_library';
  $strongarm->value = '0';
  $export['ant_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_library';
  $strongarm->value = '0';
  $export['comment_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_library';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '6',
    'comment_settings' => '7',
    'menu' => '5',
    'taxonomy' => '4',
    'path' => '8',
  );
  $export['content_extra_weights_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_library';
  $strongarm->value = '0';
  $export['language_content_type_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_library';
  $strongarm->value = '1';
  $export['location_defaultnum_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_geocode_dk';
  $strongarm->value = 'google';
  $export['location_geocode_dk'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_library';
  $strongarm->value = '1';
  $export['location_maxnum_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_library';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 0,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-100',
        ),
        'street' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '-99',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-98',
        ),
        'postal_code' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '-97',
        ),
        'city' => array(
          'collect' => '2',
          'default' => '',
          'weight' => '-96',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-95',
        ),
        'country' => array(
          'collect' => '2',
          'default' => 'dk',
          'weight' => '-94',
        ),
        'locpick' => array(
          'collect' => '0',
          'weight' => '-93',
        ),
        'phone' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-92',
        ),
        'fax' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-91',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'fax' => 0,
        'phone' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_library';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opening_hours_enabled_library';
  $strongarm->value = 1;
  $export['opening_hours_enabled_library'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_about_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/om';
  $export['pathauto_library_about_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_blog_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/blog';
  $export['pathauto_library_blog_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_bookpc_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/bookpc';
  $export['pathauto_library_bookpc_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_event_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/arrangementer';
  $export['pathauto_library_event_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_facilities_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/faciliteter';
  $export['pathauto_library_facilities_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_library_local_page_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]/lokalt';
  $export['pathauto_library_local_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_library_pattern';
  $strongarm->value = '[panels_subsites_prefix]/[panels_subsites_slug]';
  $export['pathauto_node_library_pattern'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * rooms_standard_unit_type_.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rooms_standard_unit_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'rooms_unit-standard_room-rooms_booking_unit_options'
  $field_instances['rooms_unit-standard_room-rooms_booking_unit_options'] = array(
    'bundle' => 'standard_room',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'rooms',
        'settings' => array(),
        'type' => 'rooms_options_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'rooms_unit',
    'field_name' => 'rooms_booking_unit_options',
    'label' => 'Options',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'rooms',
      'settings' => array(),
      'type' => 'rooms_options_combined',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Options');

  return $field_instances;
}

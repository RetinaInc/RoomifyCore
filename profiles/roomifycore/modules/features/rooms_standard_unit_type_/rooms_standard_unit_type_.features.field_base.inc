<?php
/**
 * @file
 * rooms_standard_unit_type_.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rooms_standard_unit_type__field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'rooms_booking_unit_options'
  $field_bases['rooms_booking_unit_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'rooms_booking_unit_options',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'rooms',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'rooms_options',
  );

  return $field_bases;
}

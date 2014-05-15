<?php
/**
 * @file
 * rooms_standard_unit_type_.features.inc
 */

/**
 * Implements hook_default_rooms_unit_type().
 */
function rooms_standard_unit_type_default_rooms_unit_type() {
  $items = array();
  $items['standard_room'] = entity_import('rooms_unit_type', '{
    "type" : "standard_room",
    "label" : "Standard Room",
    "weight" : "0",
    "data" : {
      "base_price" : "100",
      "min_sleeps" : "2",
      "max_sleeps" : "2",
      "min_children" : "0",
      "max_children" : "1",
      "rooms_description_source" : ""
    },
    "rooms_booking_unit_options" : [],
    "rdf_mapping" : []
  }');
  return $items;
}

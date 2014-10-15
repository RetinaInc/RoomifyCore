<?php
/**
 * @file
 * Enables modules and site configuration for a RoomifyCore site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */

function roomifycore_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate site information fields using the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['SERVER_NAME'];

  // Pre-populate the admin account fields to speed up installation.
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@' . $_SERVER['SERVER_NAME'];

  // Disable update notifications because this is a distro.
  $form['update_notifications']['update_status_module']['#default_value'] = array('0');
}

function roomifycore_install_tasks(&$install_state) {
  return array(
    'roomifycore_create_unit_form' => array(
      'display_name' => st('Configure RoomifyCore'),
      'type' => 'form',
    ),
    'roomifycore_validate_unit_creation' => array(
      'display_name' => st('Validate UnitType Creation'),
 	    'type' => 'normal',
    ),
	'roomifycore_finish' => array(
      'display_name' => st('Apply configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Implements hook_install_tasks_alter().
 */
function roomifycore_install_tasks_alter(&$tasks, $install_state) {
  // This is a workaround because drupal_get_path doesnt work.
  $css = str_replace('.profile', '.css', drupal_get_filename('profile', 'roomifycore'));
  drupal_add_css($css);
}

/**
 * Unit creation form lets user insert information for the first Casa Unit.
 */
function roomifycore_create_unit_form() {
  drupal_set_title(st('RoomifyCore : Create Standard Unit Type'));
  $form['welcome']['#markup'] = '<h1 class="title">' . st('Roomify options') . '</h1><p>' .
  st('Welcome to Roomify Core!').'</br>'.
  st('Please enter some basic information about Your Property: '). '</p>';
  
  $form['property_name'] = array(
    '#title' => st('Property Name'),
    '#type' => 'textfield',
  );
  $form['price'] = array(
    '#title' => st('Property default price per night'),
    '#type' => 'textfield',
  );
  $form['max_sleeps'] = array(
    '#title' => st('Maximum number of occupants'),
    '#type' => 'textfield',
  );
  $form['max_children'] = array(
    '#title' => st('Maximum number of children in group (optional)'),
    '#type' => 'textfield',
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Save and continue'),
    '#weight' => 15,
  );
  
  return $form;
 }

/**
 * Create Standard UnitType Validate
 */
function roomifycore_create_unit_form_validate($form, &$form_state) {
  
  if(!is_numeric($form_state['values']['price'])) {
    form_set_error('price', st('Price must be a numeric value'));
  }
  if(!is_numeric($form_state['values']['max_sleeps'])) {
    form_set_error('max_sleeps', st('Maximum number of occupants must be a numeric value'));
  }
  if($form_state['values']['max_children'] != '' && !is_numeric($form_state['values']['max_children'])) {
    form_set_error('max_children', st('Maximum number of children must be a numeric value'));
  }

}

/**
 * Create Standard UnitType Submit
 */
function roomifycore_create_unit_form_submit($form, &$form_state) {
  variable_set('property_name', $form_state['values']['property_name']);
  variable_set('price', $form_state['values']['price']);
  variable_set('max_sleeps', $form_state['values']['max_sleeps']);
  variable_set('max_children', $form_state['values']['max_children']);
}

/**
 * Create Standard UnitType and a Standard Room
 */
function roomifycore_validate_unit_creation() {	
  module_enable(array('rooms_standard_unit_type','core_roles_and_permissions'), TRUE);
  $unit_type = rooms_unit_type_load('standard_room', TRUE);
  $unit_type->data['base_price'] = variable_get('price');
  $unit_type->data['max_children'] = variable_get('max_children');
  $unit_type->data['min_sleeps'] = variable_get('min_sleeps');
  $unit_type->data['max_sleeps'] = 1;
  $room = array(
    'type' => 'standard_room',
    'name' => variable_get('property_name'),
    'uid' => 1,
    'default_state' => 1,
  );
  rooms_unit_save(rooms_unit_create($room));
  variable_del('property_name');
  variable_del('price');
  variable_del('max_sleeps');
  variable_del('min_sleeps');
  variable_del('max_children');
 
 }

/**
 * Do things that needs to be done after all modules have been enabled.
 */
function roomifycore_finish() {
  module_list(TRUE);
  drupal_flush_all_caches();
  // Rebuild default components.
  if (module_exists('defaultconfig')) {
    drupal_flush_all_caches();
    module_list(TRUE);
    return defaultconfig_rebuild_batch_defintion(
      st('Apply configuration'),
      st('The installation encountered an error.')
    );
  }
  
  return array();
}
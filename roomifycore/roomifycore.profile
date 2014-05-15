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
  // This is a workaround because drupal_get_path('module', 'roomify') doesnt work.
  $css = str_replace('.profile', '.css', drupal_get_filename('profile', 'roomifycore'));
  drupal_add_css($css);
}

/**
 * RoomifyCore creation units form. The user get's to select to create a Standard UnitType
 * and a Unit Room.
 */
function roomifycore_create_unit_form() {
  drupal_set_title(st('RoomifyCore : Create UnitType Example'));
  $form['welcome']['#markup'] = '<h1 class="title">' . st('Roomify options') . '</h1><p>' .
  st('Welcome to RoomifyCore! RoomifyCore give you the possibility to create a Standard UnitType and a Unit Room') . '</p>';
  $form['standard_unit_type'] = array(
          '#type' => 'checkbox',
          '#title' => st('Enable UnitType Creation'),
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
 * Create Standard UnitType Submit
 */
function roomifycore_create_unit_form_submit($form, &$form_state) {
  variable_set('roomifycore_create_unit_type', $form_state['values']['standard_unit_type']);
}

/**
 * Create Standard UnitType and a Standard Room
 */
function roomifycore_validate_unit_creation() {	
  if (variable_get('roomifycore_create_unit_type')) {
    module_enable(array('rooms_standard_unit_type'), TRUE);
    $room = array(
  	 'type' => 'standard_room',
  	 'name' => 'Example Room',
  	 );
    rooms_unit_save(rooms_unit_create($room));
    variable_del('roomifycore_create_unit_type');
  }
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
      st('The installation encountered an error')
    );
  }
  
  return array();
}
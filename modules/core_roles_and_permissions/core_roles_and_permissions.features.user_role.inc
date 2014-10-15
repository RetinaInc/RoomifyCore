<?php
/**
 * @file
 * core_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function core_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: rooms manager.
  $roles['rooms manager'] = array(
    'name' => 'rooms manager',
    'weight' => 3,
  );

  return $roles;
}

<?php
/**
 * @file
 * core_roles_and_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function core_roles_and_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer customer profile types'.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer rooms_booking entities'.
  $permissions['administer rooms_booking entities'] = array(
    'name' => 'administer rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'administer rooms_booking types'.
  /*$permissions['administer rooms_booking types'] = array(
    'name' => 'administer rooms_booking types',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );*/

  // Exported permission: 'administer rooms_unit availability'.
  $permissions['administer rooms_unit availability'] = array(
    'name' => 'administer rooms_unit availability',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'administer rooms_unit entities'.
  $permissions['administer rooms_unit entities'] = array(
    'name' => 'administer rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'administer rooms_unit pricing'.
  $permissions['administer rooms_unit pricing'] = array(
    'name' => 'administer rooms_unit pricing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'administer rooms_unit_type entities'.
  $permissions['administer rooms_unit_type entities'] = array(
    'name' => 'administer rooms_unit_type entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'ajax order expiration'.
  $permissions['ajax order expiration'] = array(
    'name' => 'ajax order expiration',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_cart_expiration',
  );

  // Exported permission: 'book units'.
  $permissions['book units'] = array(
    'name' => 'book units',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rooms_booking_manager',
  );

  // Exported permission: 'bypass rooms_booking entities access'.
  $permissions['bypass rooms_booking entities access'] = array(
    'name' => 'bypass rooms_booking entities access',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'bypass rooms_unit entities access'.
  $permissions['bypass rooms_unit entities access'] = array(
    'name' => 'bypass rooms_unit entities access',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure room settings'.
  $permissions['configure room settings'] = array(
    'name' => 'configure room settings',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create rooms_booking entities'.
  $permissions['create rooms_booking entities'] = array(
    'name' => 'create rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_booking entities of bundle standard_booking'.
  $permissions['create rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'create rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'create rooms_unit entities'.
  $permissions['create rooms_unit entities'] = array(
    'name' => 'create rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'create unit_description content'.
  $permissions['create unit_description content'] = array(
    'name' => 'create unit_description content',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any rooms_booking entity'.
  $permissions['delete any rooms_booking entity'] = array(
    'name' => 'delete any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_booking entity of bundle standard_booking'.
  $permissions['delete any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'delete any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete any rooms_unit entity'.
  $permissions['delete any rooms_unit entity'] = array(
    'name' => 'delete any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete any unit_description content'.
  $permissions['delete any unit_description content'] = array(
    'name' => 'delete any unit_description content',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own rooms_booking entities'.
  $permissions['delete own rooms_booking entities'] = array(
    'name' => 'delete own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_booking entities of bundle standard_booking'.
  $permissions['delete own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'delete own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'delete own rooms_unit entities'.
  $permissions['delete own rooms_unit entities'] = array(
    'name' => 'delete own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'delete own unit_description content'.
  $permissions['delete own unit_description content'] = array(
    'name' => 'delete own unit_description content',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any unit_description content'.
  $permissions['edit any unit_description content'] = array(
    'name' => 'edit any unit_description content',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own unit_description content'.
  $permissions['edit own unit_description content'] = array(
    'name' => 'edit own unit_description content',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'reference booking unit availability'.
  $permissions['reference booking unit availability'] = array(
    'name' => 'reference booking unit availability',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability_reference',
  );

  // Exported permission: 'update any rooms_booking entity'.
  $permissions['update any rooms_booking entity'] = array(
    'name' => 'update any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_booking entity of bundle standard_booking'.
  $permissions['update any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'update any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update any rooms_unit entity'.
  $permissions['update any rooms_unit entity'] = array(
    'name' => 'update any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update availability any rooms_unit entity'.
  $permissions['update availability any rooms_unit entity'] = array(
    'name' => 'update availability any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update availability own rooms_unit entities'.
  $permissions['update availability own rooms_unit entities'] = array(
    'name' => 'update availability own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'update own rooms_booking entities'.
  $permissions['update own rooms_booking entities'] = array(
    'name' => 'update own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_booking entities of bundle standard_booking'.
  $permissions['update own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'update own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'update own rooms_unit entities'.
  $permissions['update own rooms_unit entities'] = array(
    'name' => 'update own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'update pricing any rooms_unit entity'.
  $permissions['update pricing any rooms_unit entity'] = array(
    'name' => 'update pricing any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'update pricing own rooms_unit entities'.
  $permissions['update pricing own rooms_unit entities'] = array(
    'name' => 'update pricing own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_pricing',
  );

  // Exported permission: 'view anonymous availability information'.
  $permissions['view anonymous availability information'] = array(
    'name' => 'view anonymous availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity of bundle rooms_product'.
  $permissions['view any commerce_product entity of bundle rooms_product'] = array(
    'name' => 'view any commerce_product entity of bundle rooms_product',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any rooms_booking entity'.
  $permissions['view any rooms_booking entity'] = array(
    'name' => 'view any rooms_booking entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_booking entity of bundle standard_booking'.
  $permissions['view any rooms_booking entity of bundle standard_booking'] = array(
    'name' => 'view any rooms_booking entity of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view any rooms_unit entity'.
  $permissions['view any rooms_unit entity'] = array(
    'name' => 'view any rooms_unit entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view any rooms_unit unpublished entity'.
  $permissions['view any rooms_unit unpublished entity'] = array(
    'name' => 'view any rooms_unit unpublished entity',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view named availability information'.
  $permissions['view named availability information'] = array(
    'name' => 'view named availability information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own rooms_booking entities'.
  $permissions['view own rooms_booking entities'] = array(
    'name' => 'view own rooms_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_booking entities of bundle standard_booking'.
  $permissions['view own rooms_booking entities of bundle standard_booking'] = array(
    'name' => 'view own rooms_booking entities of bundle standard_booking',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_booking',
  );

  // Exported permission: 'view own rooms_unit entities'.
  $permissions['view own rooms_unit entities'] = array(
    'name' => 'view own rooms_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view own rooms_unit unpublished entities'.
  $permissions['view own rooms_unit unpublished entities'] = array(
    'name' => 'view own rooms_unit unpublished entities',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_unit',
  );

  // Exported permission: 'view past availability information'.
  $permissions['view past availability information'] = array(
    'name' => 'view past availability information',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'rooms_availability',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'rooms manager' => 'rooms manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}

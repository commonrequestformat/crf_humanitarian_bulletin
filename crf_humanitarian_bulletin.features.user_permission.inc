<?php
/**
 * @file
 * crf_humanitarian_bulletin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function crf_humanitarian_bulletin_user_default_permissions() {
  $permissions = array();

  // Exported permission: create humanitarian_bulletin content.
  $permissions['create humanitarian_bulletin content'] = array(
    'name' => 'create humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any humanitarian_bulletin content.
  $permissions['delete any humanitarian_bulletin content'] = array(
    'name' => 'delete any humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own humanitarian_bulletin content.
  $permissions['delete own humanitarian_bulletin content'] = array(
    'name' => 'delete own humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any humanitarian_bulletin content.
  $permissions['edit any humanitarian_bulletin content'] = array(
    'name' => 'edit any humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own humanitarian_bulletin content.
  $permissions['edit own humanitarian_bulletin content'] = array(
    'name' => 'edit own humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished humanitarian_bulletin content.
  $permissions['view any unpublished humanitarian_bulletin content'] = array(
    'name' => 'view any unpublished humanitarian_bulletin content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}

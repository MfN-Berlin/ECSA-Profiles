<?php
/**
 * @file
 * ecsa_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecsa_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_comments'.
  $permissions['create field_comments'] = array(
    'name' => 'create field_comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_contact_email'.
  $permissions['create field_contact_email'] = array(
    'name' => 'create field_contact_email',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cs_expertise_area'.
  $permissions['create field_cs_expertise_area'] = array(
    'name' => 'create field_cs_expertise_area',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_expertise_areas_pres'.
  $permissions['create field_expertise_areas_pres'] = array(
    'name' => 'create field_expertise_areas_pres',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_facebook'.
  $permissions['create field_facebook'] = array(
    'name' => 'create field_facebook',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_motivation'.
  $permissions['create field_motivation'] = array(
    'name' => 'create field_motivation',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_network_name'.
  $permissions['create field_network_name'] = array(
    'name' => 'create field_network_name',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_network_surname'.
  $permissions['create field_network_surname'] = array(
    'name' => 'create field_network_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_address'.
  $permissions['create field_organization_address'] = array(
    'name' => 'create field_organization_address',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_email'.
  $permissions['create field_organization_del2_email'] = array(
    'name' => 'create field_organization_del2_email',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_exp_area'.
  $permissions['create field_organization_del2_exp_area'] = array(
    'name' => 'create field_organization_del2_exp_area',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_name'.
  $permissions['create field_organization_del2_name'] = array(
    'name' => 'create field_organization_del2_name',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_phone'.
  $permissions['create field_organization_del2_phone'] = array(
    'name' => 'create field_organization_del2_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_surname'.
  $permissions['create field_organization_del2_surname'] = array(
    'name' => 'create field_organization_del2_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del2_url'.
  $permissions['create field_organization_del2_url'] = array(
    'name' => 'create field_organization_del2_url',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_del_surname'.
  $permissions['create field_organization_del_surname'] = array(
    'name' => 'create field_organization_del_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_delegate_name'.
  $permissions['create field_organization_delegate_name'] = array(
    'name' => 'create field_organization_delegate_name',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_delegate_url'.
  $permissions['create field_organization_delegate_url'] = array(
    'name' => 'create field_organization_delegate_url',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_delegateemail'.
  $permissions['create field_organization_delegateemail'] = array(
    'name' => 'create field_organization_delegateemail',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_delegatephone'.
  $permissions['create field_organization_delegatephone'] = array(
    'name' => 'create field_organization_delegatephone',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_leader_email'.
  $permissions['create field_organization_leader_email'] = array(
    'name' => 'create field_organization_leader_email',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_leader_name'.
  $permissions['create field_organization_leader_name'] = array(
    'name' => 'create field_organization_leader_name',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_leader_phone'.
  $permissions['create field_organization_leader_phone'] = array(
    'name' => 'create field_organization_leader_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_leader_url'.
  $permissions['create field_organization_leader_url'] = array(
    'name' => 'create field_organization_leader_url',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organization_pres_surname'.
  $permissions['create field_organization_pres_surname'] = array(
    'name' => 'create field_organization_pres_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_other_contact'.
  $permissions['create field_other_contact'] = array(
    'name' => 'create field_other_contact',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_phone'.
  $permissions['create field_phone'] = array(
    'name' => 'create field_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_private_address'.
  $permissions['create field_private_address'] = array(
    'name' => 'create field_private_address',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reduction_types'.
  $permissions['create field_reduction_types'] = array(
    'name' => 'create field_reduction_types',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_twitter'.
  $permissions['create field_twitter'] = array(
    'name' => 'create field_twitter',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_upload_document'.
  $permissions['create field_upload_document'] = array(
    'name' => 'create field_upload_document',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vat'.
  $permissions['create field_vat'] = array(
    'name' => 'create field_vat',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vat_number'.
  $permissions['create field_vat_number'] = array(
    'name' => 'create field_vat_number',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_comments'.
  $permissions['edit field_comments'] = array(
    'name' => 'edit field_comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_contact_email'.
  $permissions['edit field_contact_email'] = array(
    'name' => 'edit field_contact_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cs_expertise_area'.
  $permissions['edit field_cs_expertise_area'] = array(
    'name' => 'edit field_cs_expertise_area',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_expertise_areas_pres'.
  $permissions['edit field_expertise_areas_pres'] = array(
    'name' => 'edit field_expertise_areas_pres',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_facebook'.
  $permissions['edit field_facebook'] = array(
    'name' => 'edit field_facebook',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_motivation'.
  $permissions['edit field_motivation'] = array(
    'name' => 'edit field_motivation',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_network_name'.
  $permissions['edit field_network_name'] = array(
    'name' => 'edit field_network_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_network_surname'.
  $permissions['edit field_network_surname'] = array(
    'name' => 'edit field_network_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_address'.
  $permissions['edit field_organization_address'] = array(
    'name' => 'edit field_organization_address',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_email'.
  $permissions['edit field_organization_del2_email'] = array(
    'name' => 'edit field_organization_del2_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_exp_area'.
  $permissions['edit field_organization_del2_exp_area'] = array(
    'name' => 'edit field_organization_del2_exp_area',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_name'.
  $permissions['edit field_organization_del2_name'] = array(
    'name' => 'edit field_organization_del2_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_phone'.
  $permissions['edit field_organization_del2_phone'] = array(
    'name' => 'edit field_organization_del2_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_surname'.
  $permissions['edit field_organization_del2_surname'] = array(
    'name' => 'edit field_organization_del2_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del2_url'.
  $permissions['edit field_organization_del2_url'] = array(
    'name' => 'edit field_organization_del2_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_del_surname'.
  $permissions['edit field_organization_del_surname'] = array(
    'name' => 'edit field_organization_del_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_delegate_name'.
  $permissions['edit field_organization_delegate_name'] = array(
    'name' => 'edit field_organization_delegate_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_delegate_url'.
  $permissions['edit field_organization_delegate_url'] = array(
    'name' => 'edit field_organization_delegate_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_delegateemail'.
  $permissions['edit field_organization_delegateemail'] = array(
    'name' => 'edit field_organization_delegateemail',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_delegatephone'.
  $permissions['edit field_organization_delegatephone'] = array(
    'name' => 'edit field_organization_delegatephone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_leader_email'.
  $permissions['edit field_organization_leader_email'] = array(
    'name' => 'edit field_organization_leader_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_leader_name'.
  $permissions['edit field_organization_leader_name'] = array(
    'name' => 'edit field_organization_leader_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_leader_phone'.
  $permissions['edit field_organization_leader_phone'] = array(
    'name' => 'edit field_organization_leader_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_leader_url'.
  $permissions['edit field_organization_leader_url'] = array(
    'name' => 'edit field_organization_leader_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organization_pres_surname'.
  $permissions['edit field_organization_pres_surname'] = array(
    'name' => 'edit field_organization_pres_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_other_contact'.
  $permissions['edit field_other_contact'] = array(
    'name' => 'edit field_other_contact',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_phone'.
  $permissions['edit field_phone'] = array(
    'name' => 'edit field_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_private_address'.
  $permissions['edit field_private_address'] = array(
    'name' => 'edit field_private_address',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reduction_types'.
  $permissions['edit field_reduction_types'] = array(
    'name' => 'edit field_reduction_types',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_twitter'.
  $permissions['edit field_twitter'] = array(
    'name' => 'edit field_twitter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_upload_document'.
  $permissions['edit field_upload_document'] = array(
    'name' => 'edit field_upload_document',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vat'.
  $permissions['edit field_vat'] = array(
    'name' => 'edit field_vat',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vat_number'.
  $permissions['edit field_vat_number'] = array(
    'name' => 'edit field_vat_number',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_comments'.
  $permissions['edit own field_comments'] = array(
    'name' => 'edit own field_comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_contact_email'.
  $permissions['edit own field_contact_email'] = array(
    'name' => 'edit own field_contact_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cs_expertise_area'.
  $permissions['edit own field_cs_expertise_area'] = array(
    'name' => 'edit own field_cs_expertise_area',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_expertise_areas_pres'.
  $permissions['edit own field_expertise_areas_pres'] = array(
    'name' => 'edit own field_expertise_areas_pres',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_facebook'.
  $permissions['edit own field_facebook'] = array(
    'name' => 'edit own field_facebook',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_motivation'.
  $permissions['edit own field_motivation'] = array(
    'name' => 'edit own field_motivation',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_network_name'.
  $permissions['edit own field_network_name'] = array(
    'name' => 'edit own field_network_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_network_surname'.
  $permissions['edit own field_network_surname'] = array(
    'name' => 'edit own field_network_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_address'.
  $permissions['edit own field_organization_address'] = array(
    'name' => 'edit own field_organization_address',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_email'.
  $permissions['edit own field_organization_del2_email'] = array(
    'name' => 'edit own field_organization_del2_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_exp_area'.
  $permissions['edit own field_organization_del2_exp_area'] = array(
    'name' => 'edit own field_organization_del2_exp_area',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_name'.
  $permissions['edit own field_organization_del2_name'] = array(
    'name' => 'edit own field_organization_del2_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_phone'.
  $permissions['edit own field_organization_del2_phone'] = array(
    'name' => 'edit own field_organization_del2_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_surname'.
  $permissions['edit own field_organization_del2_surname'] = array(
    'name' => 'edit own field_organization_del2_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del2_url'.
  $permissions['edit own field_organization_del2_url'] = array(
    'name' => 'edit own field_organization_del2_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_del_surname'.
  $permissions['edit own field_organization_del_surname'] = array(
    'name' => 'edit own field_organization_del_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_delegate_name'.
  $permissions['edit own field_organization_delegate_name'] = array(
    'name' => 'edit own field_organization_delegate_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_delegate_url'.
  $permissions['edit own field_organization_delegate_url'] = array(
    'name' => 'edit own field_organization_delegate_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_delegateemail'.
  $permissions['edit own field_organization_delegateemail'] = array(
    'name' => 'edit own field_organization_delegateemail',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_delegatephone'.
  $permissions['edit own field_organization_delegatephone'] = array(
    'name' => 'edit own field_organization_delegatephone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_leader_email'.
  $permissions['edit own field_organization_leader_email'] = array(
    'name' => 'edit own field_organization_leader_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_leader_name'.
  $permissions['edit own field_organization_leader_name'] = array(
    'name' => 'edit own field_organization_leader_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_leader_phone'.
  $permissions['edit own field_organization_leader_phone'] = array(
    'name' => 'edit own field_organization_leader_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_leader_url'.
  $permissions['edit own field_organization_leader_url'] = array(
    'name' => 'edit own field_organization_leader_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organization_pres_surname'.
  $permissions['edit own field_organization_pres_surname'] = array(
    'name' => 'edit own field_organization_pres_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_other_contact'.
  $permissions['edit own field_other_contact'] = array(
    'name' => 'edit own field_other_contact',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_phone'.
  $permissions['edit own field_phone'] = array(
    'name' => 'edit own field_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_private_address'.
  $permissions['edit own field_private_address'] = array(
    'name' => 'edit own field_private_address',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reduction_types'.
  $permissions['edit own field_reduction_types'] = array(
    'name' => 'edit own field_reduction_types',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_twitter'.
  $permissions['edit own field_twitter'] = array(
    'name' => 'edit own field_twitter',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_upload_document'.
  $permissions['edit own field_upload_document'] = array(
    'name' => 'edit own field_upload_document',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vat'.
  $permissions['edit own field_vat'] = array(
    'name' => 'edit own field_vat',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vat_number'.
  $permissions['edit own field_vat_number'] = array(
    'name' => 'edit own field_vat_number',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_comments'.
  $permissions['view field_comments'] = array(
    'name' => 'view field_comments',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_contact_email'.
  $permissions['view field_contact_email'] = array(
    'name' => 'view field_contact_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cs_expertise_area'.
  $permissions['view field_cs_expertise_area'] = array(
    'name' => 'view field_cs_expertise_area',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_expertise_areas_pres'.
  $permissions['view field_expertise_areas_pres'] = array(
    'name' => 'view field_expertise_areas_pres',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_facebook'.
  $permissions['view field_facebook'] = array(
    'name' => 'view field_facebook',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_motivation'.
  $permissions['view field_motivation'] = array(
    'name' => 'view field_motivation',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_network_name'.
  $permissions['view field_network_name'] = array(
    'name' => 'view field_network_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_network_surname'.
  $permissions['view field_network_surname'] = array(
    'name' => 'view field_network_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_address'.
  $permissions['view field_organization_address'] = array(
    'name' => 'view field_organization_address',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_email'.
  $permissions['view field_organization_del2_email'] = array(
    'name' => 'view field_organization_del2_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_exp_area'.
  $permissions['view field_organization_del2_exp_area'] = array(
    'name' => 'view field_organization_del2_exp_area',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_name'.
  $permissions['view field_organization_del2_name'] = array(
    'name' => 'view field_organization_del2_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_phone'.
  $permissions['view field_organization_del2_phone'] = array(
    'name' => 'view field_organization_del2_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_surname'.
  $permissions['view field_organization_del2_surname'] = array(
    'name' => 'view field_organization_del2_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del2_url'.
  $permissions['view field_organization_del2_url'] = array(
    'name' => 'view field_organization_del2_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_del_surname'.
  $permissions['view field_organization_del_surname'] = array(
    'name' => 'view field_organization_del_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_delegate_name'.
  $permissions['view field_organization_delegate_name'] = array(
    'name' => 'view field_organization_delegate_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_delegate_url'.
  $permissions['view field_organization_delegate_url'] = array(
    'name' => 'view field_organization_delegate_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_delegateemail'.
  $permissions['view field_organization_delegateemail'] = array(
    'name' => 'view field_organization_delegateemail',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_delegatephone'.
  $permissions['view field_organization_delegatephone'] = array(
    'name' => 'view field_organization_delegatephone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_leader_email'.
  $permissions['view field_organization_leader_email'] = array(
    'name' => 'view field_organization_leader_email',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_leader_name'.
  $permissions['view field_organization_leader_name'] = array(
    'name' => 'view field_organization_leader_name',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_leader_phone'.
  $permissions['view field_organization_leader_phone'] = array(
    'name' => 'view field_organization_leader_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_leader_url'.
  $permissions['view field_organization_leader_url'] = array(
    'name' => 'view field_organization_leader_url',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organization_pres_surname'.
  $permissions['view field_organization_pres_surname'] = array(
    'name' => 'view field_organization_pres_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_other_contact'.
  $permissions['view field_other_contact'] = array(
    'name' => 'view field_other_contact',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_phone'.
  $permissions['view field_phone'] = array(
    'name' => 'view field_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_private_address'.
  $permissions['view field_private_address'] = array(
    'name' => 'view field_private_address',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reduction_types'.
  $permissions['view field_reduction_types'] = array(
    'name' => 'view field_reduction_types',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_twitter'.
  $permissions['view field_twitter'] = array(
    'name' => 'view field_twitter',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_upload_document'.
  $permissions['view field_upload_document'] = array(
    'name' => 'view field_upload_document',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vat'.
  $permissions['view field_vat'] = array(
    'name' => 'view field_vat',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vat_number'.
  $permissions['view field_vat_number'] = array(
    'name' => 'view field_vat_number',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_comments'.
  $permissions['view own field_comments'] = array(
    'name' => 'view own field_comments',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_contact_email'.
  $permissions['view own field_contact_email'] = array(
    'name' => 'view own field_contact_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cs_expertise_area'.
  $permissions['view own field_cs_expertise_area'] = array(
    'name' => 'view own field_cs_expertise_area',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_expertise_areas_pres'.
  $permissions['view own field_expertise_areas_pres'] = array(
    'name' => 'view own field_expertise_areas_pres',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_facebook'.
  $permissions['view own field_facebook'] = array(
    'name' => 'view own field_facebook',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_motivation'.
  $permissions['view own field_motivation'] = array(
    'name' => 'view own field_motivation',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_network_name'.
  $permissions['view own field_network_name'] = array(
    'name' => 'view own field_network_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_network_surname'.
  $permissions['view own field_network_surname'] = array(
    'name' => 'view own field_network_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_address'.
  $permissions['view own field_organization_address'] = array(
    'name' => 'view own field_organization_address',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_email'.
  $permissions['view own field_organization_del2_email'] = array(
    'name' => 'view own field_organization_del2_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_exp_area'.
  $permissions['view own field_organization_del2_exp_area'] = array(
    'name' => 'view own field_organization_del2_exp_area',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_name'.
  $permissions['view own field_organization_del2_name'] = array(
    'name' => 'view own field_organization_del2_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_phone'.
  $permissions['view own field_organization_del2_phone'] = array(
    'name' => 'view own field_organization_del2_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_surname'.
  $permissions['view own field_organization_del2_surname'] = array(
    'name' => 'view own field_organization_del2_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del2_url'.
  $permissions['view own field_organization_del2_url'] = array(
    'name' => 'view own field_organization_del2_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_del_surname'.
  $permissions['view own field_organization_del_surname'] = array(
    'name' => 'view own field_organization_del_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_delegate_name'.
  $permissions['view own field_organization_delegate_name'] = array(
    'name' => 'view own field_organization_delegate_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_delegate_url'.
  $permissions['view own field_organization_delegate_url'] = array(
    'name' => 'view own field_organization_delegate_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_delegateemail'.
  $permissions['view own field_organization_delegateemail'] = array(
    'name' => 'view own field_organization_delegateemail',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_delegatephone'.
  $permissions['view own field_organization_delegatephone'] = array(
    'name' => 'view own field_organization_delegatephone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_leader_email'.
  $permissions['view own field_organization_leader_email'] = array(
    'name' => 'view own field_organization_leader_email',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_leader_name'.
  $permissions['view own field_organization_leader_name'] = array(
    'name' => 'view own field_organization_leader_name',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_leader_phone'.
  $permissions['view own field_organization_leader_phone'] = array(
    'name' => 'view own field_organization_leader_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_leader_url'.
  $permissions['view own field_organization_leader_url'] = array(
    'name' => 'view own field_organization_leader_url',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organization_pres_surname'.
  $permissions['view own field_organization_pres_surname'] = array(
    'name' => 'view own field_organization_pres_surname',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_other_contact'.
  $permissions['view own field_other_contact'] = array(
    'name' => 'view own field_other_contact',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_phone'.
  $permissions['view own field_phone'] = array(
    'name' => 'view own field_phone',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_private_address'.
  $permissions['view own field_private_address'] = array(
    'name' => 'view own field_private_address',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reduction_types'.
  $permissions['view own field_reduction_types'] = array(
    'name' => 'view own field_reduction_types',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_twitter'.
  $permissions['view own field_twitter'] = array(
    'name' => 'view own field_twitter',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_upload_document'.
  $permissions['view own field_upload_document'] = array(
    'name' => 'view own field_upload_document',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vat'.
  $permissions['view own field_vat'] = array(
    'name' => 'view own field_vat',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vat_number'.
  $permissions['view own field_vat_number'] = array(
    'name' => 'view own field_vat_number',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}

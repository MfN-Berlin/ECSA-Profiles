<?php
/**
 * @file
 * ecsa_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecsa_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citizen_science_project|profile2|individual_profile|form';
  $field_group->group_name = 'group_citizen_science_project';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'individual_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Citizen Science Projects',
    'weight' => '17',
    'children' => array(
      0 => 'field_citizen_science_hint',
      1 => 'field_cs_project_name',
      2 => 'field_cs_project_url',
      3 => 'field_cs_project_description',
      4 => 'field_cs_project_tags',
      5 => 'field_cs_project_geo_scale',
      6 => 'field_cs_project_contact',
      7 => 'field_cs_organization_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Citizen Science Projects',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-citizen-science-project field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_citizen_science_project|profile2|individual_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citizen_science_project|profile2|organization_profile|form';
  $field_group->group_name = 'group_citizen_science_project';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Citizen Science Projects',
    'weight' => '21',
    'children' => array(
      0 => 'field_citizen_science_hint',
      1 => 'field_cs_project_name',
      2 => 'field_cs_project_url',
      3 => 'field_cs_project_description',
      4 => 'field_cs_project_tags',
      5 => 'field_cs_project_geo_scale',
      6 => 'field_cs_project_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Citizen Science Projects',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-citizen-science-project field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_citizen_science_project|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|individual_profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'individual_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_phone',
      2 => 'field_twitter',
      3 => 'field_facebook',
      4 => 'field_other_contact',
      5 => 'field_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|individual_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|organization_profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_phone',
      2 => 'field_twitter',
      3 => 'field_facebook',
      4 => 'field_other_contact',
      5 => 'field_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|supporter_profile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'supporter_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_phone',
      2 => 'field_contact_email',
      3 => 'field_twitter',
      4 => 'field_facebook',
      5 => 'field_other_contact',
      6 => 'field_network_name',
      7 => 'field_network_surname',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|profile2|supporter_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate|profile2|organization_profile|form';
  $field_group->group_name = 'group_organization_delegate';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate if different from President',
    'weight' => '16',
    'children' => array(
      0 => 'field_organization_delegate_name',
      1 => 'field_organization_delegate_url',
      2 => 'field_organization_delegatephone',
      3 => 'field_organization_delegateemail',
      4 => 'field_organization_del_surname',
      5 => 'field_cs_expertise_area',
      6 => 'field_expertise_area_hint',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA delegate if different from President',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-organization-delegate field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organization_delegate|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_leader|profile2|organization_profile|form';
  $field_group->group_name = 'group_organization_leader';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'President of the organization/project leader',
    'weight' => '15',
    'children' => array(
      0 => 'field_organization_leader_name',
      1 => 'field_organization_leader_url',
      2 => 'field_organization_leader_phone',
      3 => 'field_organization_leader_email',
      4 => 'field_organization_pres_surname',
      5 => 'field_expertise_areas_hint_pres',
      6 => 'field_expertise_areas_pres',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'President of the organization/project leader',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-organization-leader field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_organization_leader|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reduction_field_group|profile2|individual_profile|form';
  $field_group->group_name = 'group_reduction_field_group';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'individual_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reduction',
    'weight' => '12',
    'children' => array(
      0 => 'field_reduction_hint',
      1 => 'field_reduction_types',
      2 => 'field_upload_hint',
      3 => 'field_upload_document',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reduction',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-reduction-field-group field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_reduction_field_group|profile2|individual_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_groups|profile2|individual_profile|form';
  $field_group->group_name = 'group_working_groups';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'individual_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA Working Groups',
    'weight' => '16',
    'children' => array(
      0 => 'field_working_group_hint',
      1 => 'field_working_groups',
      2 => 'field_working_group_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA Working Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-working-groups field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_working_groups|profile2|individual_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_groups|profile2|organization_profile|form';
  $field_group->group_name = 'group_working_groups';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA Working Groups',
    'weight' => '20',
    'children' => array(
      0 => 'field_working_group_hint',
      1 => 'field_working_groups',
      2 => 'field_working_group_new',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA Working Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-working-groups field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_working_groups|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_working_groups|profile2|supporter_profile|form';
  $field_group->group_name = 'group_working_groups';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'supporter_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA Working Groups',
    'weight' => '17',
    'children' => array(
      0 => 'field_working_groups',
      1 => 'field_working_group_new',
      2 => 'field_network_working_group_hint',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA Working Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-working-groups field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_working_groups|profile2|supporter_profile|form'] = $field_group;

  return $export;
}

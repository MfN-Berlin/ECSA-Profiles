<?php
/**
 * @file
 * ecsa_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ecsa_profiles_field_group_info() {
  $field_groups = array();

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
    'weight' => '18',
    'children' => array(
      0 => 'field_citizen_science_hint',
      1 => 'field_cs_organization_name',
      2 => 'field_cs_project_contact',
      3 => 'field_cs_project_description',
      4 => 'field_cs_project_geo_scale',
      5 => 'field_cs_project_name',
      6 => 'field_cs_project_tags',
      7 => 'field_cs_project_url',
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
  $field_groups['group_citizen_science_project|profile2|individual_profile|form'] = $field_group;

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
    'weight' => '22',
    'children' => array(
      0 => 'field_citizen_science_hint',
      1 => 'field_cs_project_contact',
      2 => 'field_cs_project_description',
      3 => 'field_cs_project_geo_scale',
      4 => 'field_cs_project_name',
      5 => 'field_cs_project_tags',
      6 => 'field_cs_project_url',
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
  $field_groups['group_citizen_science_project|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_citizen_science_project|profile2|supporter_profile|form';
  $field_group->group_name = 'group_citizen_science_project';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'supporter_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Citizen Science Projects',
    'weight' => '15',
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
        'id' => '',
        'classes' => 'group-citizen-science-project field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_citizen_science_project|profile2|supporter_profile|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_email',
      1 => 'field_facebook',
      2 => 'field_other_contact',
      3 => 'field_phone',
      4 => 'field_twitter',
      5 => 'field_link',
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
  $field_groups['group_contact|profile2|individual_profile|form'] = $field_group;

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
      0 => 'field_contact_email',
      1 => 'field_facebook',
      2 => 'field_other_contact',
      3 => 'field_phone',
      4 => 'field_twitter',
      5 => 'field_link',
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
  $field_groups['group_contact|profile2|organization_profile|form'] = $field_group;

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
      0 => 'field_contact_email',
      1 => 'field_facebook',
      2 => 'field_network_name',
      3 => 'field_network_surname',
      4 => 'field_other_contact',
      5 => 'field_phone',
      6 => 'field_twitter',
      7 => 'field_link',
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
  $field_groups['group_contact|profile2|supporter_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meber_wrap|profile2|individual_profile|member_proifile_view';
  $field_group->group_name = 'group_meber_wrap';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'individual_profile';
  $field_group->mode = 'member_proifile_view';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'member_wrap',
    'weight' => '0',
    'children' => array(
      0 => 'field_individual_name',
      1 => 'field_individual_surname',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-meber-wrap field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meber_wrap|profile2|individual_profile|member_proifile_view'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate_1|profile2|organization_profile|default';
  $field_group->group_name = 'group_organization_delegate_1';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate 1',
    'weight' => '19',
    'children' => array(
      0 => 'field_cs_expertise_area',
      1 => 'field_expertise_area_hint',
      2 => 'field_organization_del_surname',
      3 => 'field_organization_delegate_name',
      4 => 'field_organization_delegate_url',
      5 => 'field_organization_delegateemail',
      6 => 'field_organization_delegatephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization-delegate-1 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_organization_delegate_1|profile2|organization_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate_2|profile2|organization_profile|default';
  $field_group->group_name = 'group_organization_delegate_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate 2',
    'weight' => '20',
    'children' => array(
      0 => 'field_organization_del2_name',
      1 => 'field_organization_del2_surname',
      2 => 'field_organization_del2_url',
      3 => 'field_organization_del2_phone',
      4 => 'field_organization_del2_email',
      5 => 'field_organization_del2_exp_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization-delegate-2 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_organization_delegate_2|profile2|organization_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate_2|profile2|organization_profile|form';
  $field_group->group_name = 'group_organization_delegate_2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate 2',
    'weight' => '16',
    'children' => array(
      0 => 'field_organization_del2_name',
      1 => 'field_organization_del2_surname',
      2 => 'field_organization_del2_url',
      3 => 'field_organization_del2_phone',
      4 => 'field_organization_del2_email',
      5 => 'field_organization_del2_exp_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA delegate 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organization-delegate-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_organization_delegate_2|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate_3|profile2|organization_profile|default';
  $field_group->group_name = 'group_organization_delegate_3';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate 3',
    'weight' => '21',
    'children' => array(
      0 => 'field_organization_del3_name',
      1 => 'field_organization_del3_surname',
      2 => 'field_organization_del3_url',
      3 => 'field_organization_del3_phone',
      4 => 'field_organization_del3_email',
      5 => 'field_organization_del3_exp_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization-delegate-3 field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_organization_delegate_3|profile2|organization_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_delegate_3|profile2|organization_profile|form';
  $field_group->group_name = 'group_organization_delegate_3';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ECSA delegate 3',
    'weight' => '17',
    'children' => array(
      0 => 'field_organization_del3_name',
      1 => 'field_organization_del3_surname',
      2 => 'field_organization_del3_url',
      3 => 'field_organization_del3_phone',
      4 => 'field_organization_del3_email',
      5 => 'field_organization_del3_exp_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA delegate 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organization-delegate-3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_organization_delegate_3|profile2|organization_profile|form'] = $field_group;

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
    'label' => 'ECSA delegate 1',
    'weight' => '15',
    'children' => array(
      0 => 'field_cs_expertise_area',
      1 => 'field_expertise_area_hint',
      2 => 'field_organization_del_surname',
      3 => 'field_organization_delegate_name',
      4 => 'field_organization_delegate_url',
      5 => 'field_organization_delegateemail',
      6 => 'field_organization_delegatephone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA delegate 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organization-delegate field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_organization_delegate|profile2|organization_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_leader|profile2|organization_profile|default';
  $field_group->group_name = 'group_organization_leader';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'organization_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'President of the organization/project leader',
    'weight' => '18',
    'children' => array(
      0 => 'field_expertise_areas_pres',
      1 => 'field_organization_leader_email',
      2 => 'field_organization_leader_name',
      3 => 'field_organization_leader_phone',
      4 => 'field_organization_leader_url',
      5 => 'field_organization_pres_surname',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organization-leader field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_organization_leader|profile2|organization_profile|default'] = $field_group;

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
    'label' => 'ECSA main contact / President of the organization / Project leader',
    'weight' => '14',
    'children' => array(
      0 => 'field_expertise_areas_hint_pres',
      1 => 'field_expertise_areas_pres',
      2 => 'field_organization_leader_email',
      3 => 'field_organization_leader_name',
      4 => 'field_organization_leader_phone',
      5 => 'field_organization_leader_url',
      6 => 'field_organization_pres_surname',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'ECSA main contact / President of the organization / Project leader',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-organization-leader field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_organization_leader|profile2|organization_profile|form'] = $field_group;

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
    'weight' => '14',
    'children' => array(
      0 => 'field_reduction_hint',
      1 => 'field_reduction_types',
      2 => 'field_upload_document',
      3 => 'field_upload_hint',
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
  $field_groups['group_reduction_field_group|profile2|individual_profile|form'] = $field_group;

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
    'weight' => '17',
    'children' => array(
      0 => 'field_working_group_hint',
      1 => 'field_working_group_new',
      2 => 'field_working_groups',
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
  $field_groups['group_working_groups|profile2|individual_profile|form'] = $field_group;

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
    'weight' => '21',
    'children' => array(
      0 => 'field_working_group_hint',
      1 => 'field_working_group_new',
      2 => 'field_working_groups',
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
  $field_groups['group_working_groups|profile2|organization_profile|form'] = $field_group;

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
    'weight' => '14',
    'children' => array(
      0 => 'field_network_working_group_hint',
      1 => 'field_working_group_new',
      2 => 'field_working_groups',
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
  $field_groups['group_working_groups|profile2|supporter_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Details');
  t('Contact details');
  t('ECSA Working Groups');
  t('ECSA delegate 1');
  t('ECSA delegate 2');
  t('ECSA delegate 3');
  t('ECSA main contact / President of the organization / Project leader');
  t('President of the organization/project leader');
  t('Reduction');
  t('Your Citizen Science Projects');
  t('member_wrap');

  return $field_groups;
}

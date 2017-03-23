<?php
/**
 * @file
 * ecsa_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ecsa_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-individual_profile-field_account_hint'.
  $field_instances['profile2-individual_profile-field_account_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_account_hint',
    'label' => 'Account hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_citizen_science_hint'.
  $field_instances['profile2-individual_profile-field_citizen_science_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 21,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_citizen_science_hint',
    'label' => 'Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_comments'.
  $field_instances['profile2-individual_profile-field_comments'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_comments',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_contact_email'.
  $field_instances['profile2-individual_profile-field_contact_email'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_contact_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_expertise_area'.
  $field_instances['profile2-individual_profile-field_cs_expertise_area'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_expertise_area',
    'label' => 'Areas of expertise',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_organization_name'.
  $field_instances['profile2-individual_profile-field_cs_organization_name'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_organization_name',
    'label' => 'Organization running the project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_contact'.
  $field_instances['profile2-individual_profile-field_cs_project_contact'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_contact',
    'label' => 'Project social media contacts',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_description'.
  $field_instances['profile2-individual_profile-field_cs_project_description'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_description',
    'label' => 'Brief description of project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_geo_scale'.
  $field_instances['profile2-individual_profile-field_cs_project_geo_scale'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the <Ctrl> key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_geo_scale',
    'label' => 'Please indicate the approximate geographical scale of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_name'.
  $field_instances['profile2-individual_profile-field_cs_project_name'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_name',
    'label' => 'Name of Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_tags'.
  $field_instances['profile2-individual_profile-field_cs_project_tags'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the <Ctrl> key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_tags',
    'label' => 'Please choose from the following list of tags to describe the content of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_cs_project_url'.
  $field_instances['profile2-individual_profile-field_cs_project_url'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_url',
    'label' => 'Project URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_data_policy_hint'.
  $field_instances['profile2-individual_profile-field_data_policy_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_data_policy_hint',
    'label' => 'Data policy hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_eligibility_criteria'.
  $field_instances['profile2-individual_profile-field_eligibility_criteria'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please explain briefly if and how you are performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science, e.g. via funding or via communication (ECSA membership eligibility criteria). This text will help to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_eligibility_criteria',
    'label' => 'How are you performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_expertise_area_hint'.
  $field_instances['profile2-individual_profile-field_expertise_area_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 13,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_expertise_area_hint',
    'label' => 'Areas of expertise',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_facebook'.
  $field_instances['profile2-individual_profile-field_facebook'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_geofield'.
  $field_instances['profile2-individual_profile-field_geofield'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'geofield_wkt',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_geofield',
    'label' => 'geofield',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_organization_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'biasing' => array(
              'bounds' => '',
              'components' => '',
              'region' => '',
            ),
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_home_address_geofield'.
  $field_instances['profile2-individual_profile-field_home_address_geofield'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_home_address_geofield',
    'label' => 'Home Address Geofield',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_private_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'biasing' => array(
              'bounds' => '',
              'components' => '',
              'region' => '',
            ),
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_individual_name'.
  $field_instances['profile2-individual_profile-field_individual_name'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_individual_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_individual_surname'.
  $field_instances['profile2-individual_profile-field_individual_surname'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_individual_surname',
    'label' => 'Surname',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_link'.
  $field_instances['profile2-individual_profile-field_link'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_link',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_membership_agreement'.
  $field_instances['profile2-individual_profile-field_membership_agreement'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_membership_agreement',
    'label' => 'ECSA Membership Agreement',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_membership_agreement_hint'.
  $field_instances['profile2-individual_profile-field_membership_agreement_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_membership_agreement_hint',
    'label' => 'Agreement hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_motivation'.
  $field_instances['profile2-individual_profile-field_motivation'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text is for ECSA to assess your membership application, it will not be publicly displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_motivation',
    'label' => 'Please indicate your motivation to join ECSA.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_occupation_type'.
  $field_instances['profile2-individual_profile-field_occupation_type'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_occupation_type',
    'label' => 'Please select your type of occupation',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_occupation_type_other'.
  $field_instances['profile2-individual_profile-field_occupation_type_other'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_occupation_type_other',
    'label' => 'If other, please specify below.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_org_affiliation_hint'.
  $field_instances['profile2-individual_profile-field_org_affiliation_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_org_affiliation_hint',
    'label' => 'Organizational affiliation hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_organisational_affiliation'.
  $field_instances['profile2-individual_profile-field_organisational_affiliation'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organisational_affiliation',
    'label' => 'Organizational affiliation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_organization_address'.
  $field_instances['profile2-individual_profile-field_organization_address'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you enter an address here, your profile will be displayed publicly on the ECSA community map (as a dot) and on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators.

For this, we need a country, postal code, and city (depending on the country also a provice). The data will be geocoded and for this purpose sent to Google and back. For data security reasons, you may want to consider to not use your home address here, but rather an institution you\'re affiliated with or the city center, for instance. You can also insert N/A for the street. 

If you do not enter an address here, your profile will not be visible at the ECSA community map, neither in the list view when sorted by country, no map on your profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_address',
    'label' => 'Address for Maps on ECSA Website',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_organization_logo'.
  $field_instances['profile2-individual_profile-field_organization_logo'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => 'If you like, you can upload a picture of you here. Otherwhise the default ECSA member logo will be used. If you choose to upload a picture, please provide a high resolution image. 
The larger, the better: 300x200 pixel & 144 dpi are recommended as minumum – we want people to have fun when they look at it with an iPhone or other retina displays.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_logo',
    'label' => 'Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 597,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '8 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_other_contact'.
  $field_instances['profile2-individual_profile-field_other_contact'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_other_contact',
    'label' => 'Other contact',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_phone'.
  $field_instances['profile2-individual_profile-field_phone'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_private_address'.
  $field_instances['profile2-individual_profile-field_private_address'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide your real address here. It will be used internally for ECSA membership administration, e.g. to send you a receipt for the membership fees. The address you enter here will only be visible to site administrators and will not be used on any map.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 3,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_private_address',
    'label' => 'Address for ECSA Membership Administration',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_reduction_hint'.
  $field_instances['profile2-individual_profile-field_reduction_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 30,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 35,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_reduction_hint',
    'label' => 'Reduction on membership fees',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_reduction_types'.
  $field_instances['profile2-individual_profile-field_reduction_types'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_reduction_types',
    'label' => 'Reduction types',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_twitter'.
  $field_instances['profile2-individual_profile-field_twitter'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_upload_document'.
  $field_instances['profile2-individual_profile-field_upload_document'] = array(
    'bundle' => 'individual_profile',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'file_default',
        'weight' => 33,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'file_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_upload_document',
    'label' => 'Upload document',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '5 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'profile2-individual_profile-field_upload_hint'.
  $field_instances['profile2-individual_profile-field_upload_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 32,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 37,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_upload_hint',
    'label' => 'Upload',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_working_group_hint'.
  $field_instances['profile2-individual_profile-field_working_group_hint'] = array(
    'bundle' => 'individual_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 18,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_working_group_hint',
    'label' => 'ECSA Working Group Hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_working_group_new'.
  $field_instances['profile2-individual_profile-field_working_group_new'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_working_group_new',
    'label' => 'Suggest new Working Group on',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'profile2-individual_profile-field_working_groups'.
  $field_instances['profile2-individual_profile-field_working_groups'] = array(
    'bundle' => 'individual_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_working_groups',
    'label' => 'Working groups',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_account_hint'.
  $field_instances['profile2-organization_profile-field_account_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 1,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_account_hint',
    'label' => 'Account hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_citizen_science_hint'.
  $field_instances['profile2-organization_profile-field_citizen_science_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 29,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_citizen_science_hint',
    'label' => 'Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_comments'.
  $field_instances['profile2-organization_profile-field_comments'] = array(
    'bundle' => 'organization_profile',
    'default_value' => array(
      0 => array(
        'value' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_comments',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_contact_email'.
  $field_instances['profile2-organization_profile-field_contact_email'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_contact_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_expertise_area'.
  $field_instances['profile2-organization_profile-field_cs_expertise_area'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_expertise_area',
    'label' => 'Areas of expertise',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_contact'.
  $field_instances['profile2-organization_profile-field_cs_project_contact'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_contact',
    'label' => 'Project social media contacts',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_description'.
  $field_instances['profile2-organization_profile-field_cs_project_description'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_description',
    'label' => 'Brief description of project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_geo_scale'.
  $field_instances['profile2-organization_profile-field_cs_project_geo_scale'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the Ctrl key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_geo_scale',
    'label' => 'Please indicate the approximate geographical scale of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_name'.
  $field_instances['profile2-organization_profile-field_cs_project_name'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_name',
    'label' => 'Name of Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_tags'.
  $field_instances['profile2-organization_profile-field_cs_project_tags'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the Ctrl key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 33,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_tags',
    'label' => 'Please choose from the following list of tags to describe the content of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_cs_project_url'.
  $field_instances['profile2-organization_profile-field_cs_project_url'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_url',
    'label' => 'Project URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_data_policy_hint'.
  $field_instances['profile2-organization_profile-field_data_policy_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_data_policy_hint',
    'label' => 'Data policy hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_delegates_hint'.
  $field_instances['profile2-organization_profile-field_delegates_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 57,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_delegates_hint',
    'label' => 'Delegates hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_eligibility_criteria'.
  $field_instances['profile2-organization_profile-field_eligibility_criteria'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please explain briefly if and how you are performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science, e.g. via funding or via communication (ECSA membership eligibility criteria). This text will help us to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_eligibility_criteria',
    'label' => 'How are you performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_expertise_areas_pres'.
  $field_instances['profile2-organization_profile-field_expertise_areas_pres'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_expertise_areas_pres',
    'label' => 'Areas of Expertise',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_facebook'.
  $field_instances['profile2-organization_profile-field_facebook'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_geofield'.
  $field_instances['profile2-organization_profile-field_geofield'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'leaflet',
        'settings' => array(
          'height' => 200,
          'icon' => array(
            'html' => '',
            'htmlClass' => '',
            'iconAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'iconImageStyle' => '',
            'iconSize' => array(
              'x' => '',
              'y' => '',
            ),
            'iconType' => 'marker',
            'iconUrl' => '',
            'popupAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowUrl' => '',
          ),
          'leaflet_map' => 'OSM Mapnik',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'popup' => array(
            'show' => 0,
            'text' => '',
          ),
          'vector_display' => array(
            'clickable' => 0,
            'color' => '',
            'dashArray' => '',
            'fill' => 0,
            'fillColor' => '',
            'fillOpacity' => '',
            'opacity' => '',
            'stroke' => 0,
            'stroke_override' => 0,
            'weight' => '',
          ),
          'zoom' => array(
            'initialZoom' => 6,
            'maxZoom' => 10,
            'minZoom' => 2,
            'scrollWheelZoom' => 1,
          ),
        ),
        'type' => 'geofield_leaflet',
        'weight' => 4,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'geofield_wkt',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_geofield',
    'label' => 'geofield',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_organization_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_legal_status'.
  $field_instances['profile2-organization_profile-field_legal_status'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_legal_status',
    'label' => 'Legal status',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_link'.
  $field_instances['profile2-organization_profile-field_link'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_link',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_membership_agreement'.
  $field_instances['profile2-organization_profile-field_membership_agreement'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_membership_agreement',
    'label' => 'ECSA Membership Agreement',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_membership_agreement_hint'.
  $field_instances['profile2-organization_profile-field_membership_agreement_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'page' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_membership_agreement_hint',
    'label' => 'Agreement hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_motivation'.
  $field_instances['profile2-organization_profile-field_motivation'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text is for ECSA to assess your membership application, it will not be publicly displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_motivation',
    'label' => 'Please indicate your motivation to join ECSA.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_address'.
  $field_instances['profile2-organization_profile-field_organization_address'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The address you enter here will be used for membership administration and for displaying your profile publicly on the ECSA community map (as a dot) as well as on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 3,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_address',
    'label' => 'Address of the organization/project',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'DE',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_email'.
  $field_instances['profile2-organization_profile-field_organization_del2_email'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 55,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 55,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_exp_area'.
  $field_instances['profile2-organization_profile-field_organization_del2_exp_area'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 56,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 56,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_exp_area',
    'label' => 'Areas of expertise',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_name'.
  $field_instances['profile2-organization_profile-field_organization_del2_name'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 51,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_phone'.
  $field_instances['profile2-organization_profile-field_organization_del2_phone'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 54,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 54,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_surname'.
  $field_instances['profile2-organization_profile-field_organization_del2_surname'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 52,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 52,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_surname',
    'label' => 'Surname',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del2_url'.
  $field_instances['profile2-organization_profile-field_organization_del2_url'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 53,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 53,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del2_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_del_surname'.
  $field_instances['profile2-organization_profile-field_organization_del_surname'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_del_surname',
    'label' => 'Surname',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_delegate_name'.
  $field_instances['profile2-organization_profile-field_organization_delegate_name'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_delegate_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_delegate_url'.
  $field_instances['profile2-organization_profile-field_organization_delegate_url'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_delegate_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_delegateemail'.
  $field_instances['profile2-organization_profile-field_organization_delegateemail'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_delegateemail',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_delegatephone'.
  $field_instances['profile2-organization_profile-field_organization_delegatephone'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_delegatephone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_goals'.
  $field_instances['profile2-organization_profile-field_organization_goals'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_goals',
    'label' => 'Please indicate the mandate/goals/activities of your organization/project.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_leader_email'.
  $field_instances['profile2-organization_profile-field_organization_leader_email'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_leader_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_leader_name'.
  $field_instances['profile2-organization_profile-field_organization_leader_name'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_leader_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_leader_phone'.
  $field_instances['profile2-organization_profile-field_organization_leader_phone'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_leader_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_leader_url'.
  $field_instances['profile2-organization_profile-field_organization_leader_url'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_leader_url',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_logo'.
  $field_instances['profile2-organization_profile-field_organization_logo'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => 'Please provide a high resolution file. The larger, the better: 300x200 pixel & 144 dpi are recommended as minumum – we want people to have fun when they look at it with an iPhone or other retina displays.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'image',
        'weight' => 17,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 1,
          ),
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'image',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 487,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '8 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_name'.
  $field_instances['profile2-organization_profile-field_organization_name'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_name',
    'label' => 'Name of the organization/project in the original language',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_name_en'.
  $field_instances['profile2-organization_profile-field_organization_name_en'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_name_en',
    'label' => 'Name of the organization/project in English',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_pres_surname'.
  $field_instances['profile2-organization_profile-field_organization_pres_surname'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_pres_surname',
    'label' => 'Surname',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_type'.
  $field_instances['profile2-organization_profile-field_organization_type'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_type',
    'label' => 'Please select the type of your organization/project',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_organization_type_other'.
  $field_instances['profile2-organization_profile-field_organization_type_other'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_type_other',
    'label' => 'If other, please specify below',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_other_contact'.
  $field_instances['profile2-organization_profile-field_other_contact'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_other_contact',
    'label' => 'Other contact',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_phone'.
  $field_instances['profile2-organization_profile-field_phone'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_twitter'.
  $field_instances['profile2-organization_profile-field_twitter'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_vat'.
  $field_instances['profile2-organization_profile-field_vat'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_vat',
    'label' => 'Please indicate your organization’s/projects VAT number, if applicable.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'profile2-organization_profile-field_vat_number'.
  $field_instances['profile2-organization_profile-field_vat_number'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_vat_number',
    'label' => 'VAT Number',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_working_group_hint'.
  $field_instances['profile2-organization_profile-field_working_group_hint'] = array(
    'bundle' => 'organization_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 26,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_working_group_hint',
    'label' => 'ECSA Working Group Hint',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_working_group_new'.
  $field_instances['profile2-organization_profile-field_working_group_new'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_working_group_new',
    'label' => 'Suggest new Working Group on',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'profile2-organization_profile-field_working_groups'.
  $field_instances['profile2-organization_profile-field_working_groups'] = array(
    'bundle' => 'organization_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'member_proifile_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'page' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_working_groups',
    'label' => 'Working groups',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_account_hint'.
  $field_instances['profile2-supporter_profile-field_account_hint'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_account_hint',
    'label' => 'Account hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_citizen_science_hint'.
  $field_instances['profile2-supporter_profile-field_citizen_science_hint'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'markup_default',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_citizen_science_hint',
    'label' => 'Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_comments'.
  $field_instances['profile2-supporter_profile-field_comments'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_comments',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_contact_email'.
  $field_instances['profile2-supporter_profile-field_contact_email'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_contact_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_cs_project_contact'.
  $field_instances['profile2-supporter_profile-field_cs_project_contact'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_contact',
    'label' => 'Project social media contacts',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_cs_project_description'.
  $field_instances['profile2-supporter_profile-field_cs_project_description'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_description',
    'label' => 'Brief description of project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_cs_project_geo_scale'.
  $field_instances['profile2-supporter_profile-field_cs_project_geo_scale'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the Ctrl key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_geo_scale',
    'label' => 'Please indicate the approximate geographical scale of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_cs_project_name'.
  $field_instances['profile2-supporter_profile-field_cs_project_name'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_name',
    'label' => 'Name of Citizen Science Project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_cs_project_tags'.
  $field_instances['profile2-supporter_profile-field_cs_project_tags'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hold down the Ctrl key while selecting multiple items.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_tags',
    'label' => 'Please choose from the following list of tags to describe the content of the project.',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_cs_project_url'.
  $field_instances['profile2-supporter_profile-field_cs_project_url'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_cs_project_url',
    'label' => 'Project URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_data_policy_hint'.
  $field_instances['profile2-supporter_profile-field_data_policy_hint'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_data_policy_hint',
    'label' => 'Data policy hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_eligibility_criteria'.
  $field_instances['profile2-supporter_profile-field_eligibility_criteria'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please explain briefly if and how you are supporting the idea of citizen science through various channels or activities (ECSA network eligibility criteria). This text will help to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_eligibility_criteria',
    'label' => 'How are you supporting the idea of citizen science through various channels or activities?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_facebook'.
  $field_instances['profile2-supporter_profile-field_facebook'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_facebook',
    'label' => 'Facebook',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_geofield'.
  $field_instances['profile2-supporter_profile-field_geofield'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'leaflet',
        'settings' => array(
          'height' => 200,
          'icon' => array(
            'html' => '',
            'htmlClass' => '',
            'iconAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'iconImageStyle' => '',
            'iconSize' => array(
              'x' => '',
              'y' => '',
            ),
            'iconType' => 'marker',
            'iconUrl' => '',
            'popupAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowUrl' => '',
          ),
          'leaflet_map' => 'OSM Mapnik',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'popup' => array(
            'show' => 0,
            'text' => '',
          ),
          'vector_display' => array(
            'clickable' => 0,
            'color' => '',
            'dashArray' => '',
            'fill' => 0,
            'fillColor' => '',
            'fillOpacity' => '',
            'opacity' => '',
            'stroke' => 0,
            'stroke_override' => 0,
            'weight' => '',
          ),
          'zoom' => array(
            'initialZoom' => 6,
            'maxZoom' => 10,
            'minZoom' => 2,
            'scrollWheelZoom' => 1,
          ),
        ),
        'type' => 'geofield_leaflet',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_geofield',
    'label' => 'geofield',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geocoder',
      'settings' => array(
        'delta_handling' => 'default',
        'geocoder_field' => 'field_organization_address',
        'geocoder_handler' => 'google',
        'handler_settings' => array(
          'google' => array(
            'all_results' => 0,
            'biasing' => array(
              'bounds' => '',
              'components' => '',
              'region' => '',
            ),
            'geometry_type' => 'point',
            'reject_results' => array(
              'APPROXIMATE' => 0,
              'GEOMETRIC_CENTER' => 0,
              'RANGE_INTERPOLATED' => 0,
              'ROOFTOP' => 0,
            ),
          ),
        ),
      ),
      'type' => 'geocoder',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_legal_status'.
  $field_instances['profile2-supporter_profile-field_legal_status'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_legal_status',
    'label' => 'Legal status',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_link'.
  $field_instances['profile2-supporter_profile-field_link'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_link',
    'label' => 'URL',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_motivation'.
  $field_instances['profile2-supporter_profile-field_motivation'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text is for ECSA to assess your membership application, it will not be publicly displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_motivation',
    'label' => 'Please indicate your motivation to join the ECSA network as a supporter.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_network_name'.
  $field_instances['profile2-supporter_profile-field_network_name'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_network_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_network_surname'.
  $field_instances['profile2-supporter_profile-field_network_surname'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_network_surname',
    'label' => 'Surname',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_network_working_group_hint'.
  $field_instances['profile2-supporter_profile-field_network_working_group_hint'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_network_working_group_hint',
    'label' => 'Network Working Group Hint',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_address'.
  $field_instances['profile2-supporter_profile-field_organization_address'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The address you enter here will be used for membership administration and for displaying your profile publicly on the ECSA community map (as a dot) as well as on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_address',
    'label' => 'Address of the organization/project',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_goals'.
  $field_instances['profile2-supporter_profile-field_organization_goals'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_goals',
    'label' => 'Please indicate the mandate/goals/activities of your organization/project.',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_logo'.
  $field_instances['profile2-supporter_profile-field_organization_logo'] = array(
    'bundle' => 'supporter_profile',
    'deleted' => 0,
    'description' => 'Please provide a high resolution file. The larger, the better: 300x200 pixel & 144 dpi are recommended as minumum – we want people to have fun when they look at it with an iPhone or other retina displays.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'image',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_logo',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 488,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '8 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => 0,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_name'.
  $field_instances['profile2-supporter_profile-field_organization_name'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_name',
    'label' => 'Name of the organization/project in the original language',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_name_en'.
  $field_instances['profile2-supporter_profile-field_organization_name_en'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_name_en',
    'label' => 'Name of the organization/project in English',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_type'.
  $field_instances['profile2-supporter_profile-field_organization_type'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_type',
    'label' => 'Please select the type of your organization/project',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_organization_type_other'.
  $field_instances['profile2-supporter_profile-field_organization_type_other'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_organization_type_other',
    'label' => 'If other, please specify below',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_other_contact'.
  $field_instances['profile2-supporter_profile-field_other_contact'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_other_contact',
    'label' => 'Other contact',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_phone'.
  $field_instances['profile2-supporter_profile-field_phone'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_twitter'.
  $field_instances['profile2-supporter_profile-field_twitter'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This information will only be displayed for other ECSA members and supporters who are logged in with their account.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'profile2-supporter_profile-field_working_group_new'.
  $field_instances['profile2-supporter_profile-field_working_group_new'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_working_group_new',
    'label' => 'Suggest new Working Group on',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'profile2-supporter_profile-field_working_groups'.
  $field_instances['profile2-supporter_profile-field_working_groups'] = array(
    'bundle' => 'supporter_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_working_groups',
    'label' => 'Working groups',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Account hint');
  t('Address for ECSA Membership Administration');
  t('Address for Maps on ECSA Website');
  t('Address of the organization/project');
  t('Agreement hint');
  t('Areas of Expertise');
  t('Areas of expertise');
  t('Brief description of project');
  t('Citizen Science Project');
  t('Comments');
  t('Data policy hint');
  t('Delegates hint');
  t('ECSA Membership Agreement');
  t('ECSA Working Group Hint');
  t('Email');
  t('Facebook');
  t('First name');
  t('Hold down the <Ctrl> key while selecting multiple items.');
  t('Hold down the Ctrl key while selecting multiple items.');
  t('Home Address Geofield');
  t('How are you performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science?');
  t('How are you supporting the idea of citizen science through various channels or activities?');
  t('If other, please specify below');
  t('If other, please specify below.');
  t('If you enter an address here, your profile will be displayed publicly on the ECSA community map (as a dot) and on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators.

For this, we need a country, postal code, and city (depending on the country also a provice). The data will be geocoded and for this purpose sent to Google and back. For data security reasons, you may want to consider to not use your home address here, but rather an institution you\'re affiliated with or the city center, for instance. You can also insert N/A for the street. 

If you do not enter an address here, your profile will not be visible at the ECSA community map, neither in the list view when sorted by country, no map on your profile.');
  t('If you like, you can upload a picture of you here. Otherwhise the default ECSA member logo will be used. If you choose to upload a picture, please provide a high resolution image. 
The larger, the better: 300x200 pixel & 144 dpi are recommended as minumum – we want people to have fun when they look at it with an iPhone or other retina displays.');
  t('Legal status');
  t('Logo');
  t('Name of Citizen Science Project');
  t('Name of the organization/project in English');
  t('Name of the organization/project in the original language');
  t('Network Working Group Hint');
  t('Organization running the project');
  t('Organizational affiliation');
  t('Organizational affiliation hint');
  t('Other contact');
  t('Phone');
  t('Picture');
  t('Please choose from the following list of tags to describe the content of the project.');
  t('Please explain briefly if and how you are performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science, e.g. via funding or via communication (ECSA membership eligibility criteria). This text will help to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.');
  t('Please explain briefly if and how you are performing research on Citizen Science, taking part in Citizen Science activities and/or supporting Citizen Science, e.g. via funding or via communication (ECSA membership eligibility criteria). This text will help us to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.');
  t('Please explain briefly if and how you are supporting the idea of citizen science through various channels or activities (ECSA network eligibility criteria). This text will help to assess your membership application and will inform others on your activities. It will be publicly displayed on your profile once your membership has been accepted.');
  t('Please indicate the approximate geographical scale of the project.');
  t('Please indicate the mandate/goals/activities of your organization/project.');
  t('Please indicate your motivation to join ECSA.');
  t('Please indicate your motivation to join the ECSA network as a supporter.');
  t('Please indicate your organization’s/projects VAT number, if applicable.');
  t('Please provide a high resolution file. The larger, the better: 300x200 pixel & 144 dpi are recommended as minumum – we want people to have fun when they look at it with an iPhone or other retina displays.');
  t('Please provide your real address here. It will be used internally for ECSA membership administration, e.g. to send you a receipt for the membership fees. The address you enter here will only be visible to site administrators and will not be used on any map.');
  t('Please select the type of your organization/project');
  t('Please select your type of occupation');
  t('Project URL');
  t('Project social media contacts');
  t('Reduction on membership fees');
  t('Reduction types');
  t('Suggest new Working Group on');
  t('Surname');
  t('The address you enter here will be used for membership administration and for displaying your profile publicly on the ECSA community map (as a dot) as well as on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators.');
  t('The address you enter here will be used for membership administration and for displaying your profile publicly on the ECSA community map (as a dot) as well as on the list view when sorted by country. A small map will also show up on your profile page. Your written address will only be visible to site administrators. ');
  t('This information will not be publicly displayed on the ECSA website and only be visible to the ECSA administration.');
  t('This information will only be displayed for other ECSA members and supporters who are logged in with their account.');
  t('This text is for ECSA to assess your membership application, it will not be publicly displayed.');
  t('Twitter');
  t('URL');
  t('Upload');
  t('Upload document');
  t('VAT Number');
  t('Working groups');
  t('geofield');

  return $field_instances;
}

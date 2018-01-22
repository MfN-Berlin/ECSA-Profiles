<?php
/**
 * @file
 * ecsa_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ecsa_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ecsa_member_individual_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'ECSA Member Individual List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ECSA Member Individual List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'uid' => 'uid',
    'mail' => 'mail',
    'type' => 'type',
    'field_individual_name' => 'field_individual_name',
    'field_organization_leader_name' => 'field_organization_leader_name',
    'field_network_name' => 'field_network_name',
    'field_network_surname' => 'field_network_surname',
    'field_organization_pres_surname' => 'field_organization_pres_surname',
    'field_individual_surname' => 'field_individual_surname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_pres_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_individual_name']['id'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['table'] = 'field_data_field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['field'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_individual_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_individual_surname']['id'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['table'] = 'field_data_field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['field'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Address */
  $handler->display->display_options['fields']['field_private_address']['id'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['table'] = 'field_data_field_private_address';
  $handler->display->display_options['fields']['field_private_address']['field'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['ui_name'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['label'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_private_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Please select your type of occupation */
  $handler->display->display_options['fields']['field_occupation_type']['id'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['table'] = 'field_data_field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['field'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['label'] = '';
  $handler->display->display_options['fields']['field_occupation_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_occupation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Occupation */
  $handler->display->display_options['fields']['field_occupation_type_other']['id'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['table'] = 'field_data_field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['field'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['ui_name'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['label'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['empty'] = '[field_occupation_type]';
  $handler->display->display_options['fields']['field_occupation_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organizational affiliation */
  $handler->display->display_options['fields']['field_organisational_affiliation']['id'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['table'] = 'field_data_field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['field'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['ui_name'] = 'Organizational affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Areas of expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Reduction types */
  $handler->display->display_options['fields']['field_reduction_types']['id'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['table'] = 'field_data_field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['field'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Organization */
  $handler->display->display_options['fields']['field_cs_organization_name']['id'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['table'] = 'field_data_field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['field'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['ui_name'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['label'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Sort criterion: Contact Surname */
  $handler->display->display_options['sorts']['field_individual_surname_value']['id'] = 'field_individual_surname_value';
  $handler->display->display_options['sorts']['field_individual_surname_value']['table'] = 'field_data_field_individual_surname';
  $handler->display->display_options['sorts']['field_individual_surname_value']['field'] = 'field_individual_surname_value';
  $handler->display->display_options['sorts']['field_individual_surname_value']['ui_name'] = 'Contact Surname';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_profile' => 'individual_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'url' => 'url',
    'field_individual_name' => 'field_individual_name',
    'field_individual_surname' => 'field_individual_surname',
    'field_private_address' => 'field_private_address',
    'field_link' => 'field_link',
    'field_phone' => 'field_phone',
    'field_contact_email' => 'field_contact_email',
    'field_twitter' => 'field_twitter',
    'field_facebook' => 'field_facebook',
    'field_other_contact' => 'field_other_contact',
    'field_occupation_type' => 'field_occupation_type',
    'field_occupation_type_other' => 'field_occupation_type_other',
    'field_organisational_affiliation' => 'field_organisational_affiliation',
    'field_cs_expertise_area' => 'field_cs_expertise_area',
    'field_reduction_types' => 'field_reduction_types',
    'field_motivation' => 'field_motivation',
    'field_eligibility_criteria' => 'field_eligibility_criteria',
    'field_cs_project_name' => 'field_cs_project_name',
    'field_cs_project_url' => 'field_cs_project_url',
    'field_cs_organization_name' => 'field_cs_organization_name',
    'field_cs_project_description' => 'field_cs_project_description',
    'field_cs_project_tags' => 'field_cs_project_tags',
    'field_cs_project_geo_scale' => 'field_cs_project_geo_scale',
    'field_cs_project_contact' => 'field_cs_project_contact',
    'field_comments' => 'field_comments',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_private_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_facebook' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_occupation_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_occupation_type_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisational_affiliation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_expertise_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reduction_types' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_motivation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_eligibility_criteria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_organization_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_geo_scale' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_individual_name']['id'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['table'] = 'field_data_field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['field'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_individual_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_individual_surname']['id'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['table'] = 'field_data_field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['field'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Address */
  $handler->display->display_options['fields']['field_private_address']['id'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['table'] = 'field_data_field_private_address';
  $handler->display->display_options['fields']['field_private_address']['field'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['ui_name'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['label'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_private_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Please select your type of occupation */
  $handler->display->display_options['fields']['field_occupation_type']['id'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['table'] = 'field_data_field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['field'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['label'] = '';
  $handler->display->display_options['fields']['field_occupation_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_occupation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Occupation */
  $handler->display->display_options['fields']['field_occupation_type_other']['id'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['table'] = 'field_data_field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['field'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['ui_name'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['label'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['empty'] = '[field_occupation_type]';
  $handler->display->display_options['fields']['field_occupation_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organizational affiliation */
  $handler->display->display_options['fields']['field_organisational_affiliation']['id'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['table'] = 'field_data_field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['field'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['ui_name'] = 'Organizational affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Areas of expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Reduction types */
  $handler->display->display_options['fields']['field_reduction_types']['id'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['table'] = 'field_data_field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['field'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_motivation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Organization */
  $handler->display->display_options['fields']['field_cs_organization_name']['id'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['table'] = 'field_data_field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['field'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['ui_name'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['label'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_profile' => 'individual_profile',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_individual_name' => 'field_individual_name',
    'field_individual_surname' => 'field_individual_surname',
  );
  $handler->display->display_options['path'] = 'admin/people/export/individual';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export Individual Members';
  $handler->display->display_options['menu']['description'] = 'Export ECSA Individual Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download the ECSA Member Individual list in CSV format';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ecsa_member_individual_list.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_individual_name']['id'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['table'] = 'field_data_field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['field'] = 'field_individual_name';
  $handler->display->display_options['fields']['field_individual_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_individual_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_individual_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_individual_surname']['id'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['table'] = 'field_data_field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['field'] = 'field_individual_surname';
  $handler->display->display_options['fields']['field_individual_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_individual_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_individual_surname']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_individual_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Address */
  $handler->display->display_options['fields']['field_private_address']['id'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['table'] = 'field_data_field_private_address';
  $handler->display->display_options['fields']['field_private_address']['field'] = 'field_private_address';
  $handler->display->display_options['fields']['field_private_address']['ui_name'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['label'] = 'Contact Address';
  $handler->display->display_options['fields']['field_private_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_private_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_private_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Please select your type of occupation */
  $handler->display->display_options['fields']['field_occupation_type']['id'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['table'] = 'field_data_field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['field'] = 'field_occupation_type';
  $handler->display->display_options['fields']['field_occupation_type']['label'] = '';
  $handler->display->display_options['fields']['field_occupation_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_occupation_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Occupation */
  $handler->display->display_options['fields']['field_occupation_type_other']['id'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['table'] = 'field_data_field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['field'] = 'field_occupation_type_other';
  $handler->display->display_options['fields']['field_occupation_type_other']['ui_name'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['label'] = 'Occupation';
  $handler->display->display_options['fields']['field_occupation_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_occupation_type_other']['empty'] = '[field_occupation_type]';
  $handler->display->display_options['fields']['field_occupation_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organizational affiliation */
  $handler->display->display_options['fields']['field_organisational_affiliation']['id'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['table'] = 'field_data_field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['field'] = 'field_organisational_affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['ui_name'] = 'Organizational affiliation';
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organisational_affiliation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Areas of expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Profile: Reduction types */
  $handler->display->display_options['fields']['field_reduction_types']['id'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['table'] = 'field_data_field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['field'] = 'field_reduction_types';
  $handler->display->display_options['fields']['field_reduction_types']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_reduction_types']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Organization */
  $handler->display->display_options['fields']['field_cs_organization_name']['id'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['table'] = 'field_data_field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['field'] = 'field_cs_organization_name';
  $handler->display->display_options['fields']['field_cs_organization_name']['ui_name'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['label'] = 'CS Project Organization';
  $handler->display->display_options['fields']['field_cs_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/people/export/individual/download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['ecsa_member_individual_list'] = array(
    t('Master'),
    t('ECSA Member Individual List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('Username'),
    t('Email'),
    t('Profile'),
    t('View Profile'),
    t('Contact First Name'),
    t('Contact Surname'),
    t('Contact Address'),
    t('Contact URL'),
    t('Contact Phone'),
    t('Contact Email'),
    t('Contact Twitter'),
    t('Contact Facebook'),
    t('Contact Other'),
    t('Occupation'),
    t('[field_occupation_type]'),
    t('Organizational affiliation'),
    t('Areas of expertise'),
    t('Reduction types'),
    t('Motivation'),
    t('Supporting Citizen Science'),
    t('CS Project Name'),
    t('CS Project URL'),
    t('CS Project Organization'),
    t('CS Project Description'),
    t('CS Project Tags'),
    t('CS Project Geographical Scale'),
    t('CS Project Social'),
    t('Comments'),
    t('Page'),
    t('Contact Name'),
    t('Data export'),
  );
  $export['ecsa_member_individual_list'] = $view;

  $view = new view();
  $view->name = 'ecsa_member_organization_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'ECSA Member Organization List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ECSA Member Organization List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'uid' => 'uid',
    'mail' => 'mail',
    'type' => 'type',
    'field_individual_name' => 'field_individual_name',
    'field_organization_leader_name' => 'field_organization_leader_name',
    'field_network_name' => 'field_network_name',
    'field_network_surname' => 'field_network_surname',
    'field_organization_pres_surname' => 'field_organization_pres_surname',
    'field_individual_surname' => 'field_individual_surname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_pres_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT */
  $handler->display->display_options['fields']['field_vat']['id'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['table'] = 'field_data_field_vat';
  $handler->display->display_options['fields']['field_vat']['field'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['ui_name'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['label'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT Number */
  $handler->display->display_options['fields']['field_vat_number']['id'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['table'] = 'field_data_field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['field'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['ui_name'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['label'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President First Name */
  $handler->display->display_options['fields']['field_organization_leader_name']['id'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['table'] = 'field_data_field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['field'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['ui_name'] = 'President First Name';
  $handler->display->display_options['fields']['field_organization_leader_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Surname */
  $handler->display->display_options['fields']['field_organization_pres_surname']['id'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['table'] = 'field_data_field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['field'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['ui_name'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['label'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President URL */
  $handler->display->display_options['fields']['field_organization_leader_url']['id'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['table'] = 'field_data_field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['field'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['ui_name'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['label'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Phone */
  $handler->display->display_options['fields']['field_organization_leader_phone']['id'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['table'] = 'field_data_field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['field'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['ui_name'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['label'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Email */
  $handler->display->display_options['fields']['field_organization_leader_email']['id'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['table'] = 'field_data_field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['field'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['ui_name'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['label'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Areas of Expertise */
  $handler->display->display_options['fields']['field_expertise_areas_pres']['id'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['table'] = 'field_data_field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['field'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['ui_name'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['label'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 First Name */
  $handler->display->display_options['fields']['field_organization_delegate_name']['id'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['table'] = 'field_data_field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['field'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['ui_name'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['label'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Surname */
  $handler->display->display_options['fields']['field_organization_del_surname']['id'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['table'] = 'field_data_field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['field'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['ui_name'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['label'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 URL */
  $handler->display->display_options['fields']['field_organization_delegate_url']['id'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['table'] = 'field_data_field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['field'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['ui_name'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['label'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Phone */
  $handler->display->display_options['fields']['field_organization_delegatephone']['id'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['table'] = 'field_data_field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['field'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['ui_name'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['label'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Email */
  $handler->display->display_options['fields']['field_organization_delegateemail']['id'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['table'] = 'field_data_field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['field'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['ui_name'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['label'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Areas of Expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['ui_name'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['label'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 First Name */
  $handler->display->display_options['fields']['field_organization_del2_name']['id'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['table'] = 'field_data_field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['field'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['ui_name'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['label'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Surname */
  $handler->display->display_options['fields']['field_organization_del2_surname']['id'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['table'] = 'field_data_field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['field'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['ui_name'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['label'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 URL */
  $handler->display->display_options['fields']['field_organization_del2_url']['id'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['table'] = 'field_data_field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['field'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['ui_name'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['label'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Phone */
  $handler->display->display_options['fields']['field_organization_del2_phone']['id'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['table'] = 'field_data_field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['field'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['ui_name'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['label'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Email */
  $handler->display->display_options['fields']['field_organization_del2_email']['id'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['table'] = 'field_data_field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['field'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['ui_name'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['label'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Areas of Expertise */
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['id'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['table'] = 'field_data_field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['field'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['ui_name'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['label'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_profile' => 'organization_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'url' => 'url',
    'field_organization_name' => 'field_organization_name',
    'field_organization_name_en' => 'field_organization_name_en',
    'field_organization_address' => 'field_organization_address',
    'field_link' => 'field_link',
    'field_phone' => 'field_phone',
    'field_contact_email' => 'field_contact_email',
    'field_twitter' => 'field_twitter',
    'field_facebook' => 'field_facebook',
    'field_other_contact' => 'field_other_contact',
    'field_organization_type' => 'field_organization_type',
    'field_organization_type_other' => 'field_organization_type_other',
    'field_legal_status' => 'field_legal_status',
    'field_vat' => 'field_vat',
    'field_vat_number' => 'field_vat_number',
    'field_organization_goals' => 'field_organization_goals',
    'field_organization_leader_name' => 'field_organization_leader_name',
    'field_organization_pres_surname' => 'field_organization_pres_surname',
    'field_organization_leader_url' => 'field_organization_leader_url',
    'field_organization_leader_phone' => 'field_organization_leader_phone',
    'field_organization_leader_email' => 'field_organization_leader_email',
    'field_expertise_areas_pres' => 'field_expertise_areas_pres',
    'field_organization_delegate_name' => 'field_organization_delegate_name',
    'field_organization_del_surname' => 'field_organization_del_surname',
    'field_organization_delegate_url' => 'field_organization_delegate_url',
    'field_organization_delegatephone' => 'field_organization_delegatephone',
    'field_organization_delegateemail' => 'field_organization_delegateemail',
    'field_cs_expertise_area' => 'field_cs_expertise_area',
    'field_organization_del2_name' => 'field_organization_del2_name',
    'field_organization_del2_surname' => 'field_organization_del2_surname',
    'field_organization_del2_url' => 'field_organization_del2_url',
    'field_organization_del2_phone' => 'field_organization_del2_phone',
    'field_organization_del2_email' => 'field_organization_del2_email',
    'field_organization_del2_exp_area' => 'field_organization_del2_exp_area',
    'field_motivation' => 'field_motivation',
    'field_eligibility_criteria' => 'field_eligibility_criteria',
    'field_cs_project_name' => 'field_cs_project_name',
    'field_cs_project_url' => 'field_cs_project_url',
    'field_cs_project_description' => 'field_cs_project_description',
    'field_cs_project_tags' => 'field_cs_project_tags',
    'field_cs_project_geo_scale' => 'field_cs_project_geo_scale',
    'field_cs_project_contact' => 'field_cs_project_contact',
    'field_comments' => 'field_comments',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_facebook' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_legal_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vat_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_goals' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_pres_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expertise_areas_pres' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_delegate_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_delegate_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_delegatephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_delegateemail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_expertise_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_del2_exp_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_motivation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_eligibility_criteria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_geo_scale' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT */
  $handler->display->display_options['fields']['field_vat']['id'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['table'] = 'field_data_field_vat';
  $handler->display->display_options['fields']['field_vat']['field'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['ui_name'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['label'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT Number */
  $handler->display->display_options['fields']['field_vat_number']['id'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['table'] = 'field_data_field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['field'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['ui_name'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['label'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_organization_goals']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organization_goals']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President First Name */
  $handler->display->display_options['fields']['field_organization_leader_name']['id'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['table'] = 'field_data_field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['field'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['ui_name'] = 'President First Name';
  $handler->display->display_options['fields']['field_organization_leader_name']['label'] = 'President First Name';
  $handler->display->display_options['fields']['field_organization_leader_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Surname */
  $handler->display->display_options['fields']['field_organization_pres_surname']['id'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['table'] = 'field_data_field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['field'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['ui_name'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['label'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President URL */
  $handler->display->display_options['fields']['field_organization_leader_url']['id'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['table'] = 'field_data_field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['field'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['ui_name'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['label'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Phone */
  $handler->display->display_options['fields']['field_organization_leader_phone']['id'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['table'] = 'field_data_field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['field'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['ui_name'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['label'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Email */
  $handler->display->display_options['fields']['field_organization_leader_email']['id'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['table'] = 'field_data_field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['field'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['ui_name'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['label'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Areas of Expertise */
  $handler->display->display_options['fields']['field_expertise_areas_pres']['id'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['table'] = 'field_data_field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['field'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['ui_name'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['label'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 First Name */
  $handler->display->display_options['fields']['field_organization_delegate_name']['id'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['table'] = 'field_data_field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['field'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['ui_name'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['label'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Surname */
  $handler->display->display_options['fields']['field_organization_del_surname']['id'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['table'] = 'field_data_field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['field'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['ui_name'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['label'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 URL */
  $handler->display->display_options['fields']['field_organization_delegate_url']['id'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['table'] = 'field_data_field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['field'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['ui_name'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['label'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Phone */
  $handler->display->display_options['fields']['field_organization_delegatephone']['id'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['table'] = 'field_data_field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['field'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['ui_name'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['label'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Email */
  $handler->display->display_options['fields']['field_organization_delegateemail']['id'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['table'] = 'field_data_field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['field'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['ui_name'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['label'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Areas of Expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['ui_name'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['label'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 First Name */
  $handler->display->display_options['fields']['field_organization_del2_name']['id'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['table'] = 'field_data_field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['field'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['ui_name'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['label'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Surname */
  $handler->display->display_options['fields']['field_organization_del2_surname']['id'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['table'] = 'field_data_field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['field'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['ui_name'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['label'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 URL */
  $handler->display->display_options['fields']['field_organization_del2_url']['id'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['table'] = 'field_data_field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['field'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['ui_name'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['label'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Phone */
  $handler->display->display_options['fields']['field_organization_del2_phone']['id'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['table'] = 'field_data_field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['field'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['ui_name'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['label'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Email */
  $handler->display->display_options['fields']['field_organization_del2_email']['id'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['table'] = 'field_data_field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['field'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['ui_name'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['label'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Areas of Expertise */
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['id'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['table'] = 'field_data_field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['field'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['ui_name'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['label'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_motivation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_comments']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization_profile' => 'organization_profile',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Organization Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_organization_name' => 'field_organization_name',
    'field_organization_name_en' => 'field_organization_name_en',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['table'] = 'views';
  $handler->display->display_options['filters']['combine_1']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_1']['operator'] = 'word';
  $handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine_1']['fields'] = array(
    'field_organization_leader_name' => 'field_organization_leader_name',
    'field_organization_pres_surname' => 'field_organization_pres_surname',
    'field_organization_delegate_name' => 'field_organization_delegate_name',
    'field_organization_del_surname' => 'field_organization_del_surname',
    'field_organization_del2_name' => 'field_organization_del2_name',
    'field_organization_del2_surname' => 'field_organization_del2_surname',
  );
  $handler->display->display_options['path'] = 'admin/people/export/organization';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export Organization Members';
  $handler->display->display_options['menu']['description'] = 'Export ECSA Organization Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download the ECSA Member Organization list in CSV format';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ecsa_member_organization_list.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT */
  $handler->display->display_options['fields']['field_vat']['id'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['table'] = 'field_data_field_vat';
  $handler->display->display_options['fields']['field_vat']['field'] = 'field_vat';
  $handler->display->display_options['fields']['field_vat']['ui_name'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['label'] = 'Organization VAT';
  $handler->display->display_options['fields']['field_vat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization VAT Number */
  $handler->display->display_options['fields']['field_vat_number']['id'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['table'] = 'field_data_field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['field'] = 'field_vat_number';
  $handler->display->display_options['fields']['field_vat_number']['ui_name'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['label'] = 'Organization VAT Number';
  $handler->display->display_options['fields']['field_vat_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vat_number']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President First Name */
  $handler->display->display_options['fields']['field_organization_leader_name']['id'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['table'] = 'field_data_field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['field'] = 'field_organization_leader_name';
  $handler->display->display_options['fields']['field_organization_leader_name']['ui_name'] = 'President First Name';
  $handler->display->display_options['fields']['field_organization_leader_name']['label'] = 'President First Name';
  $handler->display->display_options['fields']['field_organization_leader_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Surname */
  $handler->display->display_options['fields']['field_organization_pres_surname']['id'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['table'] = 'field_data_field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['field'] = 'field_organization_pres_surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['ui_name'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['label'] = 'President Surname';
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_pres_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President URL */
  $handler->display->display_options['fields']['field_organization_leader_url']['id'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['table'] = 'field_data_field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['field'] = 'field_organization_leader_url';
  $handler->display->display_options['fields']['field_organization_leader_url']['ui_name'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['label'] = 'President URL';
  $handler->display->display_options['fields']['field_organization_leader_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Phone */
  $handler->display->display_options['fields']['field_organization_leader_phone']['id'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['table'] = 'field_data_field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['field'] = 'field_organization_leader_phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['ui_name'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['label'] = 'President Phone';
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Email */
  $handler->display->display_options['fields']['field_organization_leader_email']['id'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['table'] = 'field_data_field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['field'] = 'field_organization_leader_email';
  $handler->display->display_options['fields']['field_organization_leader_email']['ui_name'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['label'] = 'President Email';
  $handler->display->display_options['fields']['field_organization_leader_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_leader_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: President Areas of Expertise */
  $handler->display->display_options['fields']['field_expertise_areas_pres']['id'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['table'] = 'field_data_field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['field'] = 'field_expertise_areas_pres';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['ui_name'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['label'] = 'President Areas of Expertise';
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_expertise_areas_pres']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 First Name */
  $handler->display->display_options['fields']['field_organization_delegate_name']['id'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['table'] = 'field_data_field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['field'] = 'field_organization_delegate_name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['ui_name'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['label'] = 'Delegate 1 First Name';
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Surname */
  $handler->display->display_options['fields']['field_organization_del_surname']['id'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['table'] = 'field_data_field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['field'] = 'field_organization_del_surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['ui_name'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['label'] = 'Delegate 1 Surname';
  $handler->display->display_options['fields']['field_organization_del_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 URL */
  $handler->display->display_options['fields']['field_organization_delegate_url']['id'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['table'] = 'field_data_field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['field'] = 'field_organization_delegate_url';
  $handler->display->display_options['fields']['field_organization_delegate_url']['ui_name'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['label'] = 'Delegate 1 URL';
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegate_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Phone */
  $handler->display->display_options['fields']['field_organization_delegatephone']['id'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['table'] = 'field_data_field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['field'] = 'field_organization_delegatephone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['ui_name'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['label'] = 'Delegate 1 Phone';
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegatephone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Email */
  $handler->display->display_options['fields']['field_organization_delegateemail']['id'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['table'] = 'field_data_field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['field'] = 'field_organization_delegateemail';
  $handler->display->display_options['fields']['field_organization_delegateemail']['ui_name'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['label'] = 'Delegate 1 Email';
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_delegateemail']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 1 Areas of Expertise */
  $handler->display->display_options['fields']['field_cs_expertise_area']['id'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['table'] = 'field_data_field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['field'] = 'field_cs_expertise_area';
  $handler->display->display_options['fields']['field_cs_expertise_area']['ui_name'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['label'] = 'Delegate 1 Areas of Expertise';
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_expertise_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 First Name */
  $handler->display->display_options['fields']['field_organization_del2_name']['id'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['table'] = 'field_data_field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['field'] = 'field_organization_del2_name';
  $handler->display->display_options['fields']['field_organization_del2_name']['ui_name'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['label'] = 'Delegate 2 First Name';
  $handler->display->display_options['fields']['field_organization_del2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Surname */
  $handler->display->display_options['fields']['field_organization_del2_surname']['id'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['table'] = 'field_data_field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['field'] = 'field_organization_del2_surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['ui_name'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['label'] = 'Delegate 2 Surname';
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 URL */
  $handler->display->display_options['fields']['field_organization_del2_url']['id'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['table'] = 'field_data_field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['field'] = 'field_organization_del2_url';
  $handler->display->display_options['fields']['field_organization_del2_url']['ui_name'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['label'] = 'Delegate 2 URL';
  $handler->display->display_options['fields']['field_organization_del2_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Phone */
  $handler->display->display_options['fields']['field_organization_del2_phone']['id'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['table'] = 'field_data_field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['field'] = 'field_organization_del2_phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['ui_name'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['label'] = 'Delegate 2 Phone';
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Email */
  $handler->display->display_options['fields']['field_organization_del2_email']['id'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['table'] = 'field_data_field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['field'] = 'field_organization_del2_email';
  $handler->display->display_options['fields']['field_organization_del2_email']['ui_name'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['label'] = 'Delegate 2 Email';
  $handler->display->display_options['fields']['field_organization_del2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Delegate 2 Areas of Expertise */
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['id'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['table'] = 'field_data_field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['field'] = 'field_organization_del2_exp_area';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['ui_name'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['label'] = 'Delegate 2 Areas of Expertise';
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_del2_exp_area']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/people/export/organization/download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['ecsa_member_organization_list'] = array(
    t('Master'),
    t('ECSA Member Organization List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('Username'),
    t('Email'),
    t('Profile'),
    t('View Profile'),
    t('Organization Name'),
    t('Organization Name EN'),
    t('Organization Address'),
    t('Contact URL'),
    t('Contact Phone'),
    t('Contact Email'),
    t('Contact Twitter'),
    t('Contact Facebook'),
    t('Contact Other'),
    t('Organization Type'),
    t('[field_organization_type]'),
    t('Legal Status'),
    t('Organization VAT'),
    t('Organization VAT Number'),
    t('Mandate / Goals / Activities'),
    t('First name'),
    t('President Surname'),
    t('President URL'),
    t('President Phone'),
    t('President Email'),
    t('President Areas of Expertise'),
    t('Delegate 1 First Name'),
    t('Delegate 1 Surname'),
    t('Delegate 1 URL'),
    t('Delegate 1 Phone'),
    t('Delegate 1 Email'),
    t('Delegate 1 Areas of Expertise'),
    t('Delegate 2 First Name'),
    t('Delegate 2 Surname'),
    t('Delegate 2 URL'),
    t('Delegate 2 Phone'),
    t('Delegate 2 Email'),
    t('Delegate 2 Areas of Expertise'),
    t('Motivation'),
    t('Supporting Citizen Science'),
    t('CS Project Name'),
    t('CS Project URL'),
    t('CS Project Description'),
    t('CS Project Tags'),
    t('CS Project Geographical Scale'),
    t('CS Project Social'),
    t('Comments'),
    t('Page'),
    t('President First Name'),
    t('Contact Name'),
    t('Data export'),
  );
  $export['ecsa_member_organization_list'] = $view;

  $view = new view();
  $view->name = 'ecsa_member_supporter_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'ECSA Member Supporter List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ECSA Member Supporter List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'pid' => 'pid',
    'uid' => 'uid',
    'mail' => 'mail',
    'type' => 'type',
    'field_individual_name' => 'field_individual_name',
    'field_organization_leader_name' => 'field_organization_leader_name',
    'field_network_name' => 'field_network_name',
    'field_network_surname' => 'field_network_surname',
    'field_organization_pres_surname' => 'field_organization_pres_surname',
    'field_individual_surname' => 'field_individual_surname',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'pid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_leader_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_pres_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_surname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  $handler->display->display_options['relationships']['user']['required'] = TRUE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_network_name']['id'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['table'] = 'field_data_field_network_name';
  $handler->display->display_options['fields']['field_network_name']['field'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_network_surname']['id'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['table'] = 'field_data_field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['field'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supporter_profile' => 'supporter_profile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'mail' => 'mail',
    'url' => 'url',
    'field_organization_name' => 'field_organization_name',
    'field_organization_name_en' => 'field_organization_name_en',
    'field_organization_address' => 'field_organization_address',
    'field_network_name' => 'field_network_name',
    'field_network_surname' => 'field_network_surname',
    'field_link' => 'field_link',
    'field_phone' => 'field_phone',
    'field_contact_email' => 'field_contact_email',
    'field_twitter' => 'field_twitter',
    'field_facebook' => 'field_facebook',
    'field_other_contact' => 'field_other_contact',
    'field_organization_type' => 'field_organization_type',
    'field_organization_type_other' => 'field_organization_type_other',
    'field_legal_status' => 'field_legal_status',
    'field_organization_goals' => 'field_organization_goals',
    'field_motivation' => 'field_motivation',
    'field_eligibility_criteria' => 'field_eligibility_criteria',
    'field_cs_project_name' => 'field_cs_project_name',
    'field_cs_project_url' => 'field_cs_project_url',
    'field_cs_project_description' => 'field_cs_project_description',
    'field_cs_project_tags' => 'field_cs_project_tags',
    'field_cs_project_geo_scale' => 'field_cs_project_geo_scale',
    'field_cs_project_contact' => 'field_cs_project_contact',
    'field_comments' => 'field_comments',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name_en' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_network_surname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_twitter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_facebook' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_other_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_legal_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_goals' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_motivation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_eligibility_criteria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_geo_scale' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cs_project_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_comments' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_network_name']['id'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['table'] = 'field_data_field_network_name';
  $handler->display->display_options['fields']['field_network_name']['field'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_network_surname']['id'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['table'] = 'field_data_field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['field'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_organization_goals']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_organization_goals']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_motivation']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_comments']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_comments']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'supporter_profile' => 'supporter_profile',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Organization Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_organization_name' => 'field_organization_name',
    'field_organization_name_en' => 'field_organization_name_en',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['table'] = 'views';
  $handler->display->display_options['filters']['combine_1']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_1']['operator'] = 'word';
  $handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine_1']['fields'] = array(
    'field_network_name' => 'field_network_name',
    'field_network_surname' => 'field_network_surname',
  );
  $handler->display->display_options['path'] = 'admin/people/export/supporter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Export Supporter Members';
  $handler->display->display_options['menu']['description'] = 'Export ECSA Supporter Members';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['attach_text'] = 'Download the ECSA Member Supporter list in CSV format';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'ecsa_member_supporter_list.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Username */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Username';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'user';
  $handler->display->display_options['fields']['mail']['ui_name'] = 'Email';
  $handler->display->display_options['fields']['mail']['label'] = 'Email';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: Link to Profile */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['ui_name'] = 'Link to Profile';
  $handler->display->display_options['fields']['url']['label'] = 'Profile';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View Profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['ui_name'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = 'Organization Name';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Name EN */
  $handler->display->display_options['fields']['field_organization_name_en']['id'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['table'] = 'field_data_field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['field'] = 'field_organization_name_en';
  $handler->display->display_options['fields']['field_organization_name_en']['ui_name'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['label'] = 'Organization Name EN';
  $handler->display->display_options['fields']['field_organization_name_en']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_name_en']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Address */
  $handler->display->display_options['fields']['field_organization_address']['id'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['table'] = 'field_data_field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['field'] = 'field_organization_address';
  $handler->display->display_options['fields']['field_organization_address']['ui_name'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['label'] = 'Organization Address';
  $handler->display->display_options['fields']['field_organization_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_organization_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact First Name */
  $handler->display->display_options['fields']['field_network_name']['id'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['table'] = 'field_data_field_network_name';
  $handler->display->display_options['fields']['field_network_name']['field'] = 'field_network_name';
  $handler->display->display_options['fields']['field_network_name']['ui_name'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['label'] = 'Contact First Name';
  $handler->display->display_options['fields']['field_network_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Surname */
  $handler->display->display_options['fields']['field_network_surname']['id'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['table'] = 'field_data_field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['field'] = 'field_network_surname';
  $handler->display->display_options['fields']['field_network_surname']['ui_name'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['label'] = 'Contact Surname';
  $handler->display->display_options['fields']['field_network_surname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_network_surname']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact URL */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['ui_name'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['label'] = 'Contact URL';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['ui_name'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Contact Phone';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['ui_name'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['label'] = 'Contact Email';
  $handler->display->display_options['fields']['field_contact_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contact_email']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['ui_name'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = 'Contact Twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Facebook */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['ui_name'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['label'] = 'Contact Facebook';
  $handler->display->display_options['fields']['field_facebook']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Contact Other */
  $handler->display->display_options['fields']['field_other_contact']['id'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['table'] = 'field_data_field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['field'] = 'field_other_contact';
  $handler->display->display_options['fields']['field_other_contact']['ui_name'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['label'] = 'Contact Other';
  $handler->display->display_options['fields']['field_other_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_other_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type (select list) */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['ui_name'] = 'Organization Type (select list)';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Organization Type */
  $handler->display->display_options['fields']['field_organization_type_other']['id'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['table'] = 'field_data_field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['field'] = 'field_organization_type_other';
  $handler->display->display_options['fields']['field_organization_type_other']['ui_name'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['label'] = 'Organization Type';
  $handler->display->display_options['fields']['field_organization_type_other']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type_other']['empty'] = '[field_organization_type]';
  $handler->display->display_options['fields']['field_organization_type_other']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Legal Status */
  $handler->display->display_options['fields']['field_legal_status']['id'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['table'] = 'field_data_field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['field'] = 'field_legal_status';
  $handler->display->display_options['fields']['field_legal_status']['ui_name'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['label'] = 'Legal Status';
  $handler->display->display_options['fields']['field_legal_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_legal_status']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Mandate / Goals / Activities */
  $handler->display->display_options['fields']['field_organization_goals']['id'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['table'] = 'field_data_field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['field'] = 'field_organization_goals';
  $handler->display->display_options['fields']['field_organization_goals']['ui_name'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['label'] = 'Mandate / Goals / Activities';
  $handler->display->display_options['fields']['field_organization_goals']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_organization_goals']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['ui_name'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['label'] = 'Motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_motivation']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Supporting Citizen Science */
  $handler->display->display_options['fields']['field_eligibility_criteria']['id'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['table'] = 'field_data_field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['field'] = 'field_eligibility_criteria';
  $handler->display->display_options['fields']['field_eligibility_criteria']['ui_name'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['label'] = 'Supporting Citizen Science';
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_eligibility_criteria']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Name */
  $handler->display->display_options['fields']['field_cs_project_name']['id'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['table'] = 'field_data_field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['field'] = 'field_cs_project_name';
  $handler->display->display_options['fields']['field_cs_project_name']['ui_name'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['label'] = 'CS Project Name';
  $handler->display->display_options['fields']['field_cs_project_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_name']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project URL */
  $handler->display->display_options['fields']['field_cs_project_url']['id'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['table'] = 'field_data_field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['field'] = 'field_cs_project_url';
  $handler->display->display_options['fields']['field_cs_project_url']['ui_name'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['label'] = 'CS Project URL';
  $handler->display->display_options['fields']['field_cs_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_url']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Description */
  $handler->display->display_options['fields']['field_cs_project_description']['id'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['table'] = 'field_data_field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['field'] = 'field_cs_project_description';
  $handler->display->display_options['fields']['field_cs_project_description']['ui_name'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['label'] = 'CS Project Description';
  $handler->display->display_options['fields']['field_cs_project_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_description']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: CS Project Tags */
  $handler->display->display_options['fields']['field_cs_project_tags']['id'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['table'] = 'field_data_field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['field'] = 'field_cs_project_tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['ui_name'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['label'] = 'CS Project Tags';
  $handler->display->display_options['fields']['field_cs_project_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_tags']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_tags']['delta_offset'] = '0';
  /* Field: CS Project Geographical Scale */
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['id'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['table'] = 'field_data_field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['field'] = 'field_cs_project_geo_scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['ui_name'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['label'] = 'CS Project Geographical Scale';
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_cs_project_geo_scale']['delta_offset'] = '0';
  /* Field: CS Project Social */
  $handler->display->display_options['fields']['field_cs_project_contact']['id'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['table'] = 'field_data_field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['field'] = 'field_cs_project_contact';
  $handler->display->display_options['fields']['field_cs_project_contact']['ui_name'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['label'] = 'CS Project Social';
  $handler->display->display_options['fields']['field_cs_project_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cs_project_contact']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['ui_name'] = 'Comments';
  $handler->display->display_options['fields']['field_comments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_comments']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/people/export/supporter/download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['ecsa_member_supporter_list'] = array(
    t('Master'),
    t('ECSA Member Supporter List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('Username'),
    t('Email'),
    t('Profile'),
    t('View Profile'),
    t('Organization Name'),
    t('Organization Name EN'),
    t('Organization Address'),
    t('Contact First Name'),
    t('Contact Surname'),
    t('Contact URL'),
    t('Contact Phone'),
    t('Contact Email'),
    t('Contact Twitter'),
    t('Contact Facebook'),
    t('Contact Other'),
    t('Organization Type'),
    t('[field_organization_type]'),
    t('Legal Status'),
    t('Mandate / Goals / Activities'),
    t('Motivation'),
    t('Supporting Citizen Science'),
    t('CS Project Name'),
    t('CS Project URL'),
    t('CS Project Description'),
    t('CS Project Tags'),
    t('CS Project Geographical Scale'),
    t('CS Project Social'),
    t('Comments'),
    t('Page'),
    t('Contact Name'),
    t('Data export'),
  );
  $export['ecsa_member_supporter_list'] = $view;

  return $export;
}

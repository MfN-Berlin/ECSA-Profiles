<?php
/**
 * @file
 * ecsa_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ecsa_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ecsa_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function ecsa_profiles_default_profile2_type() {
  $items = array();
  $items['individual_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "individual_profile",
    "label" : "ECSA Member Individual",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  $items['organization_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "organization_profile",
    "label" : "ECSA Member Organization",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  $items['supporter_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "supporter_profile",
    "label" : "ECSA Supporter",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 }
  }');
  return $items;
}

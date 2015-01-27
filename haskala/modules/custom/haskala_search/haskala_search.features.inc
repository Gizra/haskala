<?php
/**
 * @file
 * haskala_search.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function haskala_search_default_search_api_server() {
  $items = array();
  $items['opensolr'] = entity_import('search_api_server', '{
    "name" : "Opensolr",
    "machine_name" : "opensolr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "de.opensolr.com",
      "port" : "80",
      "path" : "\\/solr\\/Haskala",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

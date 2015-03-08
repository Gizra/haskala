core = 7.x
api = 2

; Modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.4"

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.16"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.6"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.6"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2086225-entity-access-check-node-create-3.patch"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[features][subdir] = "contrib"
projects[features][version] = "2.3"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[geolocation][subdir] = "contrib"
projects[geolocation][version] = "1.6"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "2.1"

projects[ip_geoloc][subdir] = "contrib"
projects[ip_geoloc][version] = "1.26"
projects[ip_geoloc][patch][] = "https://www.drupal.org/files/issues/fixing-separator-decoding-2432515-1.patch"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.5"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[logs_http][subdir] = "contrib"
projects[logs_http][version] = "1.0"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.4"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.5"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[search_api][subdir] = "contrib"
projects[search_api][version] = "1.14"

projects[search_api_page][subdir] = "contrib"
projects[search_api_page][version] = "1.1"

projects[search_api_solr][subdir] = "contrib"
projects[search_api_solr][version] = "1.6"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.6"

projects[views][subdir] = "contrib"
projects[views][version] = "3.10"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.2"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.2"

; Development modules
projects[migrate][subdir] = "development"
projects[migrate][version] = "2.7"

projects[migrate_extras][subdir] = "development"
projects[migrate_extras][version] = "2.5"

projects[devel][subdir] = "development"
projects[devel][version] = "1.5"


; Libraries
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; Themes
projects[bootstrap][subdir] = "contrib"
projects[bootstrap][version] = "3.0"

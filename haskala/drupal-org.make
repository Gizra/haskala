core = 7.x
api = 2

; Modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc5"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.3"

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.x-dev"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.5"

projects[date][subdir] = "contrib"
projects[date][version] = "2.8"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2264079-entity-wrapper-access-single-entity-reference-2.patch"
projects[entity][patch][] = "https://www.drupal.org/files/issues/2086225-entity-access-check-node-create-3.patch"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[features][subdir] = "contrib"
projects[features][version] = "2.3"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.4"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0-alpha2"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.4"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[reldate][subdir] = "contrib"
projects[reldate][version] = "1.x-dev"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[transliteration][subdir] = contrib
projects[transliteration][version] = "3.2"

projects[views][subdir] = "contrib"
projects[views][version] = "3.8"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.2"

; Development modules
projects[migrate][subdir] = "development"
projects[migrate][version] = "2.6"

projects[migrate_extras][subdir] = "development"
projects[migrate_extras][version] = "2.5"

projects[devel][subdir] = "development"
projects[devel][version] = "1.5"

projects[coder][subdir] = "development"
projects[coder][version] = "2.4"

; Libraries
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; Themes
projects[bootstrap][subdir] = "contrib"
projects[bootstrap][version] = "3.0"

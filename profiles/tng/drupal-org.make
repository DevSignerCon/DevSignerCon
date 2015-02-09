; tng make file for d.o. usage
api = "2"
core = "7.x"
projects[drupal][type] = "core"
projects[drupal][version] = "7.34"

; Set contrib directory.
defaults[projects][subdir] = "contrib"

; +++++ Modules +++++

projects[addressfield][version] = "1.0"
projects[admin_views][version] = "1.3"
projects[admin_menu][version] = "3.0-rc5"
projects[blockify][version] = "1.2"
projects[breakpoints][version] = "1.2"
projects[ckeditor_styles][version] = "1.x-dev"
projects[context][version] = "3.6"
projects[content_taxonomy][version] = "1.0-beta2"
projects[ctools][version] = "1.4"
projects[date][version]= "2.8"
projects[elements][version] = "1.4"
projects[email][version] = "1.3"
projects[entity][version] = "1.5"
projects[entityreference][version] = "1.1"
projects[extlink][version] = "1.17"
projects[features][version] = "2.3"
projects[file_entity][version] = "2.0-beta1"
projects[google_analytics][version] = "1.4"
projects[html5_tools][version] = "1.2"
projects[jquery_update][version] = "2.4"
projects[libraries][version] = "2.2"
projects[link][version] = "1.2"
projects[magic][version] = "2.1"
projects[media][version] = "2.0-alpha4"
projects[menu_block][version] = "2.4"
projects[metatag][version] = "1.4"
projects[modernizr][version] = "3.2"
projects[module_filter][version] = "2.0-alpha2"
projects[pathauto][version] = "1.2"
projects[phone][version] = "1.0-beta1"
projects[picture][version] = "2.9"
projects[redirect][version] = "1.0-rc1"
projects[rules][version] = "2.7"
projects[save_draft][version] = "1.4"
projects[strongarm][version] = "2.0"
projects[token][version] = "1.5"
projects[variable][version] = "2.5"
projects[views][version] = "3.8"
projects[views_bulk_operations][version] = "3.2"
projects[views_content_cache][version] = "3.0-alpha3"
projects[wysiwyg][version] = "2.x-dev"

; +++++ Development Modules +++++

projects[devel][version] = "1.3"
projects[devel][subdir] = "devel"
projects[diff][version] = "3.2"
projects[diff][subdir] = "devel"
projects[environment_indicator][subdir] = "devel"
projects[environment_indicator][version] = "2.5"
projects[search_krumo][version] = "1.5"
projects[search_krumo][subdir] = "devel"
projects[stage_file_proxy][subdir] = "devel"
projects[stage_file_proxy][version] = "1.6"
projects[styleguide][subdir] = "devel"
projects[styleguide][version] = "1.1"

; +++++ Themes +++++

; aurora
projects[aurora][type] = "theme"
projects[aurora][version] = "3.4"
projects[aurora][subdir] = "contrib"

; +++++ Libraries +++++

; Profiler
libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"
libraries[profiler][destination] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.2/ckeditor_4.3.2_standard.tar.gz"

; +++++ Patches +++++

; Ensure plain text fields evaluate line breaks.
projects[drupal][patch][] = "http://drupal.org/files/text-plain-1152216-24.patch"

; Fix dependency checking for install profiles.
projects[drupal][patch][] = "http://drupal.org/files/1093420-22.patch"


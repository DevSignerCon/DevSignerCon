; tng make file for local development
core = "7.x"
api = "2"

; include the d.o. profile base
includes[] = "drupal-org.make"

; Uncomment to use Panels.
;includes[panels] = "panels.make"

; Uncomment to use Display Suite.
;includes[ds] = "ds.make"

; Uncomment to use Solr Search.
;includes[solr] = "solr.make"

; Uncomment to use translation.
;includes[i18n] = "i18n.make"

projects[entityform][version] = "2.0-rc1"
projects[entityform][subdir] = "contrib"
projects[eventbrite][version] = "2.0-alpha3"
projects[eventbrite][subdir] = "contrib"

; Github download example
;projects[os_testing][type] = "module"
;projects[os_testing][subdir] = "development"
;projects[os_testing][download][tag] = "7.x-1.0"
;projects[os_testing][download][url] = "https://github.com/opensourcery/os_testing.git"

/**
 * https://developer.gnome.org/glib/stable/glib-Key-value-file-parser.html
 * http://www.gtkbook.com/gtkbook/keyfile.html
 *
 * All configuration file stuff
 */

#ifndef CLUTCHINGPEARLS_CONFIGURATION_H
#define CLUTCHINGPEARLS_CONFIGURATION_H

#include <glib.h>
#include <glib/gi18n.h>

#include "service.h"

struct settings {
  gchar *configuration_file;
  gint service_enable_dns;
  gint service_enable_http;
  gint service_enable_smtp;
};

void load_configuration_file(struct settings *);

#endif //CLUTCHINGPEARLS_CONFIGURATION_H

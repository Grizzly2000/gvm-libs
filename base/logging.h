/* gvm-libs/base
 * $Id$
 * Description: Implementation of logging methods.
 *
 * Authors:
 * Laban Mwangi <lmwangi@penguinlabs.co.ke>
 *
 * Copyright:
 * Copyright (C) 2017 Greenbone Networks GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * or, at your option, any later version as published by the Free
 * Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _GVM_LOGGING_H
#define _GVM_LOGGING_H

#include <glib.h>
#include <time.h>

GSList *load_log_configuration (gchar *);

void free_log_configuration (GSList *);

gchar *get_time (gchar *);

void gvm_log_silent (const char *, GLogLevelFlags, const char *, gpointer);
void gvm_log_func (const char *, GLogLevelFlags, const char *, gpointer);

void log_func_for_gnutls (int, const char *);

void setup_log_handlers (GSList *);

#endif /* not _GVM_LOGGING_H */

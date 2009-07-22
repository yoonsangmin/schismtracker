/*
 * Schism Tracker - a cross-platform Impulse Tracker clone
 * copyright (c) 2003-2005 Storlek <storlek@rigelseven.com>
 * copyright (c) 2005-2008 Mrs. Brisby <mrs.brisby@nimh.org>
 * copyright (c) 2009 Storlek & Mrs. Brisby
 * URL: http://schismtracker.org/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef SCHISM_LOG_H
#define SCHISM_LOG_H

#ifdef __cplusplus
extern "C" {
#endif

void log_nl(void);
void log_append(int color, int must_free, const char *text);
void log_append2(int bios_font, int color, int must_free, const char *text);
void log_appendf(int color, const char *format, ...)
        __attribute__ ((format(printf, 2, 3)));


void status_text_flash(const char *format, ...)
        __attribute__ ((format(printf, 1, 2)));
void status_text_flash_bios(const char *format, ...)
        __attribute__ ((format(printf, 1, 2)));
void status_text_flash_color(int co, const char *format, ...)
        __attribute__ ((format(printf, 2, 3)));

#ifdef __cplusplus
}
#endif

#endif


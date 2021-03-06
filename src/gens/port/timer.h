/***************************************************************************
 * Gens: Timer functions.                                                  *
 *                                                                         *
 * Copyright (c) 1999-2002 by Stéphane Dallongeville                       *
 * Copyright (c) 2003-2004 by Stéphane Akhoun                              *
 * Copyright (c) 2008 by David Korth                                       *
 *                                                                         *
 * Several functions were taken from Wine 1.1.6.                           *
 * Copyright 1999 Juergen Schmied                                          *
 * Copyright 2007 Dmitry Timoshkov                                         *
 *                                                                         *
 * This program is free software; you can redistribute it and/or modify it *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; either version 2 of the License, or (at your  *
 * option) any later version.                                              *
 *                                                                         *
 * This program is distributed in the hope that it will be useful, but     *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 * GNU General Public License for more details.                            *
 *                                                                         *
 * You should have received a copy of the GNU General Public License along *
 * with this program; if not, write to the Free Software Foundation, Inc., *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.           *
 ***************************************************************************/

#ifndef GENS_TIMER_H
#define GENS_TIMER_H

/* Win32 already provides these functions. */
#if defined(_WIN32)

#define init_timer()

#else /* !defined(_WIN32) */

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void init_timer(void);
//unsigned int gettime(void);

unsigned int GetTickCount(void);
void QueryPerformanceFrequency(int64_t *frequency);
void QueryPerformanceCounter(int64_t *counter);

#ifdef __cplusplus
}
#endif

#endif /* defined(_WIN32) */

#endif /* GENS_TIMER_H */

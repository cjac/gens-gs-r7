/***************************************************************************
 * MDP: hq3x renderer. (RGB lookup tables)                                 *
 *                                                                         *
 * Copyright (c) 1999-2002 by Stéphane Dallongeville                       *
 * Copyright (c) 2003-2004 by Stéphane Akhoun                              *
 * Copyright (c) 2008-2009 by David Korth                                  *
 * hq3x Copyright (c) 2003 by Maxim Stepin                                 *
 *                                                                         *
 * This program is free software; you can redistribute it and/or modify it *
 * under the terms of the GNU Lesser General Public License as published   *
 * by the Free Software Foundation; either version 2.1 of the License, or  *
 * (at your option) any later version.                                     *
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

#ifndef _MDP_RENDER_HQ3X_RGB_H
#define _MDP_RENDER_HQ3X_RGB_H

#include "mdp/mdp_stdint.h"
#include "mdp/mdp_fncall.h"

#ifdef __cplusplus
extern "C" {
#endif

DLL_LOCAL uint32_t* MDP_FNCALL mdp_render_hq3x_build_RGB16to32(void);
DLL_LOCAL uint32_t* MDP_FNCALL mdp_render_hq3x_build_RGB16toYUV(void);

#ifdef __cplusplus
}
#endif

#endif /* _MDP_RENDER_HQ3X_RGB_H */

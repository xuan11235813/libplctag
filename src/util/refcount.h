/***************************************************************************
 *   Copyright (C) 2016 by Kyle Hayes                                      *
 *   Author Kyle Hayes  kyle.hayes@gmail.com                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#ifndef __UTIL__REFCOUNT_H__
#define __UTIL__REFCOUNT_H__ 1

#include <platform.h>

typedef enum { RC_STRONG_REF, RC_WEAK_REF } rc_ref_type;

extern void *rc_alloc(int size, void (*cleanup_func)(void *data));
extern void *rc_inc(const void *data);
extern void *rc_dec(const void *data);
extern void *rc_weak_inc(const void *data);
extern void *rc_weak_dec(const void *data);
//extern void *rc_deref(const void *data);
//extern void rc_free(const void *data);
//extern int rc_count(const void *data);


#endif

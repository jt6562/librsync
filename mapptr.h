/*=				       	-*- c-file-style: "bsd" -*-
 * rproxy -- dynamic caching and delta update in HTTP
 * $Id$
 * 
 * Copyright (C) 2000 by Martin Pool <mbp@humbug.org.au>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


/***********************************************************************
 * map_ptr IO 
 ***********************************************************************/

typedef struct hs_map   hs_map_t;

hs_map_t               *hs_map_file(int fd);

void const *hs_map_ptr(hs_map_t *, off_t, size_t *, int *reached_eof);

void const             *_hs_map_walk(hs_map_t *, off_t, size_t *,
                                     int *reached_eof);

void                    _hs_unmap_file(hs_map_t *);

hs_result_t
_hs_map_copy(hs_map_t *map, size_t length, off_t *pos,
             hs_write_fn_t write_fn, void *write_priv, hs_mdfour_t * newsum);

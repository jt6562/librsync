/*= -*- c-basic-offset: 4; indent-tabs-mode: nil; -*-
 * rproxy -- dynamic caching and delta update in HTTP
 * $Id$
 * 
 * Copyright (C) 1999, 2000 by Martin Pool <mbp@samba.org>
 * Copyright (C) 1999 by Andrew Tridgell
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

int
hs_search_for_block(hs_weak_sum_t weak_sum,
		     byte_t const *inbuf, size_t block_len,
		     hs_sumset_t const *sums, hs_stats_t * stats,
		     off_t * match_where);

/*
 * Copyright (c) 2011 Israel Jacques
 * See LICENSE for details.
 *
 * Israel Jacques <mrko@eecs.berkeley.edu>
 */

#include <vdp1/fbcr.h>

#include "vdp1_internal.h"

void
vdp1_fbcr_rotate_set(void)
{
        unsigned short tvmr;

        tvmr = MEM_READ(VDP1(MODR));

        /* Write to memory. */
        MEM_POKE(VDP1(TVMR), (tvmr & 0x7) | 0x0002);
}
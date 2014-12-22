/*
 * Copyright (c) 2012-2014 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <vdp1/ptmr.h>

#include "vdp1-internal.h"

void
vdp1_ptmr_plot_draw_set(void)
{
        /* Start drawing with automatic frame change. */
        MEMORY_WRITE(16, VDP1(PTMR), 0x0002);
}

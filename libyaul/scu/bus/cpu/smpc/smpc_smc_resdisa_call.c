/*
 * Copyright (c) 2011 Israel Jacques
 * See LICENSE for details.
 *
 * Israel Jacques <mrko@eecs.berkeley.edu>
 */

#include "smpc_internal.h"

uint8_t
smpc_cmd_resdisa_call(void)
{
        /* Disable the user from pressing the reset button. */
        smpc_cmd_call(SMPC_SMC_RESDISA, SMPC_CMD_ISSUE_TYPE_B, NULL);

        return MEM_READ(OREG(31));
}
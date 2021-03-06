/*
 * Copyright (c) 2012-2016 Israel Jacquez
 * See LICENSE for details.
 *
 * Israel Jacquez <mrkotfw@gmail.com>
 */

#include <smpc/peripheral.h>

#include "smpc-internal.h"

struct smpc_peripheral_racing *
smpc_peripheral_racing_port(uint8_t port)
{
        struct smpc_peripheral_racing *port_1;
        struct smpc_peripheral_racing *port_2;

        port_1 = (struct smpc_peripheral_racing *)smpc_peripheral_port_1.peripheral;
        port_2 = (struct smpc_peripheral_racing *)smpc_peripheral_port_2.peripheral;

        switch (port) {
        case 1:
                return port_1;
        case 2:
                return port_2;
        default:
                return NULL;
        }
}

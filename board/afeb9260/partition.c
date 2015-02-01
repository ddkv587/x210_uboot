/*
 * SPDX-License-Identifier:	GPL-2.0+
 */
#include <common.h>
#include <config.h>
#include <asm/hardware.h>
#include <dataflash.h>

AT91S_DATAFLASH_INFO dataflash_info[CONFIG_SYS_MAX_DATAFLASH_BANKS];

struct dataflash_addr cs[CONFIG_SYS_MAX_DATAFLASH_BANKS] = {
	{CONFIG_SYS_DATAFLASH_LOGIC_ADDR_CS0, 0},	/* Logical adress, CS */
	{CONFIG_SYS_DATAFLASH_LOGIC_ADDR_CS1, 1}
};

/*define the area offsets*/
dataflash_protect_t area_list[NB_DATAFLASH_AREA] = {
	{0x00000000, 0x000041FF, FLAG_PROTECT_CLEAR, 0, "Bootstrap"},
	{0x00004200, 0x000083FF, FLAG_PROTECT_CLEAR, 0, "Environment"},
	{0x00008400, 0x00041FFF, FLAG_PROTECT_CLEAR, 0, "U-Boot"},
};

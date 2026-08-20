/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-08-28     teati       the first version
 */
#ifndef PACKAGES_FAL_LATEST_INC_FAL_CONFIG_H_
#define PACKAGES_FAL_LATEST_INC_FAL_CONFIG_H_


#include <rtconfig.h>
#include <board.h>
#include "macSYS.h"

/* ===================== Flash device Configuration ========================= */
extern const struct fal_flash_dev stm32f1_onchip_flash;

/* flash device table */
#define FAL_FLASH_DEV_TABLE                                          \
{                                                                    \
    &stm32f1_onchip_flash,                                           \
}
/* ====================== Partition Configuration ========================== */
#ifdef FAL_PART_HAS_TABLE_CFG
/* partition table */
#define FAL_PART_TABLE                                                               \
{                                                                                    \
    {FAL_PART_MAGIC_WORD,       "boot1",   "stm32_onchip",         0,   16*1024, 0}, \
    {FAL_PART_MAGIC_WORD,       "app",     "stm32_onchip",   16*1024,  111*1024, 0}, \
    {FAL_PART_MAGIC_WORD,       "data",    "stm32_onchip",  127*1024,    1*1024, 0}, \
}
#endif /* FAL_PART_HAS_TABLE_CFG */



#endif /* PACKAGES_FAL_LATEST_INC_FAL_CONFIG_H_ */

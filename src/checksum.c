/*
 * Copyright (c) 2020, RudyLo <luhuadong@163.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-22     luhuadong    the first version
 */

#include <rtthread.h>
#include <rtdevice.h>

#define DBG_TAG "pkg.validator"
#define DBG_LVL DBG_INFO
#include <rtdbg.h>


/**
 * Calculate checksum value.
 *
 * @param buf the pointer of buffer
 * @param len the length of buf
 *
 * @return the sum value
 */
uint8_t CheckSum(uint8_t *buf, uint8_t len)
{
    uint8_t i = 0, sum = 0, checksum = 0;

    for (i=0; i<len; i++)
    {
        sum += *buf++;
    }

    checksum = sum & 0xff;

    return checksum;
}

uint8_t CheckXOR(uint8_t *buf, uint8_t len)
{
    uint8_t i = 0;  uint8_t x = 0;

    for (i=0; i<len; i++)
    {
        x = x^(*(buf+i));
    }

    return x;
}
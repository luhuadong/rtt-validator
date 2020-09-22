/*
 * Copyright (c) 2020, RudyLo <luhuadong@163.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-09-22     luhuadong    the first version
 */

#ifndef __PKG_VALIDATOR_H__
#define __PKG_VALIDATOR_H__

#include <stddef.h>
#include <stdint.h>


#ifdef VALIDATOR_USING_MD5

typedef struct
{
    unsigned int count[2];
    unsigned int state[4];
    unsigned char buffer[64];

} MD5_CTX;

void MD5Init(MD5_CTX *context);
void MD5Update(MD5_CTX *context,unsigned char *input,unsigned int inputlen);
void MD5Final(MD5_CTX *context,unsigned char digest[16]);

#endif /* VALIDATOR_USING_MD5 */

#endif /* __PKG_VALIDATOR_H__ */

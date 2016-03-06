/*
*   emunand.h
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*/

#ifndef EMUNAND_INC
#define EMUNAND_INC

#include "types.h"

#define NCSD_MAGIC (0x4453434E)

void getEmunandSect(u32 *off, u32 *head);
void getSDMMC(void *pos, u32 *off, u32 size);
void getEmuRW(void *pos, u32 size, u32 *readOff, u32 *writeOff);
void getMPU(void *pos, u32 *off, u32 size);

#endif
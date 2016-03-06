/*
*   firm.h
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*/

#ifndef FIRM_INC
#define FIRM_INC

#include "types.h"

#define PDN_MPCORE_CFG     (*(u8*)0x10140FFC)
#define HID_PAD            ((~*(u16*)0x10146000) & 0xFFF)
#define BUTTON_R1          (1 << 3)
#define BUTTON_L1          (1 << 2)
#define BUTTON_A           1
#define SAFEMODE           (BUTTON_L1 | BUTTON_R1 | BUTTON_A | (1 << 6))

void setupCFW(void);
u32 loadFirm(void);
u32 patchFirm(void);
void launchFirm(void);

#endif
/*
*   firm.h
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*
* #define BUTTON_A        (1 << 0)
* #define BUTTON_B        (1 << 1)
* #define BUTTON_SELECT   (1 << 2)
* #define BUTTON_START    (1 << 3)
* #define BUTTON_RIGHT    (1 << 4)
* #define BUTTON_LEFT     (1 << 5)
* #define BUTTON_UP       (1 << 6)
* #define BUTTON_DOWN     (1 << 7)
* #define BUTTON_R1       (1 << 8)
* #define BUTTON_L1       (1 << 9)
* #define BUTTON_X        (1 << 10)
* #define BUTTON_Y        (1 << 11)
*
*/
#ifndef FIRM_INC
#define FIRM_INC

#include "types.h"

#define PDN_MPCORE_CFG     (*(u8*)0x10140FFC)
#define HID_PAD            ((~*(u16*)0x10146000) & 0xFFF)
#define BUTTON_SELECT      (1 << 2)
#define BUTTON_START       (1 << 3)
#define BUTTON_R1          (1 << 8)
#define BUTTON_L1          (1 << 9)
#define BUTTON_A           1
#define SAFEMODE           (BUTTON_L1 | BUTTON_R1 | BUTTON_A | (1 << 6))

void setupCFW(void);
u8 loadFirm(void);
u8 patchFirm(void);
void launchFirm(void);

#endif
/*
*   main.c
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*
*   Minimalist CFW for N3DS
*/

#include "fs.h"
#include "firm.h"
#include "draw.h"

u8 main(){
    mountSD();
    loadSplash();
    setupCFW();
    if (!loadFirm()) return 0;
    if (!patchFirm()) return 0;
    launchFirm();
    return 1;
}
/*
*   memory.c
*       by Reisyukaku
*   Copyright (c) 2015 All Rights Reserved
*/

#include "memory.h"

void memcpy(void *dest, const void *src, u32 size){
    u8 *destc = (u8 *)dest;
    const u8 *srcc = (const u8 *)src;
    for(u32 i = 0; i < size; i++)
        destc[i] = srcc[i];
}

void memset(void *dest, int filler, u32 size){
    u8 *destc = (u8 *)dest;
    for(u32 i = 0; i < size; i++)
        destc[i] = (u8)filler;
}

int memcmp(const void *buf1, const void *buf2, u32 size){
    const u8 *buf1c = (const u8 *)buf1;
    const u8 *buf2c = (const u8 *)buf2;
    for(u32 i = 0; i < size; i++){
        int cmp = buf1c[i] - buf2c[i];
        if(cmp) return cmp;
    }
    return 0;
}

void *memsearch(void *start_pos, void *search, u32 size, u32 size_search){
    for(void *pos = start_pos + size - size_search; pos >= start_pos; pos--){
        if(memcmp(pos, search, size_search) == 0) return pos;
    }
    return NULL;
}
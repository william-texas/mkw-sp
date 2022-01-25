#pragma once

#include <Common.h>

extern void rel_start;
extern void rel_end;

static void *Rel_getStart(void) {
    return &rel_start;
}

static void *Rel_getEnd(void) {
    return &rel_end;
}

static u32 Rel_getSize(void) {
    return &rel_end - &rel_start;
}
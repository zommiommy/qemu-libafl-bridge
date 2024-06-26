#pragma once

#include "qemu/osdep.h"
#include "qapi/error.h"

struct libafl_mapinfo {
    target_ulong start;
    target_ulong end;
    target_ulong offset;
    const char* path;
    int flags;
    int is_priv;
};

IntervalTreeNode * libafl_maps_first(IntervalTreeRoot * map_info);
IntervalTreeNode * libafl_maps_next(IntervalTreeNode *node, struct libafl_mapinfo* ret);

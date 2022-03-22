#pragma once
#ifndef VECTOR_UTIL_H
#define VECTOR_UTIL_H

#include <stdlib.h>
#include <math.h>

#include "v_types.h"

float sqr(float n) {
    return n*n;
}

float distance(Vec3* p_va) {
    float d = sqrt(sqr(p_va->x) + sqr(p_va->y) + sqr(p_va->z));
    return abs(d);
}

float normalize(Vec3* p_va) {
    float n;
    p_va->x / distance(p_va); p_va->y / distance(p_va); p_va->z / distance(p_va);
    return n;
}

// lighting calculations and helper for raycasted raytracers.
// get multiplicative inverse (reciprocal) of sqrt
// -> q3-arena fast inverse sqrt method.
float F_InverseSqrt(float n) {
    long i; float x2, y;
    const float threehalfs_rc = 1.5f;

    x2 = n * 0.5f; y = n;
    i = * (long*) &y;           // type-cast
    i = 0x5f3759df - (i >> 1); // 0x5f3759df = hex magic for equations like these.. bitshift it by 1 get important value checksum stuff
    y = * (float*) &i;
    y = y * (threehalfs_rc - (x2 * y * y)); // 1st inverse iteration.

    return y;
}



#endif
#pragma once
#ifndef SCALAR_MATH_H
#define SCALAR_MATH_H
#include <stdlib.h>
#include <stdio.h>

#include "v_types.h"
#include "vector_util.h"

void PrintCW_Addition(Vec3* v, Vec3* k)
{
    float r_s[3] = {(v->x + k->x), (v->y + k->y), (v->z + k->z)};
    for (size_t i = 0; i < sizeof(r_s)/sizeof(r_s[0]); i++) {
        printf("%f\n", r_s[i]);
    }
}

void PrintCW_Subtraction(Vec3* v, Vec3* k) {
    float r_d[3] = {(v->x - k->x), (v->y - k->y), (v->z - k->z)};
    for (unsigned int i = 0; i < sizeof(r_d)/sizeof(r_d[0]); i++) {
        printf("%f\n", -(r_d[i]));
    }
}

// abs(v) * abs(k) * cos
float V_DotProduct(Vec3* p_va, float theta) {
    float v = distance(p_va);
    float k = distance(p_va);
    float dp = v * k * cosf(theta);
    return dp;
}

#endif
#pragma once
#ifndef VECTOR_UTIL_H
#define VECTOR_UTIL_H

#include <stdlib.h>
#include <math.h>

#include "v_types.h"

int sqr(int n) {
    return n*n;
}

float distance(Vec3* p_va) {
    float d = sqrt(sqr(p_va->x) + sqr(p_va->y) + sqr(p_va->z));
    return abs(d);
}

float normalize(Vec3* p_va) {
    float x = p_va->x / distance(p_va); 
    float y = p_va->y / distance(p_va); 
    float z = p_va->z / distance(p_va);
    float n[3] = {x, y, z};
    return *((float*) &n);
}

// small angle approximations 0.x small
double FastSin(double theta) {return theta;} 
double FastCos(double theta) {return 1 - (sqr(theta)/2);} 
double FastTan(double theta) {return theta;}

// using newtons rhapson method :)
// IEEE single digit precision type
int FastSqrt(int number) {
}


#endif
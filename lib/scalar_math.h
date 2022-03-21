#pragma once
#ifndef SCALAR_MATH_H
#define SCALAR_MATH_H
#include <stdlib.h>
#include <stdio.h>

void CW_Addition(float v[3], float k[3]) 
{
    float vd[3];
    float kd[3];

    /* get v & k. */

    for (size_t j = 0; j < (sizeof(k)/sizeof(k[0]))+1; j++) {
        printf("%f\n", v[j]+k[j]);
    }

    
}

#endif
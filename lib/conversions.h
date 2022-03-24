#pragma once
#ifndef CONVERSION_H
#define CONVERSION_H

#define π 3.14

float rad2deg(float r) {
    return r * 180/π;
}

float deg2rad(float d) {
    return d * π/180;
}

#endif
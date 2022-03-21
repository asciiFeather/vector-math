#include <scalar_math.h>

#define N 3

int main(int argc, char const *argv[]) {
    float v[N] = {1.2, 4.4, 2.6};
    float k[N] = {2,   2,   5};
    
    CW_Addition(v, k);
    return 0;
}
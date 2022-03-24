#include <scalar_math.h>
#include <vector_util.h>
#include <conversions.h>
#define N 3

int main(int argc, char const *argv[]) {
    Vec3 v = {1.2, 4.4, 2.6};
    Vec3 k = {2, 2, 5};

    printf("Dot product: %f\n", V_DotProduct(&v, 20.0f));
    printf("Fast cos: %f\n", FastCos(0.3)); // SmA functions rounds up our values.
    printf("Sqrt of 4: %g\n", FastSqrt(4));
    return 0;
}
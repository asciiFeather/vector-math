#include <scalar_math.h>
#include <vector_util.h>
#define N 3

int main(int argc, char const *argv[]) {
    Vec3 v = {1.2, 4.4, 2.6};
    Vec3 k = {2, 2, 5};

    printf("%f\n", V_DotProduct(&v, 20.0f));
    return 0;
}
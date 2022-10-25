#include "chi.h"
#include <stdio.h>
#define SIZE 6

int main() {
    double ob[SIZE] = {21.0, 6.0, 17.0, 21.0, 15.0, 6.0};
    double ex[SIZE] = {20.64, 12.04, 17.2, 13.76, 11.18, 11.18};

    double out = chi_squared(ob, ex, SIZE);
    printf("%f\n", out);
    return 0;
}

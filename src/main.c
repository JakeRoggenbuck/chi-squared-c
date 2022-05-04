#include <stdio.h>
#define SIZE 6

double chi_squared(double *observed, double *expected, int n) {
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        double delta = (observed[i] - expected[i]);
        total += (delta * delta) / n;
    }

    return total;
}

int main() {
    double ob[SIZE] = {21.0, 6.0, 17.0, 21.0, 15.0, 6.0};
    double ex[SIZE] = {20.64, 12.04, 17.2, 13.76, 11.18, 11.18};

    double out = chi_squared(ob, ex, SIZE);
    printf("%f\n", out);
    return 0;
}

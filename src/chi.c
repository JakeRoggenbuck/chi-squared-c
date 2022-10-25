double chi_squared(double *observed, double *expected, int n) {
    double total = 0.0;

    for (int i = 0; i < n; i++) {
        double delta = (observed[i] - expected[i]);
        total += (delta * delta) / expected[i];
    }

    return total;
}

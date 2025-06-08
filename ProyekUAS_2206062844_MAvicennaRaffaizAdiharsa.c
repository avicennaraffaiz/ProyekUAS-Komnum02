#include <stdio.h>
#include <math.h>

#define G 9.81     // gravitasi
#define M 68.1     // massa parasutis
#define V 40.0     // kecepatan target
#define T 10.0     // waktu jatuh
#define EPSILON 0.01  // toleransi error (%)
#define MAX_ITER 100

// Fungsi f(c)
double f(double c) {
    return (G * M / c) * (1 - exp(-c * T / M)) - V;
}

// Fungsi utama bisection
void bisection(double xl, double xu) {
    if (f(xl) * f(xu) >= 0) {
        printf("Fungsi tidak berubah tanda pada interval [%.2f, %.2f]\n", xl, xu);
        return;
    }

    double xr = xl;
    double ea = 100.0;
    double xrold;
    int iter = 0;

    printf("Iterasi\txl\t\txu\t\txr\t\tea (%%)\n");

    while (ea > EPSILON && iter < MAX_ITER) {
        xrold = xr;
        xr = (xl + xu) / 2.0;
        double fr = f(xr);
        double test = f(xl) * fr;

        if (xr != 0.0)
            ea = fabs((xr - xrold) / xr) * 100.0;

        printf("%d\t%.6f\t%.6f\t%.6f\t%.6f\n", iter + 1, xl, xu, xr, ea);

        if (test < 0)
            xu = xr;
        else if (test > 0)
            xl = xr;
        else
            ea = 0;

        iter++;
    }

    printf("\nKoefisien drag c = %.6f\n", xr);
    printf("f(c) = %.6f\n", f(xr));
}

int main() {
    double xl = 12.0;
    double xu = 16.0;
    bisection(xl, xu);
    return 0;
}

#include <stdio.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_sf_bessel.h>

int main() {
    double x = 5.0;
    double y = gsl_sf_bessel_J0(x);
    for (double i = 0; i < 100; i++)
    printf("J0(%g) = %.18e\n", i, gsl_sf_bessel_J0(i));
    return 0;
}

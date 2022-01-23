//
// Created by hawking on 1/22/22.
//
#include <stdio.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_chebyshev.h>
#include "cheby.h"

double f(double x, void *p) {
    /* avoid unused parameter */
    (void) (p);

    /* implement step function */
    if (x < 0.5)
        return 0.25;
    else
        return 0.75;
}

double chebyapprox (int n, double (*f)(double x, void *p)) {
    int i;
    gsl_cheb_series *cs = gsl_cheb_alloc(40);
    gsl_function F;
    F.function = f;
    F.params = 0;
    
     /* initial parameters */
    gsl_cheb_init (cs, &F, 0.0, 1.0);

    for (i = 0; i < n; i++)
    {
    	double x = i / (double)n;
	double r10 = gsl_cheb_eval_n (cs, 10, x);
	double r40 = gsl_cheb_eval (cs, x);
	printf ("%g %g %g %g\n", x, GSL_FN_EVAL (&F, x), r10, r40);
	}
gsl_cheb_free (cs);

return 0;
}

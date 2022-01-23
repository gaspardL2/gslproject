//
// Created by hawking on 1/22/22.
//

#ifndef GSLPROJECT_CHEBY_H
#define GSLPROJECT_CHEBY_H

/* step function to implement in the GSL function for Chebyshev approximations */
double (*fptr)(double x, void *p);

double chebyapprox (int n, double (*f)(double x, void *p));
#endif //GSLPROJECT_CHEBY_H




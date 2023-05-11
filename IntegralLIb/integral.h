#ifndef integral_H // include guard
#define integral_H

double f1(double x);
double f2(double x, double y);
double rectangle_method(double a, double b, int n);
double trapezoid_method(double a, double b, int n);
double simpson_method(double a, double b, int n);
double euler(double x0, double y0, double xn, int n);
double verlet(double x2, double y2, double nx, int n);


#endif integral_H
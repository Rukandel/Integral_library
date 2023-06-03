#ifndef integral_H // include guard
#define integral_H

double f1(double x);
double f2(double x, double y);
double rectangle_method(double a, double b, int n);
double trapezoid_method(double a, double b, int n);
double Simpson_method(double a, double b, int n);
double Euler_method(double x0, double y0, double xn, int n);
double Verlet_method(double x0, double y0, double xn, int n);


#endif integral_H

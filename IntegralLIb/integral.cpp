#include <iostream>
#include <cmath>
double M_PI = 3.14159265358979323846;


double f1(double x) {
    return sin(x); // пример функции, здесь на вход подается формула для интегрирования 1-3 методом
}
double f2(double x, double y) { 
    return x * y;  // пример функции, здесь на вход подается формула для интегрирования 4-5 методом
}
double rectangle_method(double a, double b, int n) { // метод треугольнков 
    double h = (b - a) / n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x = a + i * h;
        sum += f1(x) * h;
    }
    return sum;
}

double trapezoid_method(double a, double b, int n) { // метод трапеций
    double h = (b - a) / n;
    double sum = 0.5 * (f1(a) + f1(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += f1(x);
    }
    return sum * h;
}

double Simpson_method(double a, double b, int n) { // метод Симпсона 
    double h = (b - a) / n;
    double sum = f1(a) + f1(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += 2 * f1(x) * (i % 2 + 1);
    }
    return sum * h / 3;
}


double Euler_method(double x0, double y0, double xn, int n) { // метод Эйлера
    double h = (xn - x0) / n;
    double x = x0, y = y0;
    for (int i = 1; i <= n; i++) {
        double k1 = f2(x, y);
        double k2 = f2(x + h / 2, y + k1 * h / 2);
        double k3 = f2(x + h / 2, y + k2 * h / 2);
        double k4 = f2(x + h, y + k3 * h);
        y += (k1 + 2 * k2 + 2 * k3 + k4) * h / 6;
        x += h;
    }
    return y;
}

double Verlet_method(double x0, double y0, double xn, int n) { // метод Верле
    double h = (xn - x0) / n;
    double x = x0, y = y0;
    double k1 = f2(x, y);
    for (int i = 1; i <= n; i++) {
        double y_half = y + k1 * h / 2;
        double k2 = f2(x + h / 2, y_half);
        y += k2 * h;
        k1 = f2(x + h, y);
        x += h;
    }
    return y;
}

#include <iostream>
#include <cmath>
#include "integral.h"
using namespace std;


int main() { // пример вызова
    int method;
    double a, b;
    int n, x0 = 0, y0 = 0, x = 0;
    cout << "Choose integration method:" << endl;
    cout << "1 - Rectangle method" << endl;
    cout << "2 - Trapezoid method" << endl;
    cout << "3 - Simpson method" << endl;
    cout << "4 - Eyler method" << endl;
    cout << "5 - Verlet method" << endl;
    cin >> method;
    cout << "Enter integration limits:" << endl;
    cin >> a >> b;
    cout << "Enter number of intervals:" << endl;
    cin >> n;
    double result;
    switch (method) {
    case 1: result = rectangle_method(a, b, n);
        cout << "Integral value: " << result << endl;
    case 2: result = trapezoid_method(a, b, n);
        cout << "Integral value: " << result << endl;
    case 3: result = Simpson_method(double a, double b, int n);
        cout << "Integral value: " << result << endl;
    case 4: result = Euler_method(double x0, double y0, double xn, int n);
        cout << "Integral value: " << result << endl;
    case 5: result = Verlet_method(double x0, double y0, double xn, int n);
        cout << "Integral value: " << result << endl;
    }
     return 0;
}

//P11916_aprox_e.cc

#include <iostream>
using namespace std;
 
double factorial(double i) {
    if (i == 0) return 1;
    return i*factorial(i - 1);
}
 
int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    double n;
    while (cin >> n) {
        double e = 0.0;
        for (double i = 0; i < n; ++i) {
            double a = factorial(i);
            double b = 1/a;
            e += b;
        }
        cout << "Amb " << int(n) << " terme(s) s'obte " << e << "." << endl;
    }
}

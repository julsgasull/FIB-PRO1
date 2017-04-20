//P18203_ultimfermat.cc

#include <iostream>
using namespace std;

int main(){
	bool trobat = false;
    int a, b, c, d;
	int x, y, z;
    while (cin >> a >> b >> c >> d) {
        if (a <= b and c <= d) {
            if ((a == 0 or c == 0) and !trobat) {
                trobat = true;
                z = a + c;
                x = a;
                y = c;
            }
        }
    }
    if (trobat) cout << x << "^3 + " << y << "^3 = " << z << "^3" << endl;
    else cout << "Sense solucio!" << endl;
}

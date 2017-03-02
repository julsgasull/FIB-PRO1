//P13623

#include <iostream>
using namespace std;

int main () {
        int n, suma, p0, p1;
        cin >> n;
        suma = 0;
        p0 = 0;
        p1 = n-1;
        char m;
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                        cin >> m;
                        if (j == p0 or j == p1) suma += m - '0';
                }
                ++p0;
                --p1;
        }
        cout << suma << endl;
}

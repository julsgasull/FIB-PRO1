//P57515_P0019_Rotacionsdreta.cc

#include <iostream>
using namespace std;

int count(int x) {
    int xif = 0;
    while (x != 0) {
        ++xif;
        x = x/10;
    }
    return xif;
}

int rotacio_dreta(int x, int k) {
	if (k > count(x)) k = k - count(x);
    if (k == count(x)) return x;
    
	int aux = 0;
    int mult = 1;
    for (int i = k; i != 0; --i) {
		aux = mult * (x%10) + aux;
		mult = 10 * mult;
		x = x/10;
    }
    
	mult = 1;
	for (int i = count(x); i != 0; --i) mult = mult *10;
	aux = aux*mult + x;
	return aux;
}

int main() {
	int x, k;
	while (cin >> x >> k) {
		cout << rotacio_dreta(x,k) << endl;
	}
}

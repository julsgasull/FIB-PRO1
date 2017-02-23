//P29448

#include <iostream>
using namespace std;

bool traspas (int n) {
	if (((n%4) == 0) and (((n%100) != 0) or (n/100)%4 == 0)) return true;
	return false;
}

int main() {
	int a, m, d;
	
	while (cin >> d >> m >> a) {
		bool correcta = false;
				
		if (m == 2) {
			if (traspas(a) and (1<= d and d <= 29)) correcta = true;
			else if (!traspas(a) and (1<= d and d <= 28)) correcta = true;
			else correcta = false;
		}

		else if (m >= 1 and m <= 12) {
			if ((m%2 != 0 and m <= 7) or (m%2 == 0 and m >= 8)) {
				if (1 <= d and d <= 31) correcta = true;
				else correcta = false;
			}
			else {
				if (1 <= d and d <= 30) correcta = true;
				else correcta = false;
			}
		}
		if (correcta) cout << "Data Correcta" << endl;
		else cout << "Data Incorrecta" << endl;
	}
	
}

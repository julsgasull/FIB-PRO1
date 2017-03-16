//Consolidation 1: 01. P57315_abc.cc

#include <iostream>
using namespace std;

//Sabem que A < B < C
// escriure numeros en ordre de lletres

int main() {
	int x, y, z;
	int max, med, min;
	cin >> x >> y >> z;
	
	if (x >= y and x >= z) {
		max = x;
		if (y >= z) {
			min = z;
			med = y;
		}
		else {
			min = y;
			med = z;
		}
	}
	
	else if (y >= z) {
		max = y;
		if (x >= z) {
			min = z;
			med = x;
		}
		else {
			min = x;
			med = z;
		}
	}
	
	else {
		max = z;
		if (x >= y) {
			min = y;
			med = x;
		}
		else {
			min = x;
			med = y;
		}
	}
	
	char m;
	
	for (int i = 1; i <= 3; ++i) {
		cin >> m;
		
		if (m == 'A') cout << min;
		else if (m == 'B') cout << med;
		else cout << max;
		
		if (i != 3) cout << " ";
	}
	cout << endl;
}

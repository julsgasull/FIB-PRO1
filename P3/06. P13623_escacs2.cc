//P13623

#include <iostream>
using namespace std;

int main() {
	int f, c;
	cin >> f >> c;
	char m;
	int suma = 0;
	
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> m;
			if ((i % 2 == 0 and j % 2 == 0) or (i % 2 != 0 and j % 2 != 0)) suma += m - '0';
		}
	}
	
	cout << suma << endl;
}

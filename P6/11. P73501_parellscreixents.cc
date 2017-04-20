//P73501_parellscreixents.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		int x, z;
		int cont = 0;
		cin >> x;
		while (x != 0) {
			cin >> z;
			if (x < z) ++cont;
			x = z;
		}
		cout << cont << endl;
	}
}

// P56549_canvibase.cc

#include <iostream>
using namespace std;

void binari(int n) {
	int q = n/2;
	if (q != 0) binari(q);
	cout << n%2;
}

void oct(int n) {
	int q = n/8;
	if (q != 0) oct(q);
	cout << n%8;
}

void hexa(int n) {
	int q = n/16;
	char k;
	if (q != 0) hexa(q);
	if (n%16 >= 10) {
		k = 'A' + (n%16) - 10;
		cout << k; 
	}
	else cout << n%16;
	
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << " = ";
		binari(n);
		cout << ", ";
		oct(n);
		cout << ", ";
		hexa(n);
		cout << endl;
	}
}

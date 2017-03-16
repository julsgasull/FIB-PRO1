//Consolidation 1: 02. P12943_ControlC202C.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char m;
	int conta = 0;
	int contb = 0;
	int contc = 0;
	for (int i = 0; i < n; ++i) {
		cin >> m;
		if (m == 'a') ++conta;
		else if (m == 'b') ++contb;
		else if (m == 'c') ++contc;
	}
	
	cout << "majoria de ";
	if (conta >= contb) {
		if (conta >= contc) {
			cout << 'a' << endl;
			cout << conta;
		}
		else {
			cout << 'c' << endl;
			cout << contc;
		}
	}
	else if (contb > conta) {
		if (contb >= contc) {
			cout << 'b' << endl;
			cout << contb;
		}
		else {
			cout << 'c' << endl;
			cout << contc;
		}
	}
	cout << " repeticio(ns)" << endl;
	
}

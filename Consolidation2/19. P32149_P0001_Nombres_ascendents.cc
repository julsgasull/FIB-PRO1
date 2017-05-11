//P32149_P0001_Nombres_ascendents.cc

#include <iostream>
using namespace std;

// ascendent <-> a la dreta d'una i només pot haver-hi una i+1
/* Feu un programa que, donada una seqüència de naturals,
indiqui si aquesta conté dos o més naturals ascendents
consecutius. */

bool es_ascendent(int n) {
	bool asc = true;
	int a, b;
	while (asc and n > 9) {
		a = n%10;
		n = n/10;
		b = n%10;
		if ((a - 1 != b) and not(b == 9 and a == 0)) asc = false;
	}
	return asc;
}

int main() {
	int n;
	int count = 0;
	
	while (cin >> n and count < 2) {
		if (es_ascendent(n)) ++count;
		else count = 0;
	}
	
	if (count == 2) cout << "SI" << endl;
	else cout << "NO" << endl;
}

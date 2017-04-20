//P90620_picadestats.cc

#include <iostream>
using namespace std;

int main() {
	int p;
	cin >> p;
	int cim = 0;
	int primer, segon;
	segon = p;
	
	while (p != 0 && cim != 2) {
		primer = p;
		cin >> p;
		segon = p;
		
		if (cim == 0) {
			if (segon > primer && segon > 3143) ++cim;
		}
		else if (cim == 1) {
			if (primer > segon) ++cim;
			else cim = 0;
		}
	}
	
	if (p != 0 && cim == 2) cout << "SI" << endl;
	else cout << "NO" << endl;
}

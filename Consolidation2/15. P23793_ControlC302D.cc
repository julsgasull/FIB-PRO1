//P23793_ControlC302D.cc

#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
	if (a1 - a2 != 0) return a1 - a2;
	if (m1 - m2 != 0) return m1 - m2;
	return d1 - d2;
}

int main() {
	int d1, m1, a1;
	int d2, m2, a2;
	char c;
	while (cin >> d1 >> c >> m1 >> c >> a1) {
		cin >> d2 >> c >> m2 >> c >> a2;
		int res = compara(d1, m1, a1, d2, m2, a2);
		if (res < 0) cout << "anterior" << endl;
		else if (res == 0) cout << "iguals" << endl;
		else cout << "posterior" << endl;
	}
}

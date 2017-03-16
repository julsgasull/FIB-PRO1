//Consolidation 1: 03. P57846_max2int.cc

#include <iostream>
using namespace std;

int max2(int a, int b) {
	if (a >= b) return a;
	return b;
}

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << max2(a, b) << endl;
	}
}

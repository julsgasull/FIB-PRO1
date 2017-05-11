//P42156_girant5.cc

#include <iostream>
#include <string>
using namespace std;

void girar(int& n) {
	string s;
	if (cin >> s) {
		++n;
		girar(n);
		
		if (n > 0) {
			cout << s << endl;
			n -= 2;
		}
	}
}

int main() {
	int n = 0;
	girar(n);
}

//P52926_girantparaules2.cc

#include <iostream>
#include <string>
using namespace std;

void girar(string n) {	
	if (cin >> n and n != "fi") {
		girar(n);
		cout << n << endl;
	}
}

int main() {
	string n;
	girar(n);
}

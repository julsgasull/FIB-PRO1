//P26041_girantparaules1.cc

#include <iostream>
#include <string>
using namespace std;

void girar() {	
	string n;
	if (cin >> n) {
		girar();
		cout << n << endl;
	}
}

int main() {
	girar();
}

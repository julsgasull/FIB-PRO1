//P38877_girantparaules4.cc

#include <iostream>
#include <string>
using namespace std;

void girar(int& n) {
	string s;
	if (cin >> s) {
		girar(n);
	
		if (n != 0) {
			cout << s << endl;
			--n;
		}
	}
}

int main() {
	int n;
	cin >> n;
	girar(n);
}

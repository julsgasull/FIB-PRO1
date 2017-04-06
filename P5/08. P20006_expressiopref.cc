//P20006_expressiopref.cc

#include <iostream>
using namespace std;

int operacio() {
	char e;
	cin >> e;
	
	if ('0' <= e and e <= '9') {
		return e - '0';
	}
	
	else {
		int x = operacio();
		int y = operacio();
		
		if (e == '+') return x+y;
		if (e == '-') return x-y;
		return x*y;
	}
}

int main() {
	cout << operacio() << endl;
}

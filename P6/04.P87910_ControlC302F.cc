// P87910_ControlC302F.cc

#include <iostream>
using namespace std;

void morse(char c, int& n) {
	if (c == 'a') {
		n += 2;
		cout << ".-";
	}
	else if (c == 'e') {
		n += 1;
		cout << ".";
	}
	else if (c == 'i') {
		n += 2;
		cout << "..";
	} 
	else if (c == 'o') {
		n += 3;
		cout << "---";
	}
	else if (c == 'u') {
		n += 3;
		cout << "..-";
	}
}

int main() {
	int n;
	cin >> n;
	char c;
	int aux = n;
	n = 0;
	while (cin >> c) {
		morse(c,n);
		if (aux == n or aux < n) {
			cout << endl;
			n = 0;
		}
	}
	if (n != 0) cout << endl;
	cout << "STOP" << endl;
}

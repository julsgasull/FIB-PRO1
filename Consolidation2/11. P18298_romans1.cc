//P18298_romans1.cc

#include <iostream>
using namespace std;

void romans (int n, char a, char b, char c) {
	if (n==9) cout << a << c;
	else if (n==8) cout << b << a << a << a;
	else if (n==7) cout << b << a << a;
	else if (n==6) cout << b << a;
	else if (n==5) cout << b;
	else if (n==4) cout << a << b;
	else if (n==3) cout << a << a << a;
	else if (n==2) cout << a << a;
	else if (n==1) cout << a;
}

int main () {
	int n;
	while (cin>> n) {
		cout << n << " = ";
		
		romans(n/1000,'M','?','?');
		
		n %= 1000;
		romans(n/100, 'C','D','M');
		
		n %= 100;
		romans(n/10, 'X','L','C');
		
		n %= 10;
		romans(n,'I','V','X');
		
		cout << endl;
	}
	
}

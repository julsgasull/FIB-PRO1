//P92351

#include <iostream>
using namespace std;

int main() {
	int a, b, d, r;
	cin >> a >> b;
	
	if (a%b < 0) {
		d = a/b - 1;
		r = a%b + b;
	}
	
	else {
		d = a/b;
		r = a%b;
	}
	
	cout << d << " " << r << endl;
}

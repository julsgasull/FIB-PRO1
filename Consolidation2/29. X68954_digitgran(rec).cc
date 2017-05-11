//X68954_digitgran(rec).cc

#include <iostream>
using namespace std;

int gran(int n) {
	
	if (n < 10) return n;
	
	else {
		int max = gran(n/10);
		if (n%10 > max) max = n%10;
		return max;		
	}
}

int main() {
	int n;
	while (cin >> n) {
		cout << "Maximum digit of " << n << " is " << gran(n) << "." << endl;
	}
	
	
}

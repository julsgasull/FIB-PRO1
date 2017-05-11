//X33599_sumasenarsrec.cc

#include<iostream>
using namespace std;

int suma_sen(int n) {
	if (n == 0) return 0;
	else {
		int s = suma_sen(n/10);
		int d = n%10;
		if (d % 2 != 0) s += d;
		return s;
	}
}

int main() {
	int n;
	while (cin >> n) {
		cout << "The sum of odd digits of " << n << " is " << suma_sen(n) << "." << endl;
	}
}

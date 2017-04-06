// P96965_reducciódigits.cc

#include <iostream>
using namespace std;

int suma_digits(int x) {
	if (x < 10) return x;
	return x%10 + suma_digits(x/10);
}

int reduccio_digits(int x) {
	int res = x;
	while (res >= 10) {
		res = suma_digits(res);
	}
	return res;
}

int main() {
	int x;
	while (cin >> x) {
		cout << reduccio_digits(x) << endl;
	}
}

//P22467_primersperfectes.cc

#include <iostream>
using namespace std;

bool primer(int n) {
	
	if (n <= 1) return false;
	
	for (int i = 2; i*i <= n; ++i) {
		if (n%i == 0) return false;
	}
	
	return true;
}

bool es_primer_perfecte(int n) {
	if (!primer(n)) return false;

	int res = 0;
	int digits = 0;
	
	while (n > 0) {
		res += n%10;
		n /= 10;
		++ digits;
	}
	
	bool resprimer = primer(res);
	
	if (resprimer && digits == 1) return true;
	if (resprimer) return es_primer_perfecte(res);
	return false;
	
}

int main() {
	int n;
	while (cin >> n) {
		cout << es_primer_perfecte(n) << endl;	
	}
}

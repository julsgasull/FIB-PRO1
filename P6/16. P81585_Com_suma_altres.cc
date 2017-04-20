//P81585_Com_suma_altres.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
		int suma = 0;
		int max = 0;
		int seq;
		for (int i = 0; i < n; ++i) {
			cin >> seq;
			suma += seq;
			if (seq > max) max = seq;
		}
		if (suma - max == max) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

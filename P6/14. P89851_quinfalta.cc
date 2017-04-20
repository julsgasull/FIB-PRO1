//P89851_quinfalta.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int res = 0;
		for (int i = 1; i <= n; ++i) {
			res += i;
		}
		int seq;
		int suma = 0;
		for (int j = 0; j < n-1; ++j) {
			cin >> seq;
			suma += seq;
		}
		cout << res - suma << endl;
	}
}

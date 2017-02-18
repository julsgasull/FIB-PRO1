//P19724

#include <iostream>
using namespace std;

int main() {
	int h, m, t;
	while (cin >> h >> m >> t) {
		int c = 0;
		for (int i = 0; i < t; ++i) {

			// Sumant minut a minut
			if (m == 59) {
				if (h == 23) {
					h = 0;
					m = 0;
				}
				else {
					m = 0;
					++h;
				}
			}
			else ++m;
			cout << h << ':' << m << endl;

			// Veure la hora i sumar campanades
			if (m == 1) {
				if (h == 12) c += 100;
				else if (h == 0) c += 12;
				else {
					if (13 <= h and h <= 23) c += h - 12;
					else c += h;
				}
			c += 4;
			}

			else {
				if (m == 15 + 1) c += 1;
				else if (m = 30 + 1) c += 2;
				else if (m = 45 + 1) c += 3;
			}
		}

		cout << c << endl;
	}
}

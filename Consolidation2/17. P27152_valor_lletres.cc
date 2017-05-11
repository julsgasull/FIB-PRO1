//P27152_valor_lletres.cc

#include <iostream>
using namespace std;

/* valores:
	- 1: a, e
	- 2: o, s
	- 3: d, i, n, r
	- 4: c, l, t, u
	- 5: m, p;
	- 6: b, f, g, h, j, q, v, x, y, z
	- 7: k, w
*/

int main() {
	char c;
	int count = 0;
	while (cin >> c) {
		if (c != ' ') {
			if (c == 'a' or c == 'e') ++count;
			else if (c == 'o' or c == 's') count += 2;
			else if (c == 'd' or c == 'i' or c == 'n' or c == 'r') count += 3;
			else if (c == 'c' or c == 'l' or c == 't' or c == 'u') count += 4;
			else if (c == 'm' or c == 'p') count += 5;
			else if (c == 'k' or c == 'w') count += 7;
			else count += 6;
		}
	}
	cout << count << endl;
}

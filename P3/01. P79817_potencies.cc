//P79817

#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int c = 1;
		for (int i = 0; i < b; ++i) {
			c = a*c;
		}
		cout << c << endl;
	}
}

//X08783

#include <iostream>
using namespace std;

int main() {
	int n, b;
	while (cin >> b >> n) {
		int count = 1;
		while (n >= b) {
			n = n / b;
			++count;	
		}
		cout << count << endl;
	}
}

//P80660

#include <iostream>
using namespace std;

int main() {
	int n;
	
	while (cin >> n) {
		int suma = 0;
	
		while (n != 1) {
			++suma;
			if (n % 2 == 0) n /= 2;
			else n = n*3 + 1;
		}	
		cout << suma << endl;
	}
}

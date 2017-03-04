//P87323

#include <iostream>
using namespace std;

int main() {
	int f, c;
	cin >> f >> c;
	int num;
	
	for (int i = 1; i <= f; ++i) {
		num = 1;
		for (int j = 1; j <= c; ++j) {
			if (i >= j) cout << (i - j) % 10;
			else {
				cout << num % 10;
				++ num;
			}
			
		}
		cout << endl;
	}
}

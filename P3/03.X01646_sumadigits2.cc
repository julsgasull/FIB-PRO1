//X01646

#include <iostream>
using namespace std;

int main() {
	
	int b;
	cin >> b;
	
	int n;
	while (cin >> n) {
		
		int suma = 0;
		cout << n << ": ";
		
		while (n > 0) {
			suma += n % b;
			n = n / b;
		}
		
		cout << suma << endl;
	}
}

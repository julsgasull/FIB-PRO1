//P61061

#include <iostream>
using namespace std;

int main() {
	int n;
	int aux;
	while (cin >> n) {
		int p = 1;
		
		if (n < 10) cout << "El producte dels digits de " << n << " es " << n << "." << endl;
		
		else {
			while (n >= 10) {
				int aux = n;
				while (n > 0) {
					p = p * (n%10);
					n = n/10;
				}
				cout << "El producte dels digits de " << aux << " es " << p << "." << endl;
				n = p;
				p = 1;
			}
		}
		
		cout << "----------" << endl;
	}
}

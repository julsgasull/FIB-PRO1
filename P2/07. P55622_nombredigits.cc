//P55622

#include <iostream>
using namespace std;

int main () {
	int n;
	cin >> n;
	int count = 0;
	
	if (n < 10) count = 1;
	
	else {
		int aux = n;
		while (aux >= 10) {
			aux = aux/10;
			++count;
		}
		++count;
	}
	
	cout << "El nombre de digits de " << n << " es " << count << "." << endl;
}

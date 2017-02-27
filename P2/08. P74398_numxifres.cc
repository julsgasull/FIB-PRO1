//P74398

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i <= 16; ++i) {
		int aux = n;
		int xifres = 1;
		cout << "Base " << i << ": ";
		
		while (aux >= i) {
			aux = aux/i;
			++ xifres;
		}
		cout << xifres << " cifras." << endl;
	}
	
}

//P14410_siracusaagain.cc

#include <iostream>
using namespace std;

/* 
ALGORISME: 
	if (n == 1) stop
	else if (n % 2 == 0) n = n/2;
	else n = 3*n + 1;

ENTRADA: 
	int m, p;
	
SORTIDA: 
	- quins naturals € [1, m] arriben a 1 en passos >= p
	- maxim numero més gran entre les successions
*/

void convergeix(int n, int& k, int& lluny) {
	k = 0;
	lluny = 1;
	while (n != 1) {
		if (n > lluny) lluny = n;
		if (n%2 == 0) n = n/2;
		else n = n*3 + 1;
		++k;
	}
}

int main() {
	int m, p;
	cin >> m >> p;
	
	int k;
	int lluny = 1;
	int lluny_ant;

	for (int i = 1; i <= m; ++i) {
		convergeix(i, k, lluny_ant);
		if (k >= p) cout << i << endl;
		if (lluny_ant > lluny) lluny = lluny_ant;
	}
	cout << "S'arriba a " << lluny << "." << endl;
}

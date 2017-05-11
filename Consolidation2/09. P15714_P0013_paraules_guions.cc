//P15714_P0013_paraules_guions.cc

#include <iostream>
using namespace std;

/* 
seq de paraules (minuscules) separades amb guions
poden haver guions a davant i/o darrere
seq acaba en un puny
paraules:
	- curtes: #lletres < 5
	- mitjanes: 5 <= #lletres  <= 9
	- llargues: 9 < #lletres
*/

int main() {
	char c;
	
	//tipus de paraules
	int curt = 0;
	int mitj = 0;
	int llarg = 0;
	
	//comptador
	int cont = 0;
	
	while (cin >> c) {
		//quan sigui paraula
		if (c != '-' and c != '.') ++cont;
		
		//quan sigui - o .
		else if (c == '-' or c == '.') {
			if (cont != 0 and cont < 5) ++curt;							//curta
			else if (5 <= cont and cont <= 9) ++mitj;		//mitjana
			else if (9 < cont) ++llarg;						//llarga
			cont = 0;
		}
	}
	
	cout << curt << ',' << mitj << ',' << llarg << endl;
}

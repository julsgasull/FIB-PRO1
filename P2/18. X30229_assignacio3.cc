//X30229

#include <iostream>
using namespace std;

//n estalvis, + assignaci� setmanal (as setmana senar i ap setmana parell), 
// cada setmana -di (despeses)

// sortida: saldo final

int main() {
	int as, ap, n;
	cin >> as >> ap >> n;
	
	int saldo = n; //inicialment
	
	int setmana = 1; //primera setmana (que s'anir� incrementant
	
	int d;
	while (cin >> d) {
		if (setmana % 2 != 0) {		// si setmana �s imparell
			saldo += as - d;	//al saldo li sumem l'assignaci� menys la despesa
		} 
		else {						//si la setmana �s parell
			saldo += ap - d;	//al saldo li sumem l'assignaci� menys la despesa
		}
		++setmana;
		
		cout << saldo << endl;
	}
	
}

//X30229

#include <iostream>
using namespace std;

//n estalvis, + assignació setmanal (as setmana senar i ap setmana parell), 
// cada setmana -di (despeses)

// sortida: saldo final

int main() {
	int as, ap, n;
	cin >> as >> ap >> n;
	
	int saldo = n; //inicialment
	
	int setmana = 1; //primera setmana (que s'anirà incrementant
	
	int d;
	while (cin >> d) {
		if (setmana % 2 != 0) {		// si setmana és imparell
			saldo += as - d;	//al saldo li sumem l'assignació menys la despesa
		} 
		else {						//si la setmana és parell
			saldo += ap - d;	//al saldo li sumem l'assignació menys la despesa
		}
		++setmana;
		
		cout << saldo << endl;
	}
	
}

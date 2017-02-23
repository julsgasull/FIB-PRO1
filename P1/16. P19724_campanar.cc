//P19724

#include <iostream>
using namespace std;

int main() {
	int h, m, t; //hora(hh:mm) i periode temps(t)
	
	while (cin >> h >> m >> t) {
		
		//Descomposició temps:
		int hora = h*60 + m; //passar hora a min
		int dies = t/1440; //1440min == 24h == 1dia
		int campanes = dies*484; //484 campanades/dia
		int temps_restant = t%1440;
		
		// Bucle per sumar campanades
		for (int i = 0; i < temps_restant; ++i) {
			++hora;	//sumar un min
			if (hora == 1440) hora = 0;	//h == 24:00 --> h = 00:00
			
			h = hora/60; //min --> hh:xx
			m = hora%60; //hh:mm
			
			//Hora punta (sumar hora que es + 4 quarts)
			if (m == 1) {
				if (h == 12) campanes += 100; //12:00 sonen 100 vegades
				else if (h == 0) campanes += 12;
				else {
					if (h > 12) campanes += h - 12;
					else campanes += h;
				}
				campanes += 4;
			}
			
			//Quarts
			else {
				if (m == 15 + 1) campanes += 1;	//xx:16
				else if (m == 30 + 1) campanes += 2; //xx:31
				else if (m == 45 + 1) campanes += 3; //xx:46
			}
		}

		cout << campanes << endl;
	}
}

//P67171

#include <iostream> 
using namespace std;


bool podem_saber_hora (int h, int m, int& c){ //Mira si podem saber l'hora que és, i si sona alguna campanada, li afegeix a c
	
	if (m%15 != 0) return false;
	
	if (h != 1 and m == 0) { //Són les x:00. Sonen x campanades. Si és diferent de la 1, podem saber quina hora és
		c += h;
		return true; 
	}
	
	if (m == 15 or m == 30 or m == 45) ++c; //Sonen els quarts
	
	if (h == 1){
		if (m == 0) ++c; //Si és la 1:00, sona una campanada
		if (c == 7) return true; //si ha sonat 7 cops una campanada, vol dir que t'has llevat al rang (12:00,12:15]. No hi ha dubte
	}
	return false;
}

//Suma 1 minut, i ho arregla
void incrementar_hora(int& h, int& m) {
	++m;
	if (m == 60) {
		m = 0;
		++h;
		if (h > 12) h -= 12;
	}
}

int main () {
	
	int h, m;
	
	while (cin >> h >> m) {
		
		if (h > 12) h -= 12;
		else if (h == 0) h = 12;
		
		int t = 0, c = 0; //Temps que passarà, i campanades que sentirà
		while (!podem_saber_hora (h, m, c)) {
			++t;
			incrementar_hora(h,m);
		}
		cout << t << ' ' << c << endl;
	}
}

//P72570_rellotge.cc

#include <iostream>
using namespace std;


void llegeix_hora(int&h, int&m, int&s) {
	//hores
	int auxh = h;
	h = 0;
	int mult = 1;
	while (auxh != 0) {
		if (auxh%10 == 1) h += mult;
		mult *= 2;
		auxh /= 10;
	}
	//minuts
	int auxm = m;
	m = 0;
	mult = 1;
	while (auxm != 0) {
		if (auxm%10 == 1) m += mult;
		mult *= 2;
		auxm /= 10;
	}
	//segons
	int auxs = s;
	s = 0;
	mult = 1;
	while (auxs != 0) {
		if (auxs%10 == 1) s += mult;
		mult *= 2;
		auxs /= 10;
	}
}

void escriu_hora(int h, int m, int s) {
	cout << h << ":" << m << ":" << s << endl;
}

//Pre: Llegeig una seq��ncia n de codificacions d'hora binaries on * �s 1 i $ �s 0
//Post: Escriu l'hora en el format convencional
int main() {
	int n;
	cin >> n;
	char c;
	while (n != 0) {
		int count = 3;
		int hms = 1;
		int h = 0, m = 0, s = 0;
		cin >> c;
		--count;
		while (count >= 0) {
			int mult = 1;
			while (cin >> c && c != '|') {
				int i;
				if (c == '*') i = 1;
				else if (c == '$') i = 0;
				if (hms == 1) {
					h = (h * mult) + i;
				}
				else if (hms == 2) {
					m = (m * mult) + i;
				}
				else if (hms == 3) {
					s = (s * mult) + i;
				}
				mult = 10;
			}
			--count;
			++hms;
		}
		llegeix_hora(h, m, s);
		escriu_hora(h, m, s);
		--n;
	}
}

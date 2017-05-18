//X12847_battleship(1).cc


#include <iostream>
#include <vector>
using namespace std;

const int MID_TAUL = 10;		//constant de la mida
 
typedef vector<bool> Filab;		//bool: si '.' false, si 'x' true
typedef vector<Filab> Tauler;


void llegeix_vaixell(Tauler&mat) {
    char f, o;		//f = lletra, o = orientació
    int c, m;		//c = numero, m = mida
    cin >> f >> c >> m >> o;
    //per posar com matriu (0, 1, ... n-1)
	f -= 'a';		
    c -= 1;
    
    //recorrer horitzontal o vertical -> canviar a true
    if (o == 'h') {
		for (int j = 0; j < m; ++j) mat[f][j + c] = true;
	}
    else {
		for (int j = 0; j < m; ++j) mat[j + f][c] = true;
	}
}

void pinta_tauler(const Tauler&mat) {
    cout << "  12345678910" << endl;
    for (int i = 0; i < MID_TAUL; ++i) {
    	cout << char(i + 'a') << ' ';
        for (int j = 0; j < MID_TAUL; ++j) {
            if (mat[i][j]) cout << 'X';			//true 'X'
            else cout << '.';					//false '.'
        }
        cout << endl;
    }
    cout << endl;
}

int distancia(int i, int j, int k, int l) { 		//Exemple: a1 -> k~=a, l~=1
    int d1 = k - i;
    int d2 = l - j;
    //valor absolut
    if (d1 < 0) d1 *= -1; 
    if (d2 < 0) d2 *= -1;
    
    //retorna minima
    if (d1 > d2) return d1;
    else return d2;
}
 
int main() {
    //primera part
	Tauler mat(MID_TAUL, Filab(MID_TAUL, false));		//inicialitzo tauler false
    for (int i = 0; i < MID_TAUL; ++i) llegeix_vaixell(mat);	//pq t'entren 10 pos
    pinta_tauler(mat);
    
    //segona part
    char f2;			//et van entrant posicions per tocar vaixells
    int c2;
    while (cin >> f2 >> c2) {
        if (mat[f2 - 'a'][c2 - 1]) cout << f2 << c2 << " tocat!" << endl;
        else {
            int dismin = MID_TAUL - 1;	//distancia minima		
			int i = 0;
			while (i < MID_TAUL and dismin > 1) {
				int j = 0;
				while (j < MID_TAUL and dismin > 1) {
					if (mat[i][j]) {
						int d = distancia(i, j, f2 - 'a', c2 - 1);
						if (d < dismin) dismin = d;
					}
					++j;
				}
				++i;
			}
            cout << f2 << c2 << " aigua! vaixell mes proper a distancia " <<
            dismin << endl;
        }
    }
}

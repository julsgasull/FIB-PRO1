//P18660_sopa_lletres.cc

#include <vector>
#include <iostream>
#include <string>
using namespace std;

//sopa de lletres: horitzontal(->), vertical(|), o diagonal(\)
//entrada: x, m, n (int), x paraules, matriu de chars (n*m) [a,z]
//sortida: trobar paraules i treure matriu amb les paraules en maj

typedef vector< vector<char> > Matriu;

void llegir(Matriu& M) {
	int n = M.size();					//files
	int m = M[0].size();				//columnes
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> M[i][j];
		}
	}
}

//Indica si la paraula p apareix a la Matriu començant a la posicio (x,y)
//i avançant en la direccio (dx,dy)
bool apareix(string p, const Matriu& sopa, int i, int j, int di, int dj) {
	int n = p.length();
	int f = sopa.size();		//files
	int c = sopa[0].size();		//columnes
	int k = 0;
	while (k < n and i < f and j < c) {
		if (sopa[i][j] != p[k]) return false;
		++k;
		i += di;
		j += dj;
	}
	return (k == n);
}


//Cal que s sigui prou petit per no sortir de la Matriu
void marca(Matriu& sopa2, int i, int j, int di, int dj, int s) {
	for (int r = 0; r < s; ++r) {
		int elem = sopa2[i][j];
		//si minuscula
		if (elem >= 'a' and elem <= 'z') elem = elem - 'a' + 'A';
		sopa2[i][j] = elem;
		i += di;
		j += dj;
	}
}


void escriure(const Matriu& M) {
	int m = M.size(); 		//files
	int n = M[0].size();	//columnes
	
	for (int i = 0; i < m; ++i) {
		cout << M[i][0];
		for (int j = 1; j < n; ++j) {
			cout << " " << M[i][j];
		}
		cout << endl;
	}
}

int main() {
	bool primer = true;
	int x, m, n;
	//x paraules, m files, n columnes
	while (cin >> x >> m >> n) {
		//vector de paraules
		vector<string> paraules(x);
		for (int i = 0; i < x; ++i) cin >> paraules[i];
		
		//matriu
		Matriu sopa(m, vector<char>(n));
		llegir(sopa);
		
		//copia per majus
		Matriu sopa2 = sopa;
		
		//buscar
		
		for (int i = 0; i < m; ++i) {  			//files
			for (int j = 0; j < n; ++j) {		//columnes
				for (int k = 0; k < x; ++k) { 	//paraules
					//horitzontal
					if (apareix(paraules[k], sopa, i, j, 0, 1)) {
						marca(sopa2, i, j, 0, 1, paraules[k].length());
					}
					//vertical
					if (apareix(paraules[k], sopa, i, j, 1, 0)) {
						marca(sopa2, i, j, 1, 0, paraules[k].length());
					}
					//diagonal
					if (apareix(paraules[k], sopa, i, j, 1, 1)) {
						marca(sopa2, i, j, 1, 1, paraules[k].length());
					}
				}
			}
		}
		
		if(primer) primer = false;
		else cout << endl;
		
		escriure(sopa2);
	}	

}

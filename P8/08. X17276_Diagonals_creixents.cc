// 08. X17276_Diagonals_creixents.cc

#include <iostream>
#include <vector>
using namespace std;

//entra: matriu n*m, posició inicial dins mat
//sortida: diagonals (estrict) creixents fins l'extrem


typedef vector < vector<int> > Matriu;

void llegir(Matriu& M) {
	int n = M.size();					//files
	int m = M[0].size();				//columnes
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> M[i][j];
		}
	}
}

bool increasing_d(const Matriu M, int a, int b) {
	int f = M.size();
	int c = M[0].size();
	
	//dalt-dreta
	int i = a - 1;
	int j = b + 1;
	int comp = M[a][b];
	while (i >= 0 and j < c) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		--i;
		++j;
	}
	
	//dalt-esquerra
	i = a - 1;
	j = b - 1;
	comp = M[a][b];
	while (i >= 0 and j >= 0) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		--i;
		--j;
	}
	
	//baix-esquerra
	i = a + 1;
	j = b - 1;
	comp = M[a][b];
	while (i < f and j >= 0) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		++i;
		--j;
	}
	
	//baix-dreta
	i = a + 1;
	j = b + 1;
	comp = M[a][b];
	while (i < f and j < c) {
		if (M[i][j] > comp) comp = M[i][j];
		else return false;
		++i;
		++j;
	}
	
	return true;
}


int main() {
	int f, c;
	while (cin >> f >> c) { //Tamany matriu
		Matriu M(f, vector<int>(c));
		llegir(M);
		cin >> f >> c; //Posicio inicial
		if (increasing_d(M, f, c)) cout << "si" << endl;
		else if (not increasing_d(M, f, c)) cout << "no" << endl;
	}
}

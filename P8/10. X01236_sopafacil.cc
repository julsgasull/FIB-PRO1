//10. X01236_sopafacil.cc

#include <iostream>
#include <vector>
#include <string>
using namespace std;


typedef vector< vector<char> > Matriu;

/*
Pre: Rep una matriu per emplenarla
Post: Escriu els valors corresponents a cada casella
*/
void llegir(Matriu& a) {
	int tam = a.size();
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			cin >> a[i][j];
		}
	}
}

/*
Pre: i, j son index valids de la matriu a-
Post: retorna cert si i nomes si (i, j) es una posicio de inici
diagonal de la paraula s a la matriu a.
*/
bool es_subparaula(const string& s, const Matriu& a, int i, int j) {
	int mida = s.size();
	bool existeix = true;
	int k = 0;
	while (existeix and k < mida) {
		if (a[i][j] == s[k]) {
			++k;
			++i;
			++j;
		}
		else existeix = false;
	}
	return existeix;
}


/*
Pre: Llegeix m sequencies de matrius a de tamany m i una paraula
Post: escriu true si i nomes si la paraula s apareix en
alguna diagonal de la matriu a. En cas contrari escriu fals
*/
int main() {
	int m;
	cin >> m;
	while (m != 0) {
		
		string s;
		int n;
		cin >> s >> n;
		
		Matriu a(n, vector<char>(n));
		llegir(a);
		
		int tam = s.size();
		
		bool trobat = false;
		for (int i = 0; i <= n-tam and !trobat; ++i) {
			for (int j = 0; j <= n-tam and !trobat; ++j) {
				if (es_subparaula(s, a, i, j)) trobat = true;
			}
		}
		if (not trobat) cout << "false" << endl;
		else cout << "true" << endl;
		--m;
	}
}

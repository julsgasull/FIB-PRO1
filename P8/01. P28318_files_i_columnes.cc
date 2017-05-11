//P28318_files_i_columnes.cc

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// llegir matriu
// escriure files, columnes i elements que demanin
// entrada: matriu (n*m), consultes {"fila" ni, "columna" mi, "element" ni mj}


typedef vector< vector<int> > matriu;

void llegir(matriu& M) {

	int n = M.size();		//files
	int m = M[0].size();	//columnes
	
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> M[i][j];
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	
	//matriu n*m
	matriu M(n, vector<int>(m));
	
	llegir(M);
	
	string s;
	int r;
	
	while (cin >> s) {
		//fila
		if (s == "fila") {
			cin >> r;
			cout << "fila " << r << ":";
			for (int k = 0; k < m; ++k)	cout << " " << M[r-1][k];
			cout << endl;
		}
		
		//columna
		else if (s == "columna") {
			cin >> r;
			cout << "columna " << r << ":";
			for (int q = 0; q < n; ++q)	cout << " " << M[q][r-1];
			cout << endl;
		}
		
		//element
		else {
			cin >> r;
			int t;
			cin >> t;
			cout << "element " << r << " " << t << ": ";
			cout << M[r-1][t-1] << endl;	
		}
	} 
	
}

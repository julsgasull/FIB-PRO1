//P37390_productematrius.cc

#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matriu;

void llegir(Matriu& M) {
	int n = M.size();					//files
	int m = M[0].size();				//columnes
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> M[i][j];
		}
	}
}

Matriu producte(const Matriu& a, const Matriu& b) {
	int n = a.size();
	Matriu P(n, vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int aux = 0;
			for (int k = 0; k < n; ++k) aux += a[i][k] * b[k][j];
			P[i][j] = aux;
		}
	}	
	return P;
}




int main () {
    int n;
    while (cin >> n) {
        
        //Matrius
		Matriu A(n, vector<int>(n));
        Matriu B(n, vector<int>(n));
        
        //les llegeixo
		llegir(A);
		llegir(B);
    
        //producte
		Matriu C = producte(A,B);
        
        
		for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

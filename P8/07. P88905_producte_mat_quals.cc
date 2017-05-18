//07. P88905_producte_mat_quals.cc

#include <vector>
#include <iostream>
using namespace std;


typedef vector< vector<int> > Matriu;

Matriu producte (const Matriu& a, const Matriu& b) {
	int filesa = a.size();
	int columnesa = a[0].size();
	int columnesb = b[0].size();
	
	Matriu mat(filesa, vector<int>(columnesb, 0));
	
	for (int i = 0; i < filesa; ++i) {
		for (int j = 0; j < columnesb; ++j) {
			for (int k = 0; k < columnesa; ++k) {
				mat[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	return mat;
}


int main ()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p,vector<int>(q));
        Matriu B(q,vector<int>(r));
        for (int i=0; i<p; ++i) {
            for (int j=0; j<q; ++j) {
                cin >> A[i][j];
        }   }
        for (int i=0; i<q; ++i) {
            for (int j=0; j<r; ++j) {
                cin >> B[i][j];
        }   }
        Matriu C = producte(A,B);
        for (int i=0; i<p; ++i) {
            for (int j=0; j<r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}

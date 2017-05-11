//P27498_transposta.cc

#include <iostream>
#include <vector>
using namespace std;

//transposta de matriu quadrada m(n*n)

typedef vector< vector<int> > Matriu;

void transposa(Matriu& m) {
	//mida (n*n)
	int n = m.size();
	
	Matriu P(n, vector<int>(n));
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			P[j][i] = m[i][j];
		}
	}
	
	m = P;
}

int main() {
	
}

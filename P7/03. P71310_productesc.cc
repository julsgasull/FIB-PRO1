//P71310_productesc.cc

#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
	int n = u.size();
	double suma = 0;
	for (int i = 0; i < n; ++i) {
		suma += u[i] * v[i];
	}
	return suma;
}

int main() {	
}

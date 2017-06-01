//P81996_dicotomicsearch.cc
//recursiu
#include <iostream>
#include <vector>
using namespace std;


int posicio(double x, const vector<double>& v, int esq, int dre) {
	if (esq > dre) return -1;
	int pos = (esq + dre) / 2;
	if (x < v[pos]) return posicio(x, v, esq, pos-1);
	if (x > v[pos]) return posicio(x, v, pos+1, dre);
	return pos;
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int esq, dre;
            cin >> x >> esq >> dre;
            cout << posicio(x, V, esq, dre) << endl;
        }
    }
}

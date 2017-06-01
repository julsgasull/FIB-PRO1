//P81996_dicotomicsearch.cc
//iteratiu
#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
	int pos;
	while (esq <= dre) {
		pos = (esq + dre)/2;
		if (v[pos] > x) dre = pos - 1;
		else if (v[pos] < x) esq = pos + 1;
		else return pos;
	}
	return -1;
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

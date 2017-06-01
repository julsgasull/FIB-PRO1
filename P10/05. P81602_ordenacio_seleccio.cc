#include <iostream>
#include <vector>
using namespace std;

//m = ultima posicio del vector (v.size() - 1)
int pos_max(const vector<double> & V, int m) {
	int pos = 0;
	for (int i = 1; i <= m; ++i) {
		if (V[i] > V[pos]) pos = i;
	}
	return pos;
}

void ordena_per_seleccio(vector<double> & V, int m) {
	for (int i = m; i > 0; --i) {
		int k = pos_max(V, i);
		swap(V[k], V[i]);
	}
}


int main() {
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(4);
  int m, n;
  while (cin >> m >> n) {
    vector<double> V(n);
    for (int i = 0; i < n; ++i) cin >> V[i];
    ordena_per_seleccio(V, m);
    for (int i = 0; i < n; ++i) cout << " " << V[i];
    cout << endl;
  }
}

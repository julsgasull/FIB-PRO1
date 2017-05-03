//X68753_moda.cc

#include <iostream>
#include <vector>
using namespace std;

void moda(int n, const vector<int>& v) {
	int cont = 0;
	int max, aux;
	for (int i = 0; i < n; ++i) {
		int rep = 0;
		for (int j = 0; j < n; ++j) {
			if (v[i] == v[j]) {
				++rep;
				if (rep > cont) {
					aux = v[i];
					max = v[i];
					cont = rep;
				}
				else if (rep == cont) {
					if (v[i] > aux) {
						aux = v[i];
						max = v[i];
						cont = rep;
					}
				}
			}
		}
	}
	cout << max << endl;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		moda (n, v);
	}
}

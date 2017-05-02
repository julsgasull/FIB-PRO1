//P87920_sumaaltres.cc

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		int suma = 0;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			suma += v[i];
		}
		bool trobat = false;
		while (!trobat && n != 0) {
			if (suma - v[n-1] == v[n-1]) trobat = true;
			--n;
		}
		if (trobat) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

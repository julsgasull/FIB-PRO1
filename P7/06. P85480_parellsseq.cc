//P85480_parellsseq.cc

#include <iostream>
#include <vector>
using namespace std;

bool primer(int a) {
	if (a <= 1) return false;
	for (int i=2; i*i <= a; ++i){
		if (a%i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		
		bool trobat = false;
		
		int j = 0;
		int m = int(v.size());
		while (j < m and !trobat) {
			int k = j;
			while (k < m and !trobat) {
				if (k != j and primer(v[j] + v[k])) trobat = true;
				++k;		
			}
			++j;
		}

		if (trobat) cout << "si" << endl;
		else cout << "no" << endl;
	}
}

//P67268_inversioseq.cc

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {	
		vector<int> v(n);
	
		for (int i = 0; i < n; ++i) cin >> v[i];

		for (int j = n-1; j >= 0; --j) {
			if (j == n-1) cout << v[j];
			else cout << " " << v[j];
		}
		cout << endl;
	}
}

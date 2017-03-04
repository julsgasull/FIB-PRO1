//X59091

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int s = 9;
	if (cin >> n >> m) {
	for (int p = 0; p < n; ++p) {
			for (int q = 0; q < m; ++q) {
				cout << s;
				--s;
				if (s == -1) {
					s = 9;
				}
							}
		cout << endl;
		}
	}
	
	while (cin >> n >> m) {
		int t = 9;
		cout << endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << t;
				--t;
				if (t == -1) {
					t = 9;
				}
			}
		cout << endl;
		}
	}
}

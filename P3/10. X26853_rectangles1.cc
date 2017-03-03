//X26853

#include <iostream>
using namespace std;

int main() {
	int n, m;
	if (cin >> n >> m) {
	for (int p = 0; p < n; ++p) {
			for (int q = 0; q < m; ++q) {
				cout << (n + m) % 5;
			}
		cout << endl;
		}
	}
	
	
	while (cin >> n >> m) {
		cout << endl;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << (n + m) % 5;
			}
		cout << endl;
		}
	}
}

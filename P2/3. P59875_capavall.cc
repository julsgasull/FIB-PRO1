//P59875

#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	if (m > n) {
		for (int i = m; i >= n; --i) {
			cout << i << endl;			
		}
	}
	
	else if (n > m) {
		for (int i = n; i >= m; --i) {
			cout << i << endl;			
		}
	}
	
	else cout << n << endl;
}

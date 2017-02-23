//P97156

#include <iostream>
using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	
	if (n <= m) {
		cout << n;
		for (int i = n + 1; i <= m; ++i) {
			cout << "," << i;		
		}
	}
	cout << endl;
}

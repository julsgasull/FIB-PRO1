//P14130_igualultim.cc

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	int count = 0;
	for (int j = 0; j < n-1; ++j) {
		if (v[j] == v[n-1]) ++count;
	}
	cout << count << endl;
}

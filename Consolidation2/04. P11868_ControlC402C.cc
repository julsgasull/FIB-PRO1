//P11868_ControlC402C.cc

#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	//mida vector
	int n;
	cin >> n;
	
	//nou vector
	vector<int> w(n);
	
	//llegeixo vectors
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	vector<int> u(n);
	for (int i = 0; i < n; ++i) {
		cin >> u[i];
		w[u[i]] = v[i];
	}
	
	//trec vector
	for (int i = 0; i < n; ++i) {
		if (i == 0) cout << w[i];
		else cout << " " << w[i];
	}
	cout << endl;
	
	
	
	
	
	
}

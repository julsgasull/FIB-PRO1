//P98179_inserciotaulaord.cc

#include <iostream>
#include <vector>
using namespace std;


void insereix(vector<double>& v) {
	int n = v.size();
	bool ordenat = false;
	
	while (not ordenat and n > 0) {
		if (v[n-2] > v[n-1]) {
			swap(v[n-2], v[n-1]);
			--n;
		}
		else ordenat = true;
	}
	
}


int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) {
            cin >> V[i];
        }
        insereix(V);
        for (int i = 0; i < n; ++i) {
            cout << " " << V[i];
        }
        cout << endl;
    }
}

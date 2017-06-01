//P15549_Ordenacio_bombolla.cc

#include <iostream>
#include <vector>
using namespace std;


void ordena_per_bombolla(vector<double>& v) {
	int ultim = v.size() - 1;
	bool ordenat = false;
	
	while (not ordenat) {
		ordenat = true;
		for (int i = 0; i < ultim; ++i) {
			if (v[i] > v[i+1]) {
				//canvio posicions
				swap(v[i], v[i+1]);
				//l'he hagut de canviar
				ordenat = false;
			}
		}
		--ultim;
	}
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> v(n);
        for (int i=0; i<n; ++i) {
            cin >> v[i];
        }
        ordena_per_bombolla(v);
        for (int i=0; i<n; ++i) {
            cout << " " << v[i];
        }
        cout << endl;
    }
}

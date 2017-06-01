#include <iostream>
#include <vector>
using namespace std;

typedef vector<double> Fila;

vector<double> diferencia(const vector<double> & V1, const vector<double> & V2) {
	int mida1 = V1.size();
	int mida2 = V2.size();
	
	vector<double> aux(mida1);		//auxiliar de la mida de v1
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	while (i < mida1 and j < mida2) {
		if (V1[i] < V2[j]) {
			if (k == 0 or V1[i] != aux[k-1]) {
				aux[k] = V1[i];
				++k;
			}
			++i;
		}
		else if (V1[i] > V2[j]) ++j;
		else ++i;
	}
	
	while (i < mida1) {
		if (k == 0 or aux[k-1] != V1[i]) {
			aux[k] = V1[i];
			++k;
		}
		++i;
	}
	vector<double> dif(k);
	for (i = 0; i < k; ++i) dif[i] = aux[i];
	return dif;
}


int main() {
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(4);
	
	int n1;
	while (cin >> n1) {
		
		vector<double> V1(n1);
    	for (int i = 0; i < n1; ++i) cin >> V1[i];
    	int n2;
    	
		cin >> n2;
    	vector<double> V2(n2);
    	for (int i = 0; i < n2; ++i) cin >> V2[i];
	    
		vector<double> res = diferencia(V1, V2);
		int n3 = res.size();
		cout << n3 << endl;
		for (int i = 0; i < n3; ++i) cout << " " << res[i];
		cout << endl << endl;
		
		for (int r = 0; r < 200; ++r) {
			vector<double> res2 = diferencia(V1, V2);
			if (res2 != res) cout << "Resultats diferents amb la mateixa entrada!" << endl;
		}	
	}
}

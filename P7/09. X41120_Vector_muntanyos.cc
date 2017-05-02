//X41120_Vector_muntanyos.cc

#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
	
	int tam_v = v.size();
	int tam_sol;
	
	if (tam_v%2 == 0) tam_sol = tam_v/2 - 1;
	else tam_sol = tam_v/2;
	
	vector<int> u(tam_sol, 0);
	
	int k = 0;
	for (int i = 1; i < tam_v-1; ++i) {
		if (v[i] > v[i-1] && v[i] > v[i+1]) {
			u[k] = v[i];
			++k;
		}
	}
	return u;	
}

int main() {
	int n;
	cin >> n;
	
	//vector donat: 
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	
	//numero de cims
	int count = 0;
	for (int i = 0; calcula_cims(v)[i] != 0; ++i) {
		++count;
	}
	cout << count << ":";
	
	//cim maxim + treure tots els cims
	int cim_max;
	for (int i = 0; calcula_cims(v)[i] != 0; ++i) {
		cout << " " << calcula_cims(v)[i];
		cim_max = calcula_cims(v)[i];
	}
	cout << endl;
	
	//trobar més grans que l'últim
	bool mes_alt = false;
	bool primer = true;
	for (int i = 0; calcula_cims(v)[i] != 0; ++i) {
		if (calcula_cims(v)[i] > cim_max) {
			if (primer) primer = false;
			else cout << " ";
			cout << calcula_cims(v)[i];
			mes_alt = true;
		}
	}
	
	//si no n'hi ha
	if (not mes_alt) cout << "-" << endl;
	else cout << endl;
}

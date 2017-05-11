//X51293_cercamitja.cc

#include <iostream>
#include <vector>
using namespace std;

//posició del darrer element = int(mitjana de la seq), else, escriure n

int last_position_of(const vector<int> &v, int x) {
	int mida = v.size();
	int i = mida - 1;
	bool trobat = false;
	int pos;
	
	while (not trobat and i >= 0) {
		if (v[i] == x) {
			pos = i;
			trobat = true;
		}
		--i;
	}
	if (trobat)	return pos;
	return mida;
}

int main() {
	int n;
	while (cin >> n) {
		
		vector<int> v(n);
		double suma = 0;
		
		//omplo i sumo
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			suma += v[i];
		}
		
		//mitjana
		suma = suma/n;
		
		cout << last_position_of(v, suma) << endl;
	}
}

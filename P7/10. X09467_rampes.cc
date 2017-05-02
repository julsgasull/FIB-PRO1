//X09467_rampes.cc

#include <iostream>
#include <vector>
using namespace std;

//rampa en i quan v[i] < v[i+1] < v[i+2] o quan v[i] > v[i+1] > v[i+2]

vector <bool> pos_rampas (const vector <int>& V) {
	int mida = V.size();
	vector<bool> pos(mida, false);
	for (int i = 0; i < mida-2; ++i) { //mida-2 perquè no existeix v[mida-2+2]
		if ((V[i] < V[i+1] and V[i+1] < V[i+2]) or (V[i] > V[i+1] and V[i+1] > V[i+2])) {
			pos[i] = true;
		}
	}
	return pos;
}

int pot_conflictives (const vector<bool>& v) {
    int conflictives = 0;
    int mida = v.size();
    for (int i = 0; i < mida; ++i) {
        if (v[i] == true && v[i+1] == true) ++conflictives;
        if (v[i] == true && v[i+2] == true) ++conflictives;
        }
    return conflictives;
}

int main() {
    int n;
    while (cin >> n) {
    	//omplo vector
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        
        //rampes
		vector<bool> u = pos_rampas(v);
		cout << "posicions amb rampa:";
		for (int i = 0; i < n; ++i) {
			if (u[i] == true) cout << " " << i;
    	}
        cout << endl;
    	
    	//conflict
		cout << "potencialment conflictives: " << pot_conflictives(u) << endl;
    	cout << "---" << endl;
    }
}

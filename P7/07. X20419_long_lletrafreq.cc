//X20419_long_lletrafreq.cc

#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1;

char lletra_mes_frequent(const string& s) {
    vector <int> lmf(LONG_ALFABET, 0);
    int m = s.size();
    for (int i = 0; i < m; ++i) {
        ++lmf[s[i]-'a'];
    }
    int pos, freq = 0;
    
	for (int i = 0; i < LONG_ALFABET; ++i) {
        if (lmf[i] > freq) {
            pos = i;
            freq = lmf[i];
        }
    }
    char c = 'a' + pos;
    return c;
}

int main() {
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	int n;
	cin >> n;
	string s;
	double longitud = 0;
	int aux = n;
	
	vector<string> v(n);		//Guardo paraula
	vector<int> u(n);			//Guardo tamany de la paraula
	
	for (int i = 0; i < n; ++i) {
		cin >> s;
		double mida = s.size();
		v[i] = s;
		u[i] = mida;
		longitud += mida;
		
	}
	longitud /= aux;
	cout << longitud << endl;
	
	for(int i = 0; i < aux; ++i) {
		if (u[i] >= longitud) cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl;
	}
}

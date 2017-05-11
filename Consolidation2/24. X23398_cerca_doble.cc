//X23398_cerca_doble.cc

#include <iostream>
#include <vector>
using namespace std;

int first_position_of(const vector<int> &v, int x) {
	bool trobat = false;
	int pos = 0;
	int i = -1;
	int mida = v.size();
	while (i < mida and not trobat) {
		++i;
		if (v[i] == x) {
			trobat = true;
			pos = i;
		}
	}
	if (trobat) return pos;
	return mida;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		cin >> v[0];
		int min = v[0];
		for (int i = 1; i < n; ++i) {
			cin >> v[i];
			if (v[i] < min) {
				min = v[i];
			}
		}
		int pos = first_position_of(v, 2*min);
		cout << pos << endl;
		
		
		
	}
}


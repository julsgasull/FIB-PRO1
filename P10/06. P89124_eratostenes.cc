//P89124_eratostenes.cc

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const int MAX=1000000;

int main () {
	
	vector<bool> v(MAX+1, true);
	
	// 0 i 1 no són primers
	v[0] = false; 
	v[1] = false;
	
	for (int i = 0; i*i <= MAX + 1; ++i) {
		if (v[i]) {
			for (int j = i*2; j <= MAX; j += i) {
				v[j] = false;
			}
		}
	}
	
	int s;
	while (cin >> s) {
		if (v[s]) cout << s << " es primer" << endl;
		else cout << s << " no es primer" << endl;
	}
}

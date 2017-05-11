//P11725_taula.cc

#include <iostream>
#include <vector>
using namespace std;

bool hi_es(int x, const vector<int>& v) {
	int mida = v.size();
	int i = 0;
	while (i < mida) {
		if (x == v[i]) return true;
		++i;
	}
	return false;
}

int main() {
	
}

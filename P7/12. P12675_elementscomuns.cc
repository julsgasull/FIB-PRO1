//P12675_elementscomuns.cc

#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
	// return
	int comuns = 0;
	// mides
	int midax = X.size();
	int miday = Y.size();
	// punters
	int i = 0;
	int j = 0;

	while (i < midax && j < miday) {
		if (X[i] == Y[j]) {
			++comuns;
			++i;
			++j;
		}
		else if (X[i] > Y[j]) ++j;
		else if (X[i] < Y[j]) ++i;
	}
	return comuns;
}

int main() {
}

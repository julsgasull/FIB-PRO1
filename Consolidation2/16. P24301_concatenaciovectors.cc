//P24301_concatenaciovectors.cc

#include <iostream>
#include <vector>
using namespace std;

/* 
cal retornar un vector que tingui els elements de v1 seguits 
dels elements de v2.
*/

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
	int mida1 = v1.size();
	int mida2 = v2.size();
	vector<int> w(mida1 + mida2);
	
	for (int i = 0; i < mida1; ++i) w[i] = v1[i];
	for (int i = 0; i < mida2; ++i) w[i + mida1] = v2[i];
	
	return w;
}

int main() {
	
}

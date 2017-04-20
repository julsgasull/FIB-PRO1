//P50095_seguentprimer.cc

#include <iostream>
using namespace std;

bool primer(int a) {
	if (a <= 1) return false;
	for (int i=2; i*i <= a; ++i){
		if (a%i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	while (cin >> n) {
		if (primer(n)) {
			++n;
			while (!primer(n)) {
				++n;
			}
			cout << n << endl;
		}		
	}
}

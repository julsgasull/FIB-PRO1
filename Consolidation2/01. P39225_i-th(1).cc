//P39225_i-th(1).cc

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 1;
	int seq;
	bool trobat = false;
	int num = 0;
	while (cin >> seq && !trobat && seq != -1) {
		if (count == n) {
			num = seq;
			trobat = true;
		}
		++count;
	}
	cout << "A la posicio " << n << " hi ha un " << num << "." << endl;
}

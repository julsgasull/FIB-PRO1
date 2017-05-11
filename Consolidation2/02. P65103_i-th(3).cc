//P65103_i-th(3).cc

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool trobat = false;
	int seq;
	int count = 1;
	int num;
	while (not trobat and cin >> seq) {
		if (count == n) {
			num = seq;
			trobat = true;
		}
		++count;
	}
	if (!trobat) cout << "Posicio incorrecta." << endl;
	else cout << "A la posicio " << n << " hi ha un " << num << "." << endl;
}

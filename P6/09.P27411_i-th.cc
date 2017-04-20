//P27411_i-th.cc

#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;
	
	bool trobat = false;
	
	int n;
	int num;
	int count = 1;
	while (!trobat and cin >> n and n != -1) {
		if (count == i) { 
			trobat = true;
			num = n;
		}
		else ++count;
	}
	if (trobat) {
	cout << "A la posicio " << count << " hi ha un " << num << "." << endl;
	}
	else cout << "Posicio incorrecta." << endl;
}

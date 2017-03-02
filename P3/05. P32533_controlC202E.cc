//P32533

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = n-1 ; i >= 0; --i) {		//columnes
		for (int j = i; j >= 1; --j) { 	//files
			cout << "+";
		}
		cout << "/";
		for (int k = i + 1; k != n; ++k) {
			cout << "*";
		}
		
	cout << endl;
	}
}

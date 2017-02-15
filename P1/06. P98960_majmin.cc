//P98960

#include <iostream>
using namespace std;

int main() {
	char n;
	cin >> n;
	if (n >= 65 and n <=90) cout << char(32 + n) << endl;
	else cout << char(n - 32) << endl; 
}

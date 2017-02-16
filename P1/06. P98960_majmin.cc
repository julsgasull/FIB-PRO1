//P98960

#include <iostream>
using namespace std;

int main() {
	char n;
	cin >> n;
	if (n >= 'A' and n <= 'Z') cout << char(n + ('a' - 'A')) << endl;
	else cout << char(n - ('a' - 'A')) << endl; 
}

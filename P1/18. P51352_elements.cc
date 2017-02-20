//P51352

#include <iostream>
using namespace std;

int main() {
	char c1, c2;
	cin >> c1 >> c2;
	
	if (c1 == c2) cout << '-' << endl;
	else if ((c1 == 'A' and c2 == 'P') or (c1 == 'P' and c2 == 'V') or (c1 == 'V' and c2 == 'A')) cout << 1 << endl;
	else cout << 2 << endl;
}

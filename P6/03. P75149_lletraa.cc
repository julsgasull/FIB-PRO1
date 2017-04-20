//P75149_lletraa.cc

#include <iostream>
using namespace std;

int main() {
	char c;
	bool a = false;
	bool final = false;
	
	while (!a && !final && cin >> c) {
		if (c == 'a') a = true;
		else if (c == '.') final = true;
	}
	if(a) cout << "si" << endl;
	else cout << "no" << endl;
}

//X89070

#include <iostream>
using namespace std;

int main() {
	int n, m, s;
	cin >> n >> m >> s;
	int max, min;
	
	//Search max:
	if (n >= m) {
		if (n >= s) max = n;
		else max = s;
	}
	else {
		if (m >= s) max = m;
		else max = s;
	}
	
	//Search min:
	if (n <= m) {
		if (n <= s) min = n;
		else min = s;
	}
	else {
		if (m <= s) min = m;
		else min = s;
	}
	
	cout << max + min << endl;
}


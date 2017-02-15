//X59678

#include <iostream>
using namespace std;

int main() {
	int n, m, s;
	cin >> n >> m >> s;
	if (n <= m) {
		if (n <= s) cout << n << endl;
		else cout << s << endl;
	}
	else {
		if (m <= s) cout << m << endl;
		else cout << s << endl;
	}
}

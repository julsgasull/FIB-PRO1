//X29759

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char m;
	int blanques = 0;
	int negres = 0;
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> m;
			if ((i % 2 == 0 and j % 2 == 0) or (i % 2 != 0 and j % 2 != 0)) blanques += m - '0';
			else if (((i % 2 != 0 and j % 2 == 0) or (i % 2 == 0 and j % 2 != 0))) negres += m - '0';
		}
	}
	
	cout << blanques << "-" << negres << " = " << blanques-negres << endl;
}

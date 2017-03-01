//P34451

#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int seq;
	int count = 0;
	
	while (cin >> seq) {
		if (seq % n == 0) ++count;
	}
	cout << count << endl;
}


//P71753_maxseq.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int max;
		cin >> max;
		int seq;
		for (int i = 0; i < n-1; ++i) {
			cin >> seq;
			if (seq > max) max = seq;
		}
		cout << max << endl;
	}
}

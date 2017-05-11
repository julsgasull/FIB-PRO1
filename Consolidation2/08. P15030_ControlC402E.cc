//P15030_ControlC402E.cc

#include <iostream>
#include <vector>
using namespace std;


int main() {
	//variables d'entrada
	int n, p, k;
	char c;
	cin >> n >> p >> k >> c;
	
	//omplo vector
	vector<string> v(n);
	for (int i = 0; i < n; ++i)  cin >> v[i];
	
	//posició
	int pos = p;
	
	//dreta
	if (c == 'd') {
		bool primer = true;
		for (int i = 0; i < k; ++i) {
			++pos;
			if (pos >= n) pos = 0;
			if (not primer) cout << ' ';
			cout << v[pos];
			primer = false;
		}
	}
	
	//esquerra
	if (c == 'e') {
		bool primer = true;
		for (int i = 0; i < k; ++i) {
			--pos;
			if (pos < 0) pos = n-1;
			if (not primer) cout << ' ';
			cout << v[pos];
			primer = false;
		}
	}
	
	cout << endl;
}

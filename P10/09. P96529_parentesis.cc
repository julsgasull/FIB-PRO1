//P96529_parentesis.cc

#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
	string s;
	while (cin >> s) {
		int n = s.size();
		vector<char> v(n, '0');
		int k = 0;
		bool z = true;
		int i = 0;
		while (i < n and z) {
			if (s[i] == '(' or s[i] == '[') {
				v[k] = s[i];
				++k;
			}
			else {
				--k;
				if ((s[i] == ')' and v[k] != '(') or (s[i] == ']' and v[k] != '[')) z = false;
			}
			++i;
		}
		if (z and k == 0) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

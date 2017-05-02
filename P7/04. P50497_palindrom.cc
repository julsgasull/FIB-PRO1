//P50497_palindrom.cc

#include <iostream>
#include <string>
using namespace std;

bool es_palindrom(const string& s) {
	int n = s.length();
	for(int i = 0; i < n/2 ; ++i) {
		if (s[i] != s[n-1-i]) return false;
	}
	return true;
}

int main() {
}

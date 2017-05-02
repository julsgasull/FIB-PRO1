//P29428_infixos.cc

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool conte(string s1, string s2){
	int mida1 = s1.size();
	int mida2 = s2.size();
	
	bool trobat = (mida1 == 0);
	
	int n = mida2 - mida1;
	int i = 0;
	
	while(!trobat && i <= n){
		int j = 0;
		bool encaixa = true;
		while(encaixa and j < mida1){
			encaixa = (s1[j] == s2[i+j]);
			++j;
		}
		if (encaixa) trobat = true;
		else ++i;
	}
	if (trobat) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	
	for (int i = 0; i < n; ++i) cin >> v[i];
	
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ':';
		for (int j = 0; j < n; ++j){
			if(conte(v[j], v[i])) {
				cout << ' ' << v[j];
			}
		}
		cout << endl;
	}
}

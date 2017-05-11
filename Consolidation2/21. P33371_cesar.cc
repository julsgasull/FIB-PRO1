//P33371_cesar.cc

#include <iostream>
using namespace std;


char codificat(char c, int k){
	if (c == '_') return ' ';
	else if (c >= 'a' and c <= 'z') return 'A' + (c-'a'+k)%(26);
	else return c; 
}


int main(){
	
	int k;
	
	while (cin >> k) {
		char c;
		cin >> c;
	
		while (c != '.') {
			cout << codificat(c,k);
			cin >> c;
		}
	cout << endl;
	}
}

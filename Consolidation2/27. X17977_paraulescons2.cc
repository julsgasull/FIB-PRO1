//X17977_paraulescons2.cc

//entren: int a, b; string seq;
//surt: nombre de cops que apareix long a seguit de long b;

#include <iostream>
#include <string>
using namespace std;

int main() {
	unsigned int a, b;
	cin >> a >> b;
	
	int count = 0;
	string ant;
	
	if (cin >> ant) {
		string act;
		while (cin >> act) {
			if (ant.length()%a == 0 and act.length()%b == 0) ++count;
			ant = act;
		}
	}
	cout << count << endl;
}

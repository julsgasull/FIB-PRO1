//X28093_consecutives.cc
//X28093_paraulesconseq.cc

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string p1, p2;
	cin >> p1 >> p2;
	
	int mida1 = p1.length();
	int mida2 = p2.length();
	
	int count = 0;
	string ant;
	if (cin >> ant) {
		string act;
		while (cin >> act) {
			if (ant.length() == mida1 and act.length() == mida2) ++count;
			ant = act;
		}
	}
	cout << count << endl;
}

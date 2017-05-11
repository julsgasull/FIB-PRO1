//P29253_romans2.cc

#include <iostream>
using namespace std;

int main() {
	
	char prev, next;
	
	while (cin >> next) {
		int sum = 0;
		prev = next;
		
		while (next != '.'){
			cin >> next;
			
			if (prev == 'M') sum += 1000;
			
			if (prev == 'D') sum += 500;
			
			if (prev == 'C') {
				if (next == 'M' or next == 'D') sum -= 100;
				else sum += 100;
			}
			
			if (prev == 'L') sum += 50;
			
			if (prev == 'X') {
				if (next == 'L' or next == 'C') sum -= 10;
				else sum += 10;
			}
			
			if (prev == 'V') sum += 5;
			
			if (prev == 'I') {
				if (next == 'V' or next == 'X') sum -= 1;
				else sum += 1;
			}
			
			cout << prev;
			prev = next;
		}
	cout << " = " << sum << endl;
	}
}

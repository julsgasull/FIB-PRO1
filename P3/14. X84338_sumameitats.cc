//X84338

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s = n;
	int count = 0;
	
	if (n == 0) cout << "res" << endl;
	
	else {
		while (s > 0) {
			s /= 10;
			++count;
		}
	
		int part;
		int part1 = 0;
		int part2 = 0;
	
		if (count % 2 == 0) {
			int countx = count/2;
			int county = count/2;
		
			while (countx > 0) {
				--countx;
				part = n%10;
				n = n/10;
				part1 += part;
			}
		
			int t;
			while (county < count) {
				++county;
				t = n%10;
				n = n/10;
				part2 += t;
			}
		
			if (part2 == part1) cout << part2 << " = " << part1 << endl;
    		else if (part2 > part1) cout << part2 << " > " << part1 << endl; 
    		else if (part2 < part1) cout << part2 << " < " << part1 << endl;
		}
	else cout << "res" << endl;
	}
}

//P20262_sumamax.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		
		int suma0 = 0;
		int suma0max = 0;
		int sumaf = 0;
		int sumafmax = 0;
				
		while (n > 0) {
			int y;
			cin >> y;
			
			suma0 += y;
			if (suma0max < suma0) suma0max = suma0;
			
			sumaf += y;
			if (sumaf < 0) sumaf = 0;
			sumafmax = sumaf;
			
			--n;
		}
		
		cout << suma0max << " " << sumafmax << endl;
	}	
}

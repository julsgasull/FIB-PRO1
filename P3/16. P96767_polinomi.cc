//P96767

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout.setf(ios::fixed);
    cout.precision(4);
    
	double n;
	cin >> n;
	double z;
	double res = 0;
	double count = 0;
	while (cin >> z) {
		res += z * pow (n, count);
		++count;
	}
	cout << res << endl;
	
}

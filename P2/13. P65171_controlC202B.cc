//P65171

#include <iostream>
using namespace std;

int main() {
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double n;
	cin >> n;
	
	double res1a = 1 / (n - 1);			//producte primer sumatori
	double res2a = 1 / (n * (n - 1));		//producte segon sumatori
	double res1b = 0;
	double res2b = 0;
	
	double x;
	
	for (int i = 0; i < n; ++i) {
		cin >> x;
		res1b += x*x;	//primer sumatori
		res2b += x;		//segon sumatori
	}
	
	cout << res1a*res1b - res2a*res2b*res2b << endl;
}

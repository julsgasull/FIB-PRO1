//P66529 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	cout. setf(ios::fixed);
	cout. precision(4);
	
	double i;
	string tipus;
	cin >> i >> tipus;
	
	int t;
	if (tipus == "setmanal") t = 52;
	else if (tipus == "mensual") t = 12;
	else if (tipus == "trimestral") t = 4;
	else if (tipus == "semestral") t = 2;
	
	double tae = (pow(double(1 + (i/100)/t),double(t)) - 1) * 100;
	cout << tae << endl;
	
	
}

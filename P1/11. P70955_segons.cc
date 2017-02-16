//P70955

#include <iostream>
using namespace std;

//De anys, dies, hores, minuts a segons

int main() {
	int year, day, hour, min, sec;
	cin >> year >> day >> hour >> min >> sec;
	int sectotal = year*3600*24*365 + day*3600*24 + hour*3600 + min*60 + sec;
	cout << sectotal << endl;
}

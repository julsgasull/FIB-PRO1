//P34279

#include <iostream>
using namespace std;

int main() {
	int hour, min, sec;
	cin >> hour >> min >> sec;
	
	if (sec == 59) {
		if (min == 59) {
			if (hour == 24) {
				sec = 00;
				min = 00;
				hour = 00;
			}
			else {
				sec = 00;
				min = 00;
				hour = hour + 1;
			}
		}
		else {
			sec = 00;
			min = min + 1;
		}
	}
	else sec = sec + 1;
	
	if (hour < 10) cout << '0' << hour << ':';
	else cout << hour << ':';
	
	if (min < 10) cout << '0' << min << ':';
	else cout << min << ':';
	
	if (sec < 10) cout << '0' << sec << endl;
	else cout << sec << endl;
}

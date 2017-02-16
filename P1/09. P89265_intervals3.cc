//P89265

#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	int max, min;
	
	if (a1 >= a2) max = a1;
	else max = a2;
	
	if (b1 <= b2) min = b1;
	else min = b2;
	
	if (a1 == a2 and b1 == b2) cout << "= , ";
	else if (a1 == max and b1 == min) cout << "1 , ";
	else if (a2 == max and b2 == min) cout << "2 , ";
	else cout << "? , ";
	
	if (min < max) cout << "[]" << endl;
	else cout << '[' << max << ',' << min << ']' << endl;
}

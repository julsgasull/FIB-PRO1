//P42042

#include <iostream>
using namespace std;

int main() {
	char n;
	cin >> n;
	
	if (n >= 65 and n <=90) {
		cout << "majuscula" << endl;
		if (n == 'A' or n == 'E' or n == 'I' or n == 'O' or n == 'U') cout << "vocal" << endl;
		else cout << "consonant" << endl;
	}

	else {
		cout << "minuscula" << endl;
		if (n == 'a' or n == 'e' or n == 'i' or n == 'o' or n == 'u') cout << "vocal" << endl;
		else cout << "consonant" << endl;
	}
}

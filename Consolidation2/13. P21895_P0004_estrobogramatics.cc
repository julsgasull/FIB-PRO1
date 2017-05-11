//P21895_P0004_estrobogramatics.cc

#include <iostream>
#include <vector>
using namespace std;

int count_digits(int n) {
    int dig = 0;
    while (n != 0) {
        n = n/10;
        ++dig;
    }
    return dig;
}

bool es_estrobogramatic(int n) {
	if (n < 10) {
		if (n == 0 or n == 1 or n == 8) return true;
		return false;
	}
	
	else {
		int digits = count_digits(n);
		vector<int> num(digits);
		
		for(int i = digits - 1; i >= 0; --i) {
			//aquests no ho poden ser
			if (n%10 == 2 or n%10 == 3 or n%10 == 4 or n%10 == 7) return false;
			//mentre ho pugui ser omplo el vector
			num[i] = n%10;
			n /= 10;
		}
		
		int i = 0;
		int j = digits - 1;
		
		while (i <= j) {
			if (num[i] == num[j] and (num[i] == 0 or num[i] == 1 or num[i] == 8));
            else if ((num[i] == 6 and num[j] == 9) or (num[i] == 9 and num[j] == 6));
            else return false;
            ++i;
        	--j;
		}
		return true;
	}
}

int main() {
	int n;
	int count_senar = 0;
	
	while (cin >> n) {
		if (es_estrobogramatic(n)) cout << n << " si es estrobogramatic" << endl;			//si
		else if (not es_estrobogramatic(n)) cout << n << " no es estrobogramatic" << endl;	//no
		if (es_estrobogramatic(n) and n%2 != 0) ++count_senar;								//++senars
	}
	cout << endl << "estrobogramatics senars: " << count_senar << endl;
}

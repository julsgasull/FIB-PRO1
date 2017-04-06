//P71398_digitmaxmin.cc

#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
	
	maxim = n%10;
	minim = n%10;
	
	while (n > 9) {
		n /= 10;
		if ((n%10) >= maxim) maxim = n%10;
		if ((n%10) <= minim) minim = n%10;
	}
}

int main() {
}

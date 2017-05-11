//P35537_Nombres_creixents.cc

#include<iostream>
using namespace std;

bool es_creixent(int n) {
	if (n < 10) return true;
	if (n%10 < (n/10)%10) return false;
	
	return es_creixent(n/10);
}

int main() {
	
}

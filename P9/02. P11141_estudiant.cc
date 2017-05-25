//P11141_estudiant.cc

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
	double nota;        //1..10 o -1(no presentat)
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
	int n = es.size();
	min = 10;
	max = 0;
	mitj = 0;
	int count = 0;
	
	for (int i = 0; i < n; ++i) {
		if (!es[i].repetidor and es[i].nota != -1) {
			if (es[i].nota < min) min = es[i].nota;
			if (es[i].nota > max) max = es[i].nota;
			mitj += es[i].nota;
			++count;
		}
	}
	if (count != 0) mitj = mitj / double(count);
	else {
		mitj = -1;
		min = -1;
		max = -1;
	}
}

int main() {
	
}

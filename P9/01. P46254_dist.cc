//P46254_dist.cc

#include <cmath>
#include <iostream>
using namespace std;

struct Punt {
	double x, y;
};

void llegeix(Punt& n) {
	cin >> n.x >> n.y;
}

double distancia(const Punt& a, const Punt& b) {
	double dist;
	dist = (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y);
	dist = sqrt(dist);
	return dist;
}


int main() {
	Punt a, b;
	llegeix(a);
	llegeix(b);
	cout << distancia(a, b) << endl;
}

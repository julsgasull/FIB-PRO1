//P84786.cercles(1).cc

#include <iostream>
#include <cmath>
using namespace std;

//distància
struct Punt { 
	double x, y;
};

double distancia(const Punt& a, const Punt& b) {
	double de;
	de = (b.x - a.x)*(b.x - a.x) + (b.y  - a.y)*(b.y - a.y);
	de = sqrt(de);
	return de;
}
//fi distancia


//desplaço punt p1 segons coordenades del p2
void desplaca(Punt& p1, const Punt& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

struct Cercle { 
	Punt centre; 
	double radi;
};

void escala(Cercle& c, double esc) {
	c.radi *= esc;
}

void desplaca(Cercle& c, const Punt& p) {
	desplaca(c.centre, p);
}

bool es_interior(const Punt& p, const Cercle& c) {
	return (distancia(p, c.centre) < c.radi);
}

int main() {
}

//06. P52274_cercles3.cc

#include <iostream>
#include <cmath>
using namespace std;

struct Punt {
    double x, y;
};

struct Cercle {
    Punt centre;
    double radi;
};

//Llegeix un punt
void llegeix_punt(Punt& p) {
	cin >> p.x >> p.y;
}

//Llegeix un cercle
void llegeix_cercle(Cercle& c) {
 cin >> c.centre.x >> c.centre.y >> c.radi;
}

//funcio que escala un cercle
void escala(Cercle& c, double esc) {
    c.radi *= esc;
}

//funcio que desplaca un cercle segons un punt
void desplaca(Cercle& c, const Punt& p){
    c.centre.x += p.x;
    c.centre.y += p.y;
}

//funcio que retorna la distancia entre dos punts a(x1, y1) i b (x2, y2)
double distancia(const Punt& a, const Punt& b) {
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

//funcio que indica la relacio de dos cercles
int relacio(const Cercle& c1, const Cercle& c2){
    if (distancia(c1.centre, c2.centre) < c1.radi - c2.radi) return 2;
    if (distancia(c1.centre, c2.centre) < c2.radi - c1.radi) return 1;
    if (distancia(c1.centre, c2.centre) < c2.radi + c1.radi) return 3;
    else return 0;
}

void imprimir_relacio(const Cercle& c1, const Cercle& c2){
    if (relacio(c1, c2) == 1) cout << "el primer cercle es interior al segon" << endl;
    else if (relacio(c1, c2) == 2) cout << "el segon cercle es interior al primer" << endl;
    else if (relacio(c1, c2) == 3) cout << "els cercles intersecten" << endl;
    else cout << "els cercles no intersecten" << endl;
}

int main(){
    //entren dos cercles c1, c2
    Cercle c1, c2;
    llegeix_cercle(c1);
    llegeix_cercle(c2);
    
    imprimir_relacio(c1, c2); //relacio inicial dels cercles
    
    int n; //indica a quin cercle cal aplicar el desplacament
    while (cin >> n){
	string ordre;	//mou o escala
	cin >> ordre;
	
	//escala
	if (ordre == "escala") {
	    double esc;
	    cin >> esc;
	    if (n == 1) escala(c1, esc); 	//cercle 1
	    else escala(c2, esc);		//cercle 2
	}
	
	//mou
	else {
	    Punt p;				//punt
	    llegeix_punt(p);
	    if (n == 1) desplaca(c1, p);	//cercle 1
	    else desplaca(c2, p);		//cercle 2
	}
	
	imprimir_relacio(c1, c2); //relacio dels cercles al canviar les posicions
    }
    
}

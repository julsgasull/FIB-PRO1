//P28118_P0002_Representant_comercial.cc

#include <iostream>
#include <cmath>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main() {
	
	cout.setf(ios::fixed);
    cout.precision(4);
    
    string ruta;
    double x, y, aux1, aux2;
    double x1, x2, y1, y2;
    
    while (cin >> ruta) {
    	bool fi = false;
    	double dist = 0;
    	
		cin >> x >> y;
    	aux1 = x;
    	aux2 = y;
    	x1 = x;
    	y1 = y;
    	
    	while (!fi and cin >> x >> y) {
    		x2 = x1;
    		y2 = y1;
    		x1 = x;
    		y1 = y;
    		
    		dist += distancia(x1, y1, x2, y2);
    		if (x == aux1 and y == aux2) fi = true;
		}
		cout << "Trajecte " << ruta << ": " << dist << endl;
	}
} 

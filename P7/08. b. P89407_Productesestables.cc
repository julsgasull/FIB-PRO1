//P89407_Productesestables.cc

#include <iostream>
#include <vector>
using namespace std;

bool mateixos_digits (int x, int y, int b) {
	
	vector<int> v(b,0);				//vector de mida de la base i plens de 0
	int mida = v.size();
	int xy = x*y;
	
	// creo vector amb x, y i x*y passats a base b
	while(xy != 0) {
    	if (x != 0) ++v[x%b];
    	if (y != 0) ++v[y%b];
    	--v[xy%b];
    	x /= b;
    	y /= b;
		xy /= b;
	}
	
	for (int i = 0; i < mida ; ++i){
		if(v[i] != 0) return false;
	}
	return true;
}

    
void escriu (int n, int b) {
	if (n != 0) { 
		escriu(n/b, b);
		int aux = n%b;
		if (aux < 10) cout << aux;
		else cout << char(aux - 10 + 'A');
	}
}
  
  
  
int main()	{
	int x,y;
	while (cin >> x >> y) {
    	int base = 2;
    	bool entra = false;									//espais pel primer
    	cout << "solucions per a " << x << " i " << y;
    	
		while (base <= 16) {
			
			bool resultat = mateixos_digits(x, y, base);	// si tenen els mateixos numeros x, y i x*y en la base en la que estan
			
			if (resultat) {
				if (!entra) cout << endl;
				escriu(x, base);
				cout << " * ";
				escriu(y, base);
				cout << " = ";
				int xy = x*y;
				escriu(xy, base);
				cout << " (base " << base << ")" << endl; 
				entra = true;
			}
			++base;
  		}
		  
		if (!entra) {
			cout << endl;
			cout << "cap" << endl;
		}
		cout << endl;
	}
}

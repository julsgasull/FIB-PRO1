//P89407_producte_estable.cc

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void ordena(vector<int>& v){
	int n = v.size();
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			if (v[i] > v[j]){
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}
int conta_dig (int a, int b){
	int dig = 0;
	while (a > 0){
		a /= b;
		++dig;
	}
	return dig;
}
void canvi_base (vector<int>& v, int x, int y, int b){
	int i = 0;
	while(x>0){
		v[i] = x%b;
		x /= b;
		++i;
	}
	while(y>0){
		v[i] = y%b;
		y /= b;
		++i;
	}
}
void canvi_base_prod (vector<int>& v, int prod, int b){
	int i = 0;
	while(prod > 0){
		v[i] = prod % b;
		prod /= b;
		++i;
	}
}
bool mateixos_digits(int x, int y, int b){
	int dx = conta_dig(x, b);
	int dy = conta_dig(y, b);
	int prod = x * y;
	int dxy = conta_dig(prod, b);
	if(dx+dy != dxy) return false;
	else{
		vector<int> v1 (dx + dy);
		vector<int> v2 (dxy);
		canvi_base(v1, x, y, b);
		/*
		cout << "vector de x i de y: (NO ordenat) ";
		for (int i = 0; i < v1.size(); ++i){
			cout << v1[i];
		}
		cout << endl << endl;
		*/
		ordena(v1);
		/*
		cout << "vector de x i de y: (ordenat) ";
		for (int i = 0; i < v1.size(); ++i){
			cout << v1[i];
		}
		cout << endl << endl;
		*/
		canvi_base_prod(v2, prod, b);
		/*
		cout << "vector de x * y: (NO ordenat) ";
		for (int i = 0; i < v1.size(); ++i){
			cout << v2[i];
		}
		*/
		ordena(v2);
		/*
		cout << endl << endl;
		cout << "vector de x * y:    (ordenat) ";
		for (int i = 0; i < v1.size(); ++i){
			cout << v2[i];
		}
		cout << endl << endl;
		*/
		for (int i = 0; i < v1.size(); ++i){
			if(v1[i] != v2[i]) return false;
		}
		return true;
	}
}
void escriu(int n, int b){
	if (n != 0){
		escriu(n/b, b);
		int num = n % b;
		if (num >= 10){
			if (num == 10) cout << 'A';
			else if(num == 11) cout << 'B';
			else if(num == 12) cout << 'C';
			else if(num == 13) cout << 'D';
			else if(num == 14) cout << 'E';
			else cout << 'F';
		}
		else{
			cout << num;
		}
	}
}
int main(){
	int x, y;
	
	while (cin >> x >> y){
		int b = 2;
		bool cap = true;
		cout << "solucions per a " << x << " i " << y << endl;
		while(b <= 16){
			if(mateixos_digits(x, y, b)){
				cap = false;
				escriu(x, b);
				cout << " * ";
				escriu(y, b);
				cout << " = ";
				escriu(x*y, b);
				cout << " (base " << b << ")" << endl;
			}
			++b;
		}
		if (cap) cout << "cap" << endl;
		cout << endl;
	}
}

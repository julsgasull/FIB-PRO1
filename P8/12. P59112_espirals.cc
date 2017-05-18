//P59112_espirals.cc

#include <iostream>
#include <vector>
using namespace std;

//algoritme: cont marca direcció (si parell horitz, else vert.)
// si horit parell esq, else dreta
// si vert parell amunt, else abaix

//n dreta, n-1 amunt, n-2 esq, ....
//aux = n - cont 

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

void imprimir_matriu (const Matriu& mat){
	int n = mat.size();
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j) cout << mat[i][j];
		cout << endl;
	}
}

int main(){
	int n;
	bool primer = true;
	while (cin >> n) {
	
		int cont = 0;
		int aux = n; //n-count -> = n
		
		Matriu mat(n, Fila(n, '.'));
		
		int i = n - 1; 		//files	
		int j = 0;			//columnes
		int contp = 0;			//contador de parells (esq, dreta)
		int conts = 0;			//contador de senars (amunt, abaix)
		
		while (cont < n and i < n and j < n) {
		
			if (cont % 2 == 0) {		//parell <-> horitzontal
				while (aux > 0) {
					mat[i][j] = 'X';
					if (contp % 2 == 0) ++j;		//dreta
					else --j;						//esq
					--aux;					
				}
				if (contp % 2 == 0) {
					--i;
					--j;
				}
				else {
					++i;
					++j;
				}
				++contp;	
			}
			
			
			//VERTICAL
			else {						//senar <->vertical
				while (aux > 0) {
					mat[i][j] = 'X';
					if (conts % 2 == 0) --i;		//amunt
					else ++i;						//abaix
					--aux;	
				}
				if (conts % 2 == 0) {
					--j;
					++i;
				}
				else {
					++j;
					--i;
				}
				++conts;
			}
			
			++cont;
			aux = n - cont;
		}
		if (primer) {
			imprimir_matriu(mat);
			primer = false;
		}
		else { 
			cout << endl;
			imprimir_matriu(mat);
		}
	}
}


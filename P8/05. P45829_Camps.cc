//P45829_Camps.cc

#include <iostream>
#include <vector>
using namespace std;


//conreu: quadrats separats per zones buides (0)
//entrada: m files, n columnes, matriu
//sortida: quants conreus hi ha

typedef vector< vector<int> > Matriu;

void llegir(Matriu& M) {
	int n = M.size();					//files
	int m = M[0].size();				//columnes
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> M[i][j];
		}
	}
}


void esborrar(Matriu& M, int i, int j, int& count) {
	int m = M.size(); 		//files
	int n = M[0].size();	//columnes
	int io = i;
	bool contenir = false;
	
	while (io < m and M[io][j] != 0) {
		int jo = j;
		while (jo < n and M[io][jo] != 0) {
			M[io][jo] = 0;
			contenir = true;
			++jo;
		}
		++io;
	}
	if(contenir) ++count;
} 

int main() {
	int m, n;						//m files, n columnes
	
	while (cin >> m >> n) {
		//matriu
		Matriu M(m, vector<int>(n));
		llegir(M);
		
		int count = 0;
		
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (M[i][j] != 0) esborrar(M, i, j, count);
			}
		}
		cout << count << endl;
	}	
}

// 09.P42596_Control_C401B.cc

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void llegir(Matriu& M) {
	int f = M.size();					//files
	int c = M[0].size();				//columnes
	for(int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> M[i][j];
		}
	}
}

void min_max(const Matriu& mat, int& minim, int& maxim) {
	int f = mat.size();			//files
	int c = mat[0].size();		//columnes
	
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			int comp = mat[i][j];
			if (comp < minim) minim = comp;
			if (comp > maxim) maxim = comp;
		}
	}
}

int main() {
	int f, c;
	int dif_max = 0;
	int count = 0;
	int primer = 1;
	
	while (cin >> f >> c) {
		Matriu mat(f, vector<int>(c));
		llegir(mat);
		++count;
		
		int min = mat[0][0];
		int max = mat[0][0];
		
		min_max(mat, min, max);
		
		int dif = max - min;
		
		if (dif > dif_max) {
			dif_max = dif;
			primer = count;
		}
	}
	
	cout << "la diferencia maxima es " << dif_max << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << primer << endl;
}

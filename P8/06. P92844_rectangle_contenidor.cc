//06. P92844_rectangle_contenidor.cc

#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;


//calcula nombre de files(fils) i columnes(cols) del subrectangle més petit
//que tingui totes les aparicions de c en r
void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
	fils = 1;
	cols = 1;
	
	int imin, imax, jmin, jmax;
	
	bool fora = false;
	
	int k = 0;
	
	int fi = r.size();			//files
	int col = r[0].size();		//columnes
	
	while (!fora and k < fi) {
		int j = 0;
		while (!fora and j < col) {
			if (r[k][j] == c) {
				imin = k;
				fora = true;
			}
			++j;
		}
		++k;
	}
	
	fora = false;
	int m = 0;
	while (!fora and m < col) {
		int i = 0;
		while (!fora and i < fi) {
			if (r[i][m] == c) {
				jmin = m;
				fora = true;
			}
			++i;
		}
		++m;
	}
	
	fora = false;
	
	int i = fi - 1;
	while (!fora and i >= 0) {
		int j = col - 1;
		while (!fora and j >= 0) {
			if (r[i][j] == c) {
				imax = i;
				fora = true;
			}
			--j;
		}
		--i;
	}
	
	fora = false;
	
	int j = col - 1;
	while (!fora and j >= 0) {
		int l = fi - 1;
		while (!fora and l >= 0) {
			if (r[l][j] == c) {
				jmax = j;
				fora = true;
			}
			--l;
		}
		--j;
	}
	
	cols += jmax - jmin;
	fils += imax - imin;
}

//Pre: c apareix almenys un cop en r


int main() {
	int n, m;
	while (cin >> n >> m) {
		Rectangle r(n, vector<char>(m));
    
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> r[i][j];
			}
		}
		
		int t;
    	cin >> t;
    	while (t--) {
			char c;
			cin >> c;
			int fils, cols;
			dimensions_minimes(c, r, fils, cols);
			cout << fils << " " << cols << endl;
    	}
  	}	
}

//P17179_mesures_est.cc

#include <iostream>
using namespace std;

/*
seq amb nombres reals
escriure: max, min, mitjana 
*/

int main() {
	
	int n; 		// nombre de seq
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
	
		int m;	//nombre de num q tentren
		cin >> m;
		double seq;
		cin >> seq;
		double max = seq;
		double min = seq;
		double suma = seq;
	
		for (int j = 0; j < m-1; ++j) {
			cin >> seq;
			suma += seq;
			if (seq < min) min = seq;
			if (seq > max) max = seq;
		}
		
		cout.setf(ios::fixed);
    	cout.precision(4);
    	
		cout << min << " " << max << " " << suma/double(m) << endl;
	}
}

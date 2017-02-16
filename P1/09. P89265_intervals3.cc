//P89265

#include <iostream>
using namespace std;

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	if (a1 == a2 and b1 == b2) cout << "=";
	else if (a2 < a1 and b1 < b2) cout << "1";
	else if (a1 < a2 and b2 < b1) cout << "2";
	else cout << "?";
	cout << " , ";
	
	if (a1 <= a2 and b1 <= b2) {
		if (a2 <= b1) cout << '[' << a2 << ',' << b1 << ']' << endl;
		else cout << "[]" << endl; 
	}
	else if (a1 <= a2 and b2 <= b1) {
		if (a2 <= b2) cout << '[' << a2 << ',' << b2 << ']' << endl;
		else cout << "[]" << endl; 
	}
	else if (a2 <= a1 and b1 <= b2) {
		if (a1 <= b1) cout << '[' << a1 << ',' << b1 << ']' << endl; 
		else cout << "[]" << endl; 
	}
	else if (a2 <= a1 and b2 <= b1) {
		if (a1 <= b2) cout << '[' << a1 << ',' << b2 << ']' << endl;
		else cout << "[]" << endl;
	}
	else cout << "[]" << endl;
}


//ANOTHER OPTION:

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a == c) and (b == d)){
        cout << "=";
    }

    else if ((a >= c) and (b <= d)) {
        cout << "1";
    }

    else if ((c >= a) and (d <= b)) {
        cout << "2";
    }

    else {
        cout << "?";
    }

    cout << " , ";

    //mirem punts de tall

    int x, y;

    if (a >= c) x = a; //mirem si a és el valor més alt en el tram baix de l'interval. Si a és gran l'afafem
        // [] () -> c[ a( d] b) 
        
        
    else x = c; //sino agafem c com a major.
        // [] () -> a[ c( b] d)
    
    
    if (b <= d) y = b; // mirem on intersecta superiorment (tram alt)
        // [] () -> a[ c( b] d)
    else y = d; //sinň agafem el valor de d
        // [] () -> a[ c( d] b)

    if (x <= y) cout << "[" << x << "," << y << "]" << endl;



    else cout << "[]" << endl;
}

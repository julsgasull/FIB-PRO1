//X32391

#include <iostream>
using namespace std;

int main() {
    int d, n, t;
    cin >> d >> n >> t;
    int a;
    
    int suma = n;               //diners inicials
    int setmanes = 0;        //nombre de setmanes
    
    
    for (int i = 0; i < t; ++i) {
        cin >> a;
        suma += a - d;
        if (suma > 0) ++setmanes; //mentre sigui positiu sumo
    }
    cout << setmanes << endl;
     
}

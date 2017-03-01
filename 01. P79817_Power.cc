// P79817
#include <iostream>
using namespace std;


int main() {
    int a, b;
    
    while (cin >> a >> b) {
        
        int res = 1;
        
        for (int i = 0; i < b; ++i) {
            res = res * a;
        }
        
        cout << res << endl;
        
    }
}

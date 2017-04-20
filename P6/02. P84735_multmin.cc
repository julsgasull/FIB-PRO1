// P84735_multmin.cc

#include <iostream>
using namespace std;

int multiple_petit(int a, int b) {
    int m;
    if (a%b == 0) m = a;
    else m = (a/b)*b + b;
    return m;
}
 
int main() {
    int a, b;
	int count = 1;
    while (cin >> a >> b) {
        cout << "#" << count << " : " << multiple_petit(a,b) << endl;
        ++count;
    }
}

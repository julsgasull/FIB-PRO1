//P32026

#include <iostream>
using namespace std;

int main() {
    int n, ni;
    cin >> n;
    int count = 0;
    int txn = n%1000;
    cout << "nombres que acaben igual que " << n << ":" << endl;
    
    while (cin >> ni) {
          if (ni%1000 == txn) {
             ++count;
             cout << ni <<
             endl;
          }
    }
    cout << "total: " << count << endl;
}

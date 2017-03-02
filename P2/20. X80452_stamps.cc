//X80452

#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
          int p = 0;
          int q = 0;
          int minp = n;
          int minq = n;
          
          while (7 * p <= n) {
                while (4 * q <= n) {
                      if (7 * p + 4 * q == n) {
                         if (p < minp) minp = p;
                         if (q < minq) minq = q;
                      ++q;
                      }
                ++p;
                }
          }
    cout << minp << " " << minq << endl;
    }
}

//P60816

#include <iostream>
using namespace std;

int main () {
  int n, r;
  cin >> n;
  while (n >= 16) {
    r = n%16;
    if (r > 9){
      if (r == 10) cout << 'A';
      else if (r == 11) cout << 'B';
      else if (r == 12) cout << 'C';
      else if (r == 13) cout << 'D';
      else if (r == 14) cout << 'E';
      else cout << 'F';
    }
    else cout << r;
    n = n/16;
  }
  if (n > 9){
      if (n == 10) cout << 'A';
      else if (n == 11) cout << 'B';
      else if (n == 12) cout << 'C';
      else if (n == 13) cout << 'D';
      else if (n == 14) cout << 'E';
      else cout << 'F';
    }
  else cout << n;
  cout << endl;
}

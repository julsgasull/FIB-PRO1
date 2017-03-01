//P79784

#include <iostream>
using namespace std;

int main() {
    char card;
    int x = 0, y = 0;
    while (cin >> card) {
          if (card == 'n') --y;
          else if (card == 's') ++y;
          else if (card == 'e') ++x;
          else --x;
    }
    cout << "(" << x << ", " << y << ")" << endl;
}

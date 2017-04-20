//P89078_posiciosenar.cc

#include <iostream>
using namespace std;

int main() {
	int n;
	int count = 1;
	while (cin >> n and n%2 != 0) ++count;
	cout << count << endl;
}

//X98097

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int parells = 0;
	int senars = 0;
	int count = 0;
	
	while (n > 0) {
		++count;
		if (count % 2 != 0) senars = senars + n%10;
		else parells = parells + n%10;
		n = n/10;
	}
	
	cout << senars << " " << parells << endl;
	
	if (parells == 0 and senars == 0) cout << "0 = 0 * 0";
	else if (parells == 0) cout << parells << " = " << 0 << " * " << senars;
	else if (senars == 0) cout << senars << " = " << 0 << " * " << parells;
	else if (parells == senars) cout << parells << " = " << 1 << " * " << senars;
	else if (parells > senars and parells % senars == 0) cout << parells << " = " << parells/senars << " * " << senars;
	else if (senars > parells and senars % parells == 0) cout << senars << " = " << senars/parells << " * " << parells;
	else cout << "res";
	cout << endl;
}

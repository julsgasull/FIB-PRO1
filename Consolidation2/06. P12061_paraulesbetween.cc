//P12061_paraulesbetween.cc

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	bool principi = false;
	bool final = false;
	bool cert = true; //== que hi hagi principi i després final
	
	while (cin >> s and !final and cert)  {
		if (s == "final" and principi) final = true;
		else if (s == "principi") principi = true;
		else if (s == "final" and !principi) cert = false;
		else if(principi) ++count;
	}
	
	if (final) cout << count << endl;
	else cout << "sequencia incorrecta" << endl;

}

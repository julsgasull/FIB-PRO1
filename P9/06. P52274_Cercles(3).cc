//P52274_Cercles(3).cc

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
struct Punt{
    double x, y;
};
 
struct Cercle{
    Punt centre;
    double radi;
};
 
void escala(Cercle& c, double esc) {
   c.radi *= esc;
}
 
double distancia(const Punt& a, const Punt& b) {
   double m = a.x - b.x;
   double n = a.y - b.y;
   m *=m;
   n *=n;
   double c = m + n;
   return sqrt(c);
}
 
int max2(int a,int b) {
  if (a >= b) return a;
  else return b;
}
 
int min2(int a, int b) {
   if (a <= b) return a;
   else return b;
}
 
void desplaca(Punt& p1, const Punt& p2) {
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}
 
 
void llegeix(Cercle& c) {
   cin >> c.centre.x >> c.centre.y >> c.radi;
}
 
bool es_interior(const Punt& p, const Cercle& c) {
  int t = int(distancia(c.centre, p));
  if (t <= c.radi) return true;
  else return false;
}
 
int relacio(const Cercle& c1, const Cercle& c2) {
    if (es_interior(c1.centre, c2) and c1.radi < c2.radi) return 1;
    else if (es_interior(c2.centre, c1) and c2.radi < c1.radi) return 2;
    else if ((not es_interior(c1.centre, c2)) and (distancia(c1.centre, c2.centre) < (c1.radi+c2.radi))) return 3;
    else if ((not es_interior(c2.centre, c1)) and (distancia(c1.centre, c2.centre) < (c1.radi+c2.radi))) return 3;
    else return 0;
}
 
int main() {
    vector <Cercle> v(2);
    llegeix(v[0]);
    llegeix(v[1]);
    if(relacio(v[0], v[1]) == 1) cout << "el primer cercle es interior al segon" << endl;
    else if(relacio(v[0], v[1]) == 2) cout << "el segon cercle es interior al primer" << endl;
    else if(relacio(v[0], v[1]) == 3) cout << "els cercles intersecten" << endl;
    else if(relacio(v[0], v[1]) == 0) cout << "els cercles no intersecten" << endl;
    int m;
    while (cin >> m) {
    string s;
    cin >> s;
    if (s == "escala") {
      int n;
      cin >> n;
      escala(v[m-1], n);    
    }
    else if (s == "mou") {
      Punt c;
      cin >> c.x >> c.y;
      desplaca(v[m-1].centre, c);
    }
    if(relacio(v[0], v[1]) == 1) cout << "el primer cercle es interior al segon" << endl;
    else if(relacio(v[0], v[1]) == 2) cout << "el segon cercle es interior al primer" << endl;
    else if(relacio(v[0], v[1]) == 3) cout << "els cercles intersecten" << endl;
    else if(relacio(v[0], v[1]) == 0) cout << "els cercles no intersecten" << endl;
    }
}

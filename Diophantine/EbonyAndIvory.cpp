#include <bits/stdc++.h>
using namespace std;

int exGcd(int a, int b, int &x, int &y) {
  if(b == 0) {
    x = 1, y = 0;
    return a;
  }
  int p, q, g;
  g = exGcd(b, a%b, p, q);
  x = q;
  y = p - q*(a/b);
  return g;
}

bool findAny(int a, int b, int c, int &x, int &y, int &g) {
  g = exGcd(a, b, x, y);
  if(c % g) return false;
  x *= c/g;
  y *= c/g;
  return true;
}


int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int x, y, g;
  if(!findAny(a, b, c, x, y, g))
    cout << "No\n";
  else {
    a /= g, b /= g;
    if(x < 0) {
      int k = ceil((double)-x/b);
      y -= k*a;
      if(y >= 0)
        cout << "Yes";
      else
        cout << "No";
    }
    else if( y < 0) {
      int k = floor((double)y/a);
      x += k*b;
      if(x >= 0)
        cout << "Yes";
      else
        cout << "No";
    }
    else
      cout << "Yes";
  }
}

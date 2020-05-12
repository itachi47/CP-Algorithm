#include <bits/stdc++.h>
using namespace std;

int main() {
  int test;
  cin >> test;
  int a, b, c, t = 1;
  while(test--) {
    cin >> a >> b >> c;
    int k = __gcd(abs(a), abs(b));
    if(c%k == 0)
      printf("Case %d: Yes\n", t++);
    else
      printf("Case %d: No\n", t++);
  }
}

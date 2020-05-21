#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 1e7+7;
  vector<bool> prime(n, true), isSquare(n, false);
  vector<int> primeCount(n, 0);
  for(int i = 2; i*i < n; ++i) {
    if(prime[i]) {
      for(int j = i*i; j < n; j += i) {
        prime[j] = false;
      }
    }
  }
  for(int i = 1; i*i < n; ++i) 
    isSquare[i*i] = true;

  for(int i = 1; i < n; ++i) {
    primeCount[i] = primeCount[i-1];

    if(prime[i]){
      for(int j = 1; j*j*j*j <=  i; ++j)
        if(isSquare[i-j*j*j*j]) {
          primeCount[i] ++; break;
        }
    }
  }


  int test; cin >> test;
  while(test--) {
    cin >> n;
    cout << primeCount[n] << endl;
  }
  return 0;
}
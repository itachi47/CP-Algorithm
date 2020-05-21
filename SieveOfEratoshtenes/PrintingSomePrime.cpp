#include <bits/stdc++.h>
using namespace std;

#define SONIC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

const ll SIZE = 1e8;

int main() {
  SONIC
  bitset<SIZE> prime;
  prime.flip();
  prime[0] = 0;
  prime[1] = 0;
  for(ll i = 2; i*i < SIZE; ++i){
    if(prime[i]){
      for(ll j = i*i; j < SIZE; j += i)
        prime[j] = 0;
    }
  }
  int k = 0;
  for(ll i = 2; i < SIZE; ++i){
    if(prime[i]){
      if(!k){
        cout << i << endl;
        k = 99;
      }
      else
        k--;
    }
  }
}

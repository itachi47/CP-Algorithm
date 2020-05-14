/*Cassini's identity:
        Fn−1*Fn+1−F2n=(−1)^n
The "addition" rule:
        Fn+k=Fk*Fn+1+Fk−1*Fn
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

pair<ll, ll> binFibo(long long n, ll mod) {
    if (n == 0)
        return {0, 1};

    auto p = binFibo(n >> 1, mod);
    ll c = (p.first * ((2 * p.second)%mod + mod - p.first))%mod;
    ll d = ((p.first * p.first)%mod + (p.second * p.second)%mod)%mod;
    if (n & 1)
        return {d, (c + d)%mod};
    return {c, d};
}

int main(){
	ll test; cin >> test;
	long long n;
  ll mod = 1e9+7;
	while(test--) {
		cin >> n;
		if(n == 0)
			cout << 0 << endl;
		else if(n == 1)
			cout << 2 << endl;
		else{
			auto k = binFibo(n+1, mod);
			cout << (k.first+k.second)%mod << endl;
		}
	}
	return 0;
}

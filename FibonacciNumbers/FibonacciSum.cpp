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
	ll left, right;
	ll mod = 1e9+7;
	while(test--) {
		cin >> left >> right;
    left = binFibo(left+1, mod).first;
    right = binFibo(right+2, mod).first;
    cout << (right+mod-left)%mod << endl;
	}
	return 0;
}

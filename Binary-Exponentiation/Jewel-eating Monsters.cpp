// if case handles the case when a%c == 1 which try to divide expression by zero.
// so expr = x.a^n - (a^n + a^(n-1) + a^(n-2) + ... + a)
// 	= x.1 - (1 + 1 + 1 + ... + 1)
// 	= x - n
// else
// 	expr = x.a^n - a(a^n - 1)/(a-1)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll xymodn(ll base, ll power, ll mod){
	ll res = 1;
	while(power > 0){
		if(power&1)
			res = (res*base)%mod;
		base = (base*base)%mod;
		power >>= 1;
	}
	return res%mod;
}

int main(){
	ll x, a, n, c;
	while(true){
		cin >> x >> a >> n >> c;
		if(x == 0 and a == 0 and n == 0 and c == 0)
			return 0;
		if(a%c == 1)
			cout << (x-n+c)%c <<endl;
		else{
			ll power = xymodn(a, n, c);
			ll inverse = xymodn(a-1, c-2, c);
			ll ans = (x%c*power)%c - (a%c*(inverse*(power-1))%c)%c;
			cout << (ans+c)%c << endl;
		}
	}
	return 0;
}

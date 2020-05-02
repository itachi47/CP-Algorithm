#include <iostream>
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
	return res;
}
int main(){
	ll test; cin >> test;
	ll n, mod = 1e9+7, ans;
	while(test--){
		cin >> n;
		ans = 1;
		if(n != 0 and n != 1){
			if(n%3 == 1)
				ans = (xymodn(3, n/3-1, mod)*4)%mod;
			else
				ans = (xymodn(3, n/3, mod)*(n%3 == 2 ? 2 : 1))%mod;
		}
		cout << ans << endl;
	}
	return 0;
}

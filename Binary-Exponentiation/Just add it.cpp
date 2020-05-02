#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int xymodn(long long base, long long power, long long mod){
	long long res = 1;
	while(power > 0){
		if(power&1)
			res = (res*base%mod)%mod;
		base = (base%mod*base%mod)%mod;
		power >>= 1;
	}
	return res%mod;
}
int main(){
	long long n, k, mod = 10000007;
	ll ans;
	while(cin >> n >> k){
		if(n == 0 and k == 0)
			break;
		ans = 0;
		ans += xymodn(n-1, k, mod);
		ans = ((ans + xymodn(n-1, n-1, mod))%mod*2)%mod;
		ans = (ans + (xymodn(n, k, mod) + xymodn(n, n, mod))%mod)%mod;
		cout << ans << endl;
	}
	return 0;
}

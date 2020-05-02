#include <bits/stdc++.h>
using namespace std;

long long binExpo(long long base, long long power){
	long long res = 1;
	long long mod = 1000;
	while(power > 0){
		if(power&1)
			res = res*base%mod;
		base = (base%mod*base%mod)%mod;
		power >>= 1;
	}
	return res%mod;
}

int main() {
	// your code goes here
	long long test; cin >> test;
	long long base, power;
	while(test--){
		cin >> base >> power;
		int rrr = binExpo(base, power);
		int lll = (int)(pow(10, fmod(power*log10(base), 1))*100);
		printf("%d...%03d\n", lll, rrr);
	}
	return 0;
}

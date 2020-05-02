#include <bits/stdc++.h>
using namespace std;

int binExpo(int base, int power, int mod){
	int res = 1;
	while(power > 0){
		if(power&1)
			res = res*base%mod;
		base = base*base%mod;
		power >>= 1;
	}
	return res%mod;
}

int main(){
	int test; cin >> test;
	int base, power;
	while(test--){
		cin >> base >> power;
		cout << binExpo(base, power, 10) << endl;
	}
	return 0;
}

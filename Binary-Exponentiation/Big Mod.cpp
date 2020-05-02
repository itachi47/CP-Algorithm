#include <iostream>
using namespace std;


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
	long long x, y, n;
	while(cin >> x >> y >> n)
		cout << xymodn(x, y, n) << endl;
	return 0;
}

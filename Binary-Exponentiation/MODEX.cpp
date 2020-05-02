#include <iostream>
using namespace std;


int xymodn(int base, int power, int mod){
	int res = 1;
	while(power > 0){
		if(power&1)
			res = (res*base)%mod;
		base = (base*base)%mod;
		power >>= 1;
	}
	return res;
}
int main(){
	int test; cin >> test;
	int x, y, n;
	while(test--){
		cin >> x  >> y >> n;
		cout << xymodn(x, y, n) << endl;
	}
	return 0;
}

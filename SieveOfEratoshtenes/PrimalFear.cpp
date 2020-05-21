#include <bits/stdc++.h>
using namespace std;

int digits(int n) {
	int res = 0;
	
	while(n > 0) {
		n /= 10;
		res ++;
	}
	return res;
}
int main() {
    int n = 1e6+7;
    vector<bool> prime(n, true);

    for(int i = 2; i*i < n; ++i) {
        if(prime[i]) {
            for(int j = i*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> res(n, 0);
    
    for(int i = 2; i < 10; ++i) {
        if(prime[i])
            res[i] = 1;
    }

    for(int i = 3; i < n; i += 2) {
        if(res[i]) {
			int k = pow(10, digits(i));
            for(int j = 1; j < 10; ++j) {
                if(k*j+i < n)
                    res[k*j+i] = (prime[k*j+i] ? 1 : 0);
                else
                    break;
            }
        }
    }
    
    for(int i = 2; i < n; ++i) {
        res[i] += res[i-1];
    }

    int test; cin >> test;
    while(test--) {
        cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}
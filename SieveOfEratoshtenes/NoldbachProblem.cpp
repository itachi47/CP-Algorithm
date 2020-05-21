#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 1e3+7;
    vector<bool> prime(n, true);
    for(int i = 2; i*i < n; ++i) {
        if(prime[i]) {
            for(int j = i*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    prime[0] = 0;
    prime[1] = 0;
    int k;
    cin >> n >> k;
    
    int first = 2;
    for(int i = 3; i < n; ++i) {
        if(prime[i]) {
            if(first+i+1 <= n and prime[i+first+1]){
                k--;
            }
            first = i;
        }
        if(k == 0)
            break;
    }
    cout << (k == 0 ? "YES" : "NO");
    return 0;
}
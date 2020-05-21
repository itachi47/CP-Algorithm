#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3e3+7;
    vector<bool> prime(n, true);
    for(int i = 2; i*i < n; ++i) {
        if(prime[i]) {
            for(int j = i*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }

    vector<int> res(n, 0);

    for(int i = 2; i < n; ++i) {
        if(prime[i]) {
            for(int j = i+i; j < n; j += i) {
                res[j] += 1;
            }
        }
    }
    int curr = 0;
    for(int i = 2; i < n; ++i) {
        if(res[i] == 2)
            curr ++;
        res[i] = curr;
    }

    cin >> n;
    cout << res[n];
    return 0;
}
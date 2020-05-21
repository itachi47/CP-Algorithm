#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1e5+7;
    vector<bool> prime(n, true);
    for(int i = 2; i*i < n; ++i) {
        if(prime[i]) {
            for(int j = i*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    cin >> n;
    if(n < 3) {
        cout << 1 << endl;
        for(int i = 0; i < n; ++i)
            cout << 1 << " ";
    }
    else {
        cout << 2 << endl;
        for(int i = 1; i <= n; ++i) {
            if(prime[i+1])
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
    }
    return 0;
}
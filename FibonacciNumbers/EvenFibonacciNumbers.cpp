#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define SONIC ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef unsigned long long ull;

ull evenFiboSum(ull n){
    ull odd = 1, even = 2;
    ull sm = 0, temp;
    while(even <= n) {
        sm += even;
        temp = odd;
        odd = 2*even+odd;
        even = 3*even+2*temp;
    }
    return sm;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    SONIC
    int test; cin >> test;
    ull n;
    while(test--) {
        cin >> n;
        cout << evenFiboSum(n) << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long test;
    scanf("%lld", &test);
    long long a, b;
    while(test--) {
        scanf("%lld%lld", &a,&b);
        if(__gcd(a, b) == 1)
            printf("%lld\n", a*b-(a+b)+1);
        else
            printf("%d\n", -1);
    }
    return 0;
}

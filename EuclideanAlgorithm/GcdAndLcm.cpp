#include <iostream>
using namespace std;

#define ll long long int

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        int first, second;
        cin >> first >> second;
        ll gc = first > second ? gcd(first, second) : gcd(second, first);
        cout << gc << " " <<(first > second ? first/gc*second : second/gc*first) << "\n";
    }
    return 0;
}

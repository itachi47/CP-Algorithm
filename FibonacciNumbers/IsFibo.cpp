#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
bool isFibo(long n) {
    long a = 0, b = 1, k;
    while(a <= n){
        if(a == n)
            return true;
        k = b;
        b += a;
        a = k;

    }
    return false;
}
string solve(long n) {
    if(isFibo(n))
        return "IsFibo";
    return "IsNotFibo";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

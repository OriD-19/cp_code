#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        long long n, k, x; cin >> n >> k >> x;

        long long min_sum = 0, max_sum = 0;

        min_sum = k*(k+1) / 2;
        max_sum = n*(n+1) / 2;
        max_sum -= (n-k)*(n-k+1) / 2;


        if(x >= min_sum && x <= max_sum) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }

    return 0;
}
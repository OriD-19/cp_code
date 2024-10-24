#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        long long n, m, k; cin >> n >> m >> k;

        long long sumj = 0, minj = 1e9 + 1, maxj = 0;
        long long sumg = 0, maxg = 0;

        for(int i = 0; i < n; i++) {
            long long num; cin >> num;
            sumj+=num;
            minj = min(minj, num);
            maxj = max(maxj, num);
        }

        for(int i = 0; i < m; i++) {
            long long num; cin >> num;
            sumg+=num;
            maxg = max(maxg, num);
        }

        if(k % 2 == 1 && minj < maxg)  {
            cout << (sumj - minj) + maxg << endl;
            continue;
        } else if(k % 2 == 0 && maxj > maxg) {
            cout << sumj - maxj + maxg << endl;
            continue;
        }
        

        cout << sumj << endl;

    }

    return 0;
}
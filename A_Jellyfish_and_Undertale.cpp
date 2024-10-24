#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        long long a, b, n; cin >> a >> b >> n;

        long long ans = b - 1;
        long long full = 0;

        for(int i = 0; i < n; i++) {
            long long num;
            cin >> num;
            if(num >= a-1) {
                full++;
            } else {
                ans += num;
            }
        }

        if(full == 1) {
            cout << ans + a << endl;
        } else if(full < 1) {
            cout << ans+1 << endl;
        } else {
            cout << ans + (full-1)*(a-1) + a << endl;
        }
    }

    return 0;
}
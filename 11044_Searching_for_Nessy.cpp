#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t; cin >> t;
    int n, m;

    while(t--) {
        cin >> n >> m;
        uint64_t ans = floor(n / 3.0) * floor(m / 3.0);
        cout << ans << endl;
    }

    return 0;
}
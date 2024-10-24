#include <iostream>
#include <cmath>

using namespace std;

int main() {

    uint64_t  t; cin >> t;

    while(t--) {

        uint64_t w; cin >> w;
        uint64_t ans = floor(((-1) + sqrt(1 - 4*(1)*(-2*w))) / 2);

        cout << ans << endl;
    }

    return 0;
}

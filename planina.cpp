#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    uint64_t n; cin >> n;
    uint64_t ans = pow(pow(2, n)+1, 2);
    cout << ans  << endl;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int a, b;

    while (cin >> a >> b)
    {
        uint64_t ans = abs(a - b);

        cout << ans << "\n";
    }

    return 0;
}
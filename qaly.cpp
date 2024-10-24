#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t; cin >> t;

    double ans = 0;

    while(t--) {
        double a, b;
        cin >> a >> b;

        double q = a * b;
        ans+=q;
    }

    cout << setprecision(10) << ans;
    return 0;
}
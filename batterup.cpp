#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n; cin >> n;

    int at_bats = 0, total = 0;
    while(n--) {
        int a; cin >> a;

        if(a != -1) {
            total += a;
            at_bats++;
        }
    }

    double res = total / (at_bats*1.0);
    cout << setprecision(6) << fixed << res;

    return 0;
}
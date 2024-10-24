// p, a, b, c, d and n
// The number n describes how many prices we will calculate
// Really interesting problem.
// Best part? This was actually in a progamming contest
// At some point in time... SO WHAT DOES THAT MEAN, BABY?
// Btw, first try submit on kattis :)

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int p, a, b, c, d, n;

    cin >> p >> a >> b >> c >> d >> n;

    double max_val = -10e9;
    double min_val = 10e9;
    double ans = 0;

    for(int i = 1; i<=n;i++) {
        double price = p*(sin(a*i+b) + cos(c*i+d) + 2);

        if(price > max_val) {
            max_val = price;
            min_val = price;
            continue;
        }

        if(price < max_val) {
            min_val = price;
            ans = max(ans, max_val - min_val);
        }
    }

    cout << setprecision(8) << fixed;
    cout << ans;

    return 0;
}
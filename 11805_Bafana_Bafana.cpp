#include <iostream>

using namespace std;

int main()
{

    int t; cin >> t;
    int c = 0;

    while(t--) {
        int n, k, p;
        cin >> n >> k >> p;
        cout << "Case " << ++c << ": " << (((k+p) % n) ? (k+p)%n : n) << endl;
    }

    return 0;
}
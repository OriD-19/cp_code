#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int x; cin >> x;
        cout << x << " " << ((x%2) ? "is odd" : "is even") << endl;
    }

    return 0;
}
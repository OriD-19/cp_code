#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        long long counter = 1;
        while(n--) {
            cout << counter << " ";
            counter+=2;
        }

        cout << "\n";
    }

    return 0;
}
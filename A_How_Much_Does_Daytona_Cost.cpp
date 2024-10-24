#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        bool found = false;

        while(n--) {
            int number; cin >> number;
            if(number == k && !found) {
                found = true;
                cout << "YES" << endl;
            }
        }

        if(!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
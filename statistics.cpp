#include <iostream>

using namespace std;

int main()
{

    int n, c;

    while(cin >> n) {

        int max_n = -1000001, min_n = 1000001;

        while(n--) {
            int x; cin >> x;
            max_n = max(x, max_n);
            min_n = min(x, min_n);
        }

        cout << "Case " << ++c << ": " << min_n << " " << max_n << " " << max_n - min_n << endl;
    }

    return 0;
}
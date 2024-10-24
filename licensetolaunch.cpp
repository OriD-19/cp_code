#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int count = 0, min_day = 0;
    uint64_t min_junk = 10e9 + 1;

    while(n--) {
        int j; cin >> j;
        if(j < min_junk) {
            min_junk = j;
            min_day = count;
        }
        count++;
    }

    cout << min_day;

    return 0;
}
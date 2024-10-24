#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> teas(n);
    for(auto &i : teas)
        cin >> i;

    int m; cin >> m;

    vector<int> flavours(m);
    for(auto &i : flavours)
        cin >> i;

    long long cheapest = 1e9;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;

        int combination;
        long long int min_combo = 1e9;

        for(int j = 0; j < k; j++) {
            cin >> combination;
            min_combo = min(min_combo, (long long)(teas[i] + flavours[combination-1]));
        }

        cheapest = min(cheapest, min_combo);
    }
    long long money;
    cin >> money;
    cout << max((money / cheapest) - 1, (long long)0);

    return 0;
}
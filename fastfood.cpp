#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, m; cin >> n >> m;

        vector<pair<vector<int>, int>> prize(n);
        vector<int> stickers(m);

        for(int i = 0; i < n; i++) {
            int k; cin >> k;
            while(k--) {
                int ticket; cin >> ticket;
                prize[i].first.push_back(ticket);
            }
            int price; cin >> price;
            prize[i].second = price;
        }

        for(int i = 0; i < m; i++) 
            cin >> stickers[i];

        int ans = 0;

        for(auto a : prize) {
            int min_sticker = 1e9;
            for(auto b : a.first) {
                min_sticker = min(min_sticker, stickers[b-1]);
            } 

            ans+=min_sticker * a.second;

        }
        
        cout << ans << endl;

    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define ld long double
#define vi vector<int>
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l
const ll INF = 1e9;
const ld EPS = 1e-9;

vector<string> cows = {
    "Bessie", 
    "Buttercup", 
    "Belinda", 
    "Beatrice", 
    "Bella", 
    "Blue", 
    "Betsy", 
    "Sue"
};
vector<pair<string, string>> restrictions;

bool check_adjacent(int i, string compare_cow) {
    int checker = 0;

    if (i-1 >= 0) {
        if (cows[i-1] != compare_cow) {
            checker++;
        }
    } else checker++;

    if (i + 1 < cows.size()) {
        if (cows[i + 1] != compare_cow) {
            checker++;
        }
    } else checker++;

    return checker < 2;
}

void order() {
    do
    {
        bool valid_arrangement = true;

        for (int i = 0; i < cows.size(); ++i) {
            // This valid applies for each cow, not the whole arrangement
            bool valid = true;
            for (int j = 0; j < restrictions.size(); ++j) {
                if (cows[i] == restrictions[j].first) {
                    if (!check_adjacent(i, restrictions[j].second)) {
                        valid = false;
                        break;
                    }
                } else if (cows[i] == restrictions[j].second) {
                    if (!check_adjacent(i, restrictions[j].first)) {
                        valid = false;
                        break;
                    }
                }
            }

            if (!valid) {
                valid_arrangement = false;
                break;
            }
        }

        if (valid_arrangement) break;

    } while (next_permutation(cows.begin(), cows.end()));
}

void solve() {
    int n; cin >> n;

    for (int i = 0; i < n; ++i) {
        string c1, w, c2;

        cin >> c1 >> w >> w >> w >> w >> c2;
        
        restrictions.push_back({c1, c2});
    }

    sort(cows.begin(), cows.end());

    order();

    for (int i = 0; i < cows.size(); ++i) {
        cout << cows[i] << "\n";
    }    
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  freopen("lineup.in", "r", stdin);
  freopen("lineup.out", "w", stdout);

  solve();
}
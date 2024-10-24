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

void solve() {
    int hands;
    char B;
    cin >> hands >> B;

    unordered_map<char, int> dominant = {
        {'A', 0},
        {'K', 0},
        {'Q', 0},
        {'J', 18},
        {'T', 0},
        {'9', 14},
        {'8', 0},
        {'7', 0}
    };

    unordered_map<char, int> non_dominant = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0},
        {'8', 0},
        {'7', 0}
    };

    int total_points = 0;

    for(int i = 0; i < 4*hands; i++) {
        string card; cin >> card;

        total_points += non_dominant[card[0]];
        if(card[1] == B) {
            total_points += dominant[card[0]];
        }

    }

    cout << total_points;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

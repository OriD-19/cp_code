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
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    int moments = 0;
    vector<pair<int, int>> lz(p);
    vector<pair<int, int>> lx(q);

    for (auto &i : lz) 
        cin >> i.first >> i.second;

    for (auto &i : lx) 
        cin >> i.first >> i.second;

    for (int i = l; i <= r; ++i) {

        bool valid = false;

        for (int j = 0; j < q; ++j) {

            int ai = lx[j].first + i;
            int bi = lx[j].second + i;

            for (int k = 0; k < p; ++k) {

                bool one = ai >= lz[k].first && bi <= lz[k].second;
                bool two = ai <= lz[k].first && bi >= lz[k].first;
                bool three = ai <= lz[k].second && bi >= lz[k].second;
                bool four = ai <= lz[k].first && bi >= lz[k].second;

                if (one || two || three || four)
                    valid = true;
            }

        }

        if (valid)
            moments++;
    }

    cout << moments << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
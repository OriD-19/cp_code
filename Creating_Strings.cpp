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

    string s; cin >> s;
    sort(s.begin(), s.end());

    vector<string> ans;

    do {
        ans.push_back(s);
    } while(next_permutation(s.begin(), s.end()));

    cout << ans.size() << "\n";

    for (string w : ans) {
        cout << w << "\n";
    }

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
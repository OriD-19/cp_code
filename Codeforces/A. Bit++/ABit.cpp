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
    int n; cin >> n;

    int x = 0;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        
        if (s.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

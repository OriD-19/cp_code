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
  
  int t; cin >> t;

  while(t--) {
    string s; cin >> s;

    bool first_char = s[0] == 'y' || s[0] == 'Y';
    bool second_char = s[1] == 'e' || s[1] == 'E';
    bool third_char = s[2] == 's' || s[2] == 'S';

    cout << (first_char && second_char && third_char ? "YES" : "NO") << endl;

  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

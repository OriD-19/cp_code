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
  ll n; cin >> n;
  vi pr(n);

  for(int &i : pr) {
    cin >> i;
  }

  if(n == 1) {
    cout << "1";
    return;
  }

  ll length = 1;
  ll max_length = 0;

  for(int i = 1; i < n; i++) {
    if(pr[i] < pr[i - 1]) {
      max_length = max(max_length, length);
      length = 1;
    } else {
      length++;
    }
  }

  cout << max(max_length, length);

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

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

  int n, m;

  while(cin >> n >> m) {
    if(n == 0 && m == 0) {
      break;
    }

    unordered_set<int> jc;

    while(n--) {
      int cd; cin >> cd;
      jc.insert(cd);
    }

    int count = 0;
    while(m--) {
      int cd; cin >> cd;
      if(jc.count(cd)) {
        count++;
      }
    }

    cout << count << endl;

  }

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

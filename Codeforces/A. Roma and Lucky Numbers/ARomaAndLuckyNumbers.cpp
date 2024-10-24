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

bool countLucky(int n, int leftLucky) {
    if (n == 0) {
        return leftLucky >= 0;
    }

    bool isLucky = n % 10 == 4 || n % 10 == 7;
    return countLucky(n / 10, leftLucky - isLucky);
}

void solve() {
    int n, k; cin >> n >> k;

    int res = 0;

    for (int i = 0; i < n; ++i) {
        int ai; cin >> ai;
        res += countLucky(ai, k);
    }

    cout << res << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

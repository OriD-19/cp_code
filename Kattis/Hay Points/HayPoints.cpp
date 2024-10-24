#include <bits/stdc++.h>
#include <unordered_map>
#include <string>

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
  int m, n; cin >> m >> n;

  unordered_map<string, int> dict;

  for(int i = 0; i < m; i++) {
    string word;
    int money;
    cin >> word >> money;

    dict[word] = money;
  }

  string dummy;
  getline(cin, dummy);

  // each test case
  for(int i = 0; i < n; i++) {

    string desc_line;
    getline(cin, desc_line);
    int amount = 0;

    while(desc_line != ".") {
      

      string w;

      for(char c : desc_line) {
        if(c == ' ') {
          if(dict.count(w)) {
            amount += dict[w];
          }
          w = "";
        } else {
          w += c;
        }
      }

      if(dict.count(w)) {
        amount += dict[w];
      }

      getline(cin, desc_line);
    }

    cout << amount << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

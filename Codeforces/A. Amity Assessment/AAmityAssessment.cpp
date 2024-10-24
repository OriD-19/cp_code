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
  string grid_1, grid_2;
  string p1, p2;

  cin >> grid_1 >> p1;
  cin >> grid_2 >> p2;

  // Add the characters clock-wise in each grid
  grid_1 += p1[1];
  grid_1 += p1[0];

  grid_2 += p2[1];
  grid_2 += p2[0];

  vector<string> opt1{"ABC", "BCA", "CAB"};
  vector<string> opt2{"ACB", "BAC", "CBA"};

  // Eliminate the 'X' char in each grid

  grid_1.erase(remove(all(grid_1), 'X'), grid_1.end());
  grid_2.erase(remove(all(grid_2), 'X'), grid_2.end());

  bool first_case = find(all(opt1), grid_1) != opt1.end() && find(all(opt1), grid_2) != opt1.end();
  bool second_case = find(all(opt2), grid_1) != opt2.end() && find(all(opt2), grid_2) != opt2.end();

  if(first_case || second_case)
    cout << "YES";
  else 
    cout << "NO";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

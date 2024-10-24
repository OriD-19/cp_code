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
    cin >> n >> m;

    // use the length of each vector to get the number of connections
    vector<vi> students(n+1);

    for(int i = 0; i < m; ++i) {
        int a, b;

        cin >> a >> b;

        students[a].push_back(b);
        students[b].push_back(a);
    }

    int groups = 0;

    while (true) {
        vector<int> to_delete;

        for (int i = 1; i < n+1; ++i) {
            // if they just have one connection, they get kicked out
            if (students[i].size() == 1) {
                to_delete.push_back(i);
            }
        }

        if (to_delete.size() == 0)
            break;

        for (int i = 0; i < to_delete.size(); ++i) {
            students[to_delete[i]].clear();
            
            for (int j = 1; j < n + 1; ++j) {
                vector<int>::iterator it = find(students[j].begin(), students[j].end(), to_delete[i]);

                if (it != students[j].end()) {
                    students[j].erase(it);
                }
            }
        }

        groups++;
    }

    cout << groups << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
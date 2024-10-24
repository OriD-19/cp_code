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

bool validMove(int x, int y, int n) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

void solve() {
    int n;
    cin >> n;

    vector<string> board(n);

    for (int i = 0; i < n; ++i) {
        string s(n, '.');
        board[i] = s;
    }

    vector<pair<int, int>> moves = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}
    };

    int total = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bool validCoder = true;

            for (pair<int, int> a : moves)
            {
                if (validMove(i+a.first, j+a.second, n)) {
                    if(board[i+a.first][j+a.second] == 'C') {
                        validCoder = false;
                        break;
                    }
                }
            }

            if (validCoder) {
                board[i][j] = 'C';
                total++;
            }
        }
    }

    cout << total << endl;
    for (string a : board) {
        cout << a << endl;
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
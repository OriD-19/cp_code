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

vector<string> board(8);
vector<vi> queens(8, vi(8, 0));
const int BOARD_SIZE = 8;
int count_queens = 0;

// False if there are no queens, true if there is a queen
bool row_queen(int row, int col) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if (queens[row][i] == 1 && i != col) {
            return true;
        }
    }

    return false;
}

bool col_queen(int row, int col) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        if (queens[i][col] == 1 && i != row) {
            return true;
        }
    }

    return false;
}

bool diag1_queen(int start_y, int start_x) {
    int x = start_x-1, y = start_y-1;
    while (x >= 0 && y >= 0) {
        if (queens[y][x] == 1) {
            return true;
        }
        y--;
        x--;
    }

    x = start_x+1;
    y = start_y+1;

    while (x < BOARD_SIZE && y < BOARD_SIZE) {
        if (queens[y][x] == 1) {
            return true;
        }

        y++;
        x++;
    }

    return false;
}

bool diag2_queen(int start_y, int start_x) {
    int x = start_x+1, y = start_y-1;
    while (x < BOARD_SIZE && y >= 0) {
        if (queens[y][x] == 1) {
            return true;
        }

        y--;
        x++;
    }

    x = start_x-1;
    y = start_y+1;

    while (x >= 0 && y < BOARD_SIZE) {
        if (queens[y][x] == 1) {
            return true;
        }

        y++;
        x--;
    }

    return false;
}

void search(int row) {
    if (row == BOARD_SIZE) {
        count_queens++;
        return;
    }

    for (int col = 0; col < BOARD_SIZE; ++col) {

        if (col_queen(row, col) || diag1_queen(row, col) || diag2_queen(row, col)) {
            continue;
        }

        if (board[row][col] == '*') {
            continue;
        }

        queens[row][col] = 1;
        search(row+1);
        queens[row][col] = 0;
    }
}

void solve() {
    // Place 8 queens in an 8x8 chess board
    for (int i = 0; i < BOARD_SIZE; ++i) {
        string r; cin >> r;
        board[i] = r;
    }

    // start at row 0
    search(0);

    cout << count_queens << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
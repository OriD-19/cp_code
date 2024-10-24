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


vector<int> movesY = {-1, 1, 0, 0, -1, -1, 1, 1};
vector<int> movesX = {0, 0, 1, -1, 1, -1, 1, -1};
vector<vector<char>> grid(rows, vector<char>(cols));
//vector<vector<int>> visited(rows, vector<int>(cols));

/*
Iterate over every tile of the grid.
Perform a search in every move. Verify that such move is valid.
That is, perform moves up, down, left, right and diagonally.
If we find a consecutive letter, then keep down that path.
Whenever we can't perform any valid move again, backtrack to the last path that we can
actually perform a valid move.

We need to keep a local visited array.
Actually, we don't even need a visited array
because the "consecutive" condition is already enough
to avoid ourselves infinite loops
*/

int dfs(vector<vector<char>> grid) {
}

bool isValidMove(int x, int y, int rows, int cols) {
  return x >= 0 && x < cols && y >= 0 && y < rows;
}

void solve() {
  int rows, cols; cin >> rows >> cols;


  for(int i = 0; i < grid.size(); i++) {
    for(int j = 0; j < grid[i].size(); j++){
      cin >> grid[i][j];
    }
  }

  for(int i = 0; i < grid.size(); i++) {
    for(int j = 0; j < grid[0].size(); j++) {
      
      // Analyze each move
      for(int k = 0; k < 8; k++) {
        
      }

    }
  }

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

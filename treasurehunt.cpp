#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

int main()
{
    int r, c; cin >> r >> c;

    vector<string> board(r);

    for(int i=0;i<r;i++)
        cin >> board[i];

    int pos_x = 0, pos_y = 0;
    set<pair<int, int>> visited;
    int count = 0;

    while(true) {

        if(board[pos_y][pos_x] == 'T') {
            cout << count;
            break;
        } else if(board[pos_y][pos_x] == 'E') {
            pos_x++;
        } else if(board[pos_y][pos_x] == 'S') {
            pos_y++;
        } else if(board[pos_y][pos_x] == 'N') {
            pos_y--;
        } else if(board[pos_y][pos_x] == 'W') {
            pos_x--;
        }

        if(pos_x < 0 || pos_y < 0 || pos_x >= c || pos_y >= r) {
            cout << "Out";
            break;
        }

        if(visited.count({pos_x, pos_y})) {
            cout << "Lost";
            break; 
        } else {
            visited.insert({pos_x, pos_y});
        }

        count++;

    }

    return 0;
}
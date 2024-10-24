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

vector<pair<int, int>> locations(4);
int available_space;

struct rectangle {
    int length;
    int width;
};

vector<pair<rectangle, char>> rects(3);

bool is_square(int a) {
    int f = floor(sqrt(a));
    return f * f == a;
}

bool populate(vector<vector<char>> &billboard, int coord_idx, pair<rectangle, char> val, bool rotate) {
    rectangle to_place;

    if (rotate) {
        to_place.width = val.first.length;
        to_place.length = val.first.width;
    } else {
        to_place.width = val.first.width;
        to_place.length = val.first.length;
    }

    pair<int, int> coord = locations[coord_idx];

    if (coord_idx == 0) {
        // top left
        for (int row = 0; row < to_place.length; ++row) {
            for (int col = 0; col < to_place.width; ++col) {
                if (billboard[row][col] != ' ') return false;
                billboard[row][col] = val.second;
            }
        }
    } else if (coord_idx == 1) {
        // bottom left
        for (int row = coord.second; row >= coord.second - to_place.length; --row) {
            for (int col = 0; col < to_place.width; ++col) {
                if (billboard[row][col] != ' ') return false;
                billboard[row][col] = val.second;
            }
        }
    } else if (coord_idx == 2) {
        // top right
        for (int row = 0; row < to_place.length; ++row) {
            for (int col = coord.first; col >= coord.first - to_place.width; --col) {
                if (billboard[row][col] != ' ') return false;
                billboard[row][col] = val.second;
            }
        }
    } else if (coord_idx == 3) {
        // bottom right
        for (int row = coord.second; row >= coord.second - to_place.length; --row) {
            for (int col = coord.first; col >= to_place.width; --col) {
                if (billboard[row][col] != ' ') return false;
                billboard[row][col] = val.second;
            }
        }
    }

    available_space -= to_place.length * to_place.width;
    return true;
}

void depopulate(vector<vector<char>> &billboard, char val) {
    cout << "depopulating " << val << endl;
    for (int i = 0; i < billboard.size(); ++i) {
        for (int j = 0; j < billboard[0].size(); ++j) {
            if (billboard[i][j] == val) {
                // unset the billboard space
                billboard[i][j] = ' ';
            }
        }
    }
}

void place_ads(vector<vector<char>> &billboard, int k) {

    // found valid solution
    if (k == 3 && available_space == 0)
        return;

    // Rotations
    for (int i = 0; i < 2; ++i)
    {
        // the four corners of the billboard
        for (int j = 0; j < locations.size(); ++j)
        {
            int x = locations[j].first, y = locations[j].second;

            // spot already occupied
            if (billboard[y][x] != ' ')
                continue;

            // do not rotate
            bool res = populate(billboard, j, rects[k], i);

            if (!res) depopulate(billboard, rects[k].second);

            place_ads(billboard, k+1);
            depopulate(billboard, rects[k].second);
            available_space += rects[k].first.length * rects[k].first.width;
        }
    }
}

void solve() {

    rectangle r1, r2, r3;
    cin >> r1.length >> r1.width >> r2.length >> r2.width >> r3.length >> r3.width;

    rects[0] = {r1, 'A'};
    rects[1] = {r2, 'B'};
    rects[2] = {r3, 'C'};

    ll a1 = r1.length * r1.width;
    ll a2 = r2.length * r2.width;
    ll a3 = r3.length * r3.width;

    if (!is_square(a1 + a2 + a3)) {
        cout << -1;
        return;
    }

    int square_size = sqrt(a1 + a2 + a3);

    // init the billboard
    vector<vector<char>> billboard(square_size, vector<char>(square_size, ' '));

    locations[0] = {0, 0};
    locations[1] = {0, square_size - 1};
    locations[2] = {square_size - 1, 0};
    locations[3] = {square_size - 1, square_size - 1};

    place_ads(billboard, 0);

    cout << square_size << "\n";

    for (auto row : billboard) {
        for (auto val : row) {
            cout << val;
        }
        cout << "\n";
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}
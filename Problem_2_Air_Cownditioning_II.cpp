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

vi require_cool(101, 0);

struct cow {
    int si;
    int ti;
    int cool_n;
};

struct ac {
    int ai;
    int bi;
    int cool;
    int price;
};

int min_price = INF;
vector<ac> acs;
vi current_conditioners;

bool check_if_all_cooled() {
    bool all_cooled = true;

    for (int i = 0; i < require_cool.size(); ++i) {
        if (require_cool[i] > 0) {
            all_cooled = false;
            break;
        }
    }

    return all_cooled;
}

void cool(int curr_price) {
    if (check_if_all_cooled()) {
        min_price = min(min_price, curr_price);
        return;
    }

    // Now, we need to implement the backtracking thing
    for (int j = 0; j < acs.size(); ++j) {
        ac conditioner = acs[j];
        bool repeated = false;

        // Do not repeat the current ac
        for (int c = 0; c < current_conditioners.size(); ++c) {
            if (j == current_conditioners[c]) {
                repeated = true;
                break;
            }
        }

        if (repeated) continue;

        // Affect the whole thing
        for (int i = conditioner.ai; i <= conditioner.bi; ++i) {
            require_cool[i] -= conditioner.cool;
        }
        current_conditioners.push_back(j);

        cool(curr_price + conditioner.price);

        // Revert the whole thing
        current_conditioners.pop_back();
        for (int i = conditioner.ai; i <= conditioner.bi; ++i) {
            require_cool[i] += conditioner.cool;
        }

    }
}

void solve() {

    int n, m; cin >> n >> m; 

    for (int i = 0; i < n; ++i) {
        cow c;
        cin >> c.si >> c.ti >> c.cool_n;

        // Store the cool needed as part of an array
        for (int j = c.si; j <= c.ti; ++j) {
            require_cool[j] = c.cool_n;
        }
    }

    for (int i = 0; i < m; ++i) {
        ac a;
        cin >> a.ai >> a.bi >> a.cool >> a.price;
        acs.push_back(a);
    }

    cool(0);

    cout << min_price << "\n";
}

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    solve();
}
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

ll fact(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fact(n-1);
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int final_destination = 0;

    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] == '-') {
            final_destination--;
        } else if(s1[i] == '+') {
            final_destination++;
        }
    }

    int current_destination = 0;
    int decisions = 0;
    int possible_scenarios = 0;

    for (int i = 0; i < s2.size(); ++i) {
        if (s2[i] == '-') {
            current_destination--;
        } else if(s2[i] == '+') {
            current_destination++;
        } else if(s2[i] == '?') {
            decisions++;
        }
    }
    
    if (decisions == 0) {
        if (current_destination == final_destination) {
            cout << (double)1 << endl;
        } else {
            cout << (double)0 << endl;
        }

        return;
    }

    for (int i = 0; i <= decisions; ++i) {
        int res = (decisions - i) - i;

        if (current_destination + res == final_destination) {
            possible_scenarios += fact(decisions) / (fact(i) * (fact(decisions-i)));
        }
    }

    cout << (double)possible_scenarios / (double)(pow(2, decisions)) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(12);

    solve();
}
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
    int n; cin >> n;

    vi balloons(n);
    vector<bool> pop(n);

    for(auto &i : balloons) {
        cin >> i;
    }

    int arrows = 0;
    int popped = 0;

    for(int i = 0; i < n; i++) {

        if(pop[i])
            continue;

        int currHeight = balloons[i] - 1;
        pop[i] = true;
        popped++;

        for(int j = i + 1; j < n; j++) {
            if(balloons[j] == currHeight && !pop[j]) {
                //cout << "Height: " << currHeight << endl;
                currHeight--;
                popped++;
                pop[j] = true;
            } 
        }

        arrows++;

        if(popped == n) 
            break;
    }

    cout << arrows;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

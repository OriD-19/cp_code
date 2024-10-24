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


  while(!cin.eof()) {

    int n;
    if(!(cin >> n)) {
      break;
    }


    stack<int> s;
    queue<int> q;
    priority_queue<int, vector<int>, less<int>> pq;

    bool is_stack = true, is_queue = true, is_pq = true;

    while(n--) {

      int command; cin >> command;

      if(command == 1) {
        int num; cin >> num;
        s.push(num);
        q.push(num);
        pq.push(num);
      }

      if(command == 2) {

        int num; cin >> num;

        if(s.empty() || q.empty() || pq.empty()) {
          is_stack = false;
          is_queue = false;
          is_pq = false;

        } else {
          if(s.top() != num) {
            is_stack = false;
          }

          if(q.front() != num) {
            is_queue = false;
          }

          if(pq.top() != num) {
            is_pq = false;
          }

          s.pop();
          q.pop();
          pq.pop();

        }

      }


    }

    if(is_stack + is_queue + is_pq > 1) {
      cout << "not sure" << endl;
    } else if(is_stack) {
      cout << "stack" << endl;
    } else if(is_queue) {
      cout << "queue" << endl;
    } else if(is_pq) {
      cout << "priority queue" << endl;
    } else {
      cout << "impossible" << endl;
    }

  }

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  solve();
}

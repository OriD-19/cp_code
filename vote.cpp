#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> vote_register(50000);

        int winner = 0;
        int max_votes = 0;
        long long total = 0;

        for(int i = 0; i < n; i++) {
            int votes; cin >> votes;
            vote_register[votes]++;
            if(votes > max_votes && vote_register[votes] == 1) {
                winner = i + 1;
                max_votes = votes;
            }
            total += votes;
        }

        if(winner == 0 || vote_register[max_votes] > 1) {
            cout << "no winner" << "\n";
            continue;
        } else if(max_votes > total / 2) {
            cout << "majority ";
        } else if(max_votes <= total / 2) {
            cout << "minority ";
        }

        cout << "winner " << winner << "\n";

    }

    return 0;
}
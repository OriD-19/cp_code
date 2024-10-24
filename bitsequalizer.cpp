#include <iostream>
#include <vector>
#include <cmath>
// If we have more 1s in S than in T, then we know its impossible

using namespace std;

int main()
{

    int t; cin >> t;
    int c = 0;

    while(t--) {
        int oS = 0, zS = 0, wS = 0;
        int oT = 0, zT = 0;
        vector<int> wildcards_index;

        string S, T; cin >> S >> T;

        int ans = 0;

        int i = 0;
        for(auto &a : S) {
            if(a == '1') {
                oS++;
            } else if(a == '0') {
                zS++;
            } else if(a == '?') {
                wildcards_index.push_back(i);
                wS++;
            }
            i++;
        }
        
        for(auto &a : T) {
            if(a == '1') {
                oT++;
            } else if(a == '0') {
                zT++;
            }
        }

        if(oS > oT) {
            cout << "Case " << ++c << ": " << -1 << endl;
            continue;
        }

        for(int j = 0; j < wS; j++) {
            if(oS < oT) {
                S[wildcards_index[j]] = '1';
                oS++;
            } else if(zS < zT) {
                S[wildcards_index[j]] = '0';
                zS++;
            }
            ans++;
        }

        if(oS < oT) {
            for(int i = 0; i < S.size() && oS < oT; i++) {
                if(T[i] == '1' && S[i] == '0') {
                    S[i] = '1';
                    oS++;
                    ans++;
                }
            }
        }

        if(oS < oT) {
            for(int i = 0; i < S.size() && oS < oT; i++) {
                if(S[i] == '0') {
                    S[i] == '1';
                    oS++;
                    ans++;
                }
            }
        }

        int diff = 0;

        cout << "Case " << ++c << ": " << (ans + ceil(diff/2.0)) << endl;

    }


    return 0;
}
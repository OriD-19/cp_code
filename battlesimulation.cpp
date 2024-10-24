#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string moves;
    cin >> moves;

    string ans = "";
    int i = 0;
    for(i; i < moves.size(); i++){
        string combo;
        combo.push_back(moves[i]);
        combo.push_back(moves[i+1]);
        combo.push_back(moves[i+2]);

        sort(combo.begin(), combo.end());

        if(combo == "BLR") {
            ans+='C';
            i+=2;
            continue;
        }

        if(moves[i] == 'R') {
            ans+='S';
        } else if(moves[i] == 'B') {
            ans+='K';
        } else if(moves[i] == 'L') {
            ans+='H';
        }

    }

    cout << ans;

    return 0;
}
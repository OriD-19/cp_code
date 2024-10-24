#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int ng, nm; cin >> ng >> nm;

        vector<uint64_t> sg(ng);
        vector<uint64_t> sm(nm);

        for(auto &i : sg) {
            cin >> i;
        }

        for(auto &i : sm) {
            cin >> i;
        }

        sort(sg.begin(), sg.end());
        sort(sm.begin(), sm.end());

        int a = 0, b = 0;

        while(a < ng && b < nm) {
            if(sg[a] >= sm[b]) {
                b++;
            } else {
                a++;
            }
        }

        if(a == ng) {
            cout << "MechaGodzilla" << endl;
        } else if(b == nm) {
            cout << "Godzilla" << endl;
        } else {
            cout << "uncertain" << endl;
        }

    }

    return 0;
}
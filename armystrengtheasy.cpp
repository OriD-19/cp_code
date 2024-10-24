#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        int ng, nm; cin >> ng >> nm;

        int sg[10000];
        int sm[10000];

        fill_n(sg, 10000, 10001);
        fill_n(sm, 10000, 10001);

        for(int i = 0; i < ng; i++) 
            cin >> sg[i];

        for(int i = 0; i < nm; i++) 
            cin >> sm[i];

        sort(sg, sg + (sizeof(sg) / sizeof(sg[0])));
        sort(sm, sm + (sizeof(sm) / sizeof(sm[0])));

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
        } else if (b == nm) {
            cout << "Godzilla" << endl;
        }
    }

    return 0;
}
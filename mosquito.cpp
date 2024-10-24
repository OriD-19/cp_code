#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int m, p, l, e, r, s, n;
    while(cin >> m >> p >> l >> e >> r >> s >> n) {
        int mosquito_count = m;
        int pupa_count = p;
        int new_pupa = 0;
        int larva_count = l;
        int new_larva = 0;

        for (int i = 0; i < n; i++)
        {
            new_larva += e * mosquito_count;
            mosquito_count = 0;

            new_pupa += floor(larva_count / r);
            mosquito_count += floor(pupa_count / s);

            larva_count = new_larva;
            new_larva = 0;
            pupa_count = new_pupa;
            new_pupa = 0;
    }

        cout << mosquito_count << endl;
    }
    return 0;
}
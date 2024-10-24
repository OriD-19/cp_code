#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int g;
        cin >> g;
        int past_id = -1;

        bool done = false;

        for (int i = 1; i <= g; i++)
        {
            int id;
            cin >> id;
            if (past_id == -1)
            {
                past_id = id;
                continue;
            }
            if (id != past_id + 1 && !done)
            {
                cout << i << endl;
                done = true;
            }
            past_id = id;
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int s0, s1, r0, r1;

    while (cin >> s0 >> s1 >> r0 >> r1)
    {
        if (!s0 && !s1 && !r0 && !r1)
            break;

        int p1_score = max(s0, s1) * 10 + min(s0, s1);
        int p2_score = max(r0, r1) * 10 + min(r0, r1);

        // 12 or 21 check
        if (p1_score == 12 || p1_score == 21)
        {
            if (p2_score == 12 || p2_score == 21)
            {
                cout << "Tie." << endl;
                continue;
            }
            else
            {
                cout << "Player 1 wins." << endl;
                continue;
            }
        }
        else if (p2_score == 12 || p2_score == 21)
        {
            cout << "Player 2 wins." << endl;
            continue;
        }

        // Repeat check
        if (s0 == s1)
        {
            if (r0 == r1)
            {
                if (p1_score > p2_score)
                {
                    cout << "Player 1 wins." << endl;
                    continue;
                }
                else if (p1_score == p2_score)
                {
                    cout << "Tie." << endl;
                    continue;
                }
                else
                {
                    cout << "Player 2 wins." << endl;
                    continue;
                }
            }
            else
            {
                cout << "Player 1 wins." << endl;
                continue;
            }
        } else if(r0 == r1) {
            cout << "Player 2 wins." << endl;
            continue;
        }
        // Last check
        if (p1_score > p2_score)
        {
            cout << "Player 1 wins." << endl;
            continue;
        }
        else if (p1_score == p2_score)
        {
            cout << "Tie." << endl;
            continue;
        }
        else
        {
            cout << "Player 2 wins." << endl;
            continue;
        }
    }

    return 0;
}
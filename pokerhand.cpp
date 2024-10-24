#include <iostream>

using namespace std;

int main()
{
    string cards[5];
    cin >> cards[0] >> cards[1] >> cards[2] >> cards[3] >> cards[4];
    int score[100] = {0};

    for(int i =0; i < 5; i++) 
        score[cards[i][0]]++;

    int ans = 0;

    for(int i = 0; i < 100; i++) {
        ans = max(ans, score[i]);
    }

    cout << ans;

    return 0;
}
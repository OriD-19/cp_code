#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--) {
        string score; cin >> score;

        int total = 0;
        int consecutive = 0;

        for(auto b : score) {
            if(b == 'O') {
                total += consecutive+1;
                consecutive++;
            } else if(b == 'X') {
                consecutive = 0;
            }
        }

        cout << total << endl;
    }

    return 0;
}
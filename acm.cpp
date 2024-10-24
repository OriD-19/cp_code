#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int m;
    char problem;
    string result;
    int p[25] = {0};
    int total_time = 0, solved = 0;

    while(cin >> m) {
        if(m == -1)
            break;

        cin >> problem >> result;

        if(result == "right") {
            total_time += m + (p[problem-65] * 20);
            solved++;
        } else if(result == "wrong") {
            p[problem-65]++;
        }

    }

    cout << solved << " " << total_time;

    return 0;
}
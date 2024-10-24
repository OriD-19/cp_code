#include <iostream>

using namespace std;

int main()
{

    string hello = "hello";
    string s; cin >> s;

    int idx = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == hello[idx]) {
            idx++;
        }

        if(idx == hello.size()) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
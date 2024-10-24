#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n;

    cin >> a >> b >> c >> n;

    if(a && b && c) {
        if(a+b+c >= n && n >= 3) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
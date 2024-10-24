// N people on the line.
// The first person is always Jimmy (so, all the answers begin
// with number 1).

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> line(n);

    line[0] = 1;

    for(int i = 0; i < n-1; i++) {
        int q; cin >> q; 
        line[q+1] = i+2;
    }

    for(auto a : line) 
        cout << a << " ";

    return 0;
}
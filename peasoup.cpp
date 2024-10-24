#include <iostream>
#include <string>

using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    while(n--) {
        int k; cin >> k;
        string d;
        getline(cin, d);

        string name; 
        getline(cin, name);

        bool pea = false, pan = false;

        while(k--) {
            string plate;
            getline(cin, plate);
            if(plate == "pea soup")
                pea = true;
            else if(plate == "pancakes")
                pan = true;
        }

        if(pea && pan) {
            cout << name << endl;
            return 0;
        }     
    }

    cout << "Anywhere is fine I guess";

    return 0;
}
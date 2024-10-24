#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t; cin >> t;
    string name, ps, dob;
    int courses;

    while(t--) {
        cin >> name >> ps >> dob >> courses;

        cout << name << " ";

        if(stoi(ps.substr(0, 4)) >= 2010
            || stoi(dob.substr(0, 4)) >= 1991) {
            cout << "eligible";
        }
        else if (courses >= 41)
        {
            cout << "ineligible";
        }
        else
        {
            cout << "coach petitions";
        }

        cout << "\n";

    }

    return 0;
}
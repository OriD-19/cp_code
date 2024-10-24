#include <iostream>
#include <string>

using namespace std;

int getAddition(string operation) {
    string num1, num2;
    bool change = false;

    for(int i = 0; i < operation.size(); i++) {
        if(operation[i] == '+') {
            change = true;
            continue;
        }
        
        if(change) {
            num2+=operation[i];
        } else {
            num1+=operation[i];
        }
    }

    return stoi(num1) + stoi(num2);
}

int main()
{
    int t; cin >> t;

    while(t--) {
        string problem;
        cin >> problem;

        if(problem == "P=NP") {
            cout << "skipped";
        } else {
            cout << getAddition(problem);
        }

        cout << "\n";

    }

    return 0;
}
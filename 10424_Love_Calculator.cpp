// Just use recursion to calculate the sum of digits
// Until there's only a digit left

// Incredible problem.
// Really enjoyed it, though.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int sumDigits(int q) {
    if(q < 10) {
        return q;
    } 
    return sumDigits(q/10) + q%10;
}

int checkChar(char c) {

    if(c < 65 || (c >= 91 && c <= 96) || c > 122) {
        return 0;
    }

    if(c >= 65 && c <= 90) {
        return (c - 65) + 1;
    }

    return (c - 97) + 1;
}

int digitTrans(string name) {

    int quantity = 0;

    for(int i = 0; i < name.size(); i++) {
        if(checkChar(name[i])) {
            quantity += checkChar(name[i]);
        }
    }

    while(quantity >= 10) {
        quantity = sumDigits(quantity);
    }

    return quantity;

}

int main()
{
    string n1, n2;

    while(getline(cin, n1)) {
        getline(cin, n2);

        cout << fixed << setprecision(2);
        int q1 = digitTrans(n1), q2 = digitTrans(n2);
        double ans = min(q1, q2) * 1.0 / max(q1, q2) * 1.0;
        cout << ans*100.00 << " %" << endl;
    }

    return 0;
}
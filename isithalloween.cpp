#include <iostream>

using namespace std;

int main()
{
    string month, day;

    cin >> month >> day;

    if((month == "DEC" && day == "25") || (month == "OCT" && day == "31")) {
        cout << "yup";
        return 0;
    }

    cout << "nope";

    return 0;
}
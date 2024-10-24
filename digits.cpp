// Knowing the number of digits, substitute the number
// for the number of digits,
// Until there's only one digit left. That is , when the 
// Number we're analyzing only has on number

#include <iostream>
#include <string>

using namespace std;

int minX(string number) {

    if(number == "1") {
        return 1;
    }

    int count = 1;
    while(number.size() > 1) {
        number = to_string(number.size());
        count++;
    }

    return count + 1;

}

int main()
{
    string x;

    while(cin >> x) {
        if(x == "END")
            break;

        
        cout << minX(x) << endl;
    }

    return 0;
}
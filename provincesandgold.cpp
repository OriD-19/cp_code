#include <iostream>

using namespace std;

int main()
{
    int gold, silver, copper;
    cin >> gold >> silver >> copper;

    int estate = 2;
    int duchy = 5;
    int province = 8;

    int total = gold*3 + silver*2 + copper;

    if(total <= 1) {
        cout << "Copper";
    } else if(total == 2) {
        cout << "Estate or Copper";
    } else if(total == 3 || total == 4) {
        cout << "Estate or Silver";
    } else if(total == 5) {
        cout << "Duchy or Silver";
    } else if(total == 6 || total == 7) {
        cout << "Duchy or Gold";
    } else if(total >= 8) {
        cout << "Province or Gold";
    }

    return 0;
}
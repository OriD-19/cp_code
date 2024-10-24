// 1 4 10

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{


    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    int diff1 = arr[1] - arr[0];
    int diff2 = arr[2] - arr[1];

    if(diff1 == diff2) {
        cout << arr[2] + diff1;
    } else if(diff1 > diff2) {
        cout << arr[0] + diff2;
    } else if(diff1 < diff2) {
        cout << arr[1] + diff1;
    }

    return 0;
}
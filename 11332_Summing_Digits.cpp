#include <iostream>

using namespace std;

int sumDigits(long long int n)
{
    if (n < 10)
    {
        return n;
    }

    return sumDigits(n / 10) + n % 10;
}

int main()
{

    long long int n;

    while (cin >> n)
    {
        if (n == 0)
            break;

        while (n >= 10)
        {
            n = sumDigits(n);
        }

        cout << n << endl;
    }

    return 0;
}
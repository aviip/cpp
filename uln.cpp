#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // int i = 2;
    // int sum = 0;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i += 2;
    // }
    // cout << sum << " ";

    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number" << endl;
        }
        else
        {
            cout << n << " is a prime number" << endl;
        }
        i++;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // bool isPrime = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    // }

    // if (isPrime == 0)
    // {
    //     cout << n << " is not a prime number";
    // }
    // else
    // {
    //     cout << n << " is a prime number";
    // }

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";

    //     if (i & 1)
    //     {
    //         continue;
    //     }

    //     i++;
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            // if (i + j == 10)
            // {
            //     break;
            // }
            cout << i << " " << j << endl;
        }
    }
}
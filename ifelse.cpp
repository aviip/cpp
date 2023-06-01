#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    // if (a > 0)
    // {
    //     cout << "a is greater" << endl;
    // }
    // else
    // {
    //     cout << "a is negative" << endl;
    // }

    int b;
    cin >> b;

    // cout << "The value of a and b is " << a << " " << b << endl;

    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }

    else if (a == b)
    {
        cout << a << " is equal to " << b << endl;
    }

    else
    {
        cout << b << " is greater than " << a << endl;
    }
}
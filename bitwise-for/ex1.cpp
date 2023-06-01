#include <iostream>
using namespace std;

int main()
{
    // cout << (19 << 2);
    // cout << (19 >> 2);

    // int a, b = 1;
    // a = 10;

    // if (++a)
    //     cout << b;
    // else
    //     cout << ++b;

    // int a = 1, b = 2;
    // if (a-- > 0 && ++b > 2)
    //     cout << "Inside If";
    // else
    //     cout << "Inside else";

    // int n = 3;
    // cout << (25 * (++n));

    int a = 1;
    int b = a++;
    int c = ++a;

    cout << b;
    cout << c;
}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0, i = 0;

    while (n)
    {
        int remain = n % 10;
        if (remain)
        {
            ans = (pow(2, i)) + ans;
        }
        i++;
        n /= 10;
    }

    cout << ans;
}
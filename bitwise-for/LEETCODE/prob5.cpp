#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n / 2)
    {
        int ans = pow(2, i);
        if (n == ans)
        {
            return true;
            break;
        }
        i++;
    }

    return false;
}
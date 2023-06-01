#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // int i = 0;

    if (n == 0)
        return 1;
    int m = n;
    int mask = 0;

    while (m != 0)
    {
        // int remain = !(n % 10);
        // ans = ans + ((pow(2, i)) * remain);
        // i++;
        // n /= 10;
        mask = (mask << 1) | 1;
        cout << mask << endl;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    // cout << ans;
}
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while (n)
    {
        int remain = n % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = (ans * 10) + remain;
        n /= 10;
    }
    cout << ans << endl;
}
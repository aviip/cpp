#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mask = 0;
    int m = n;

    if (n == 0)
        cout << 1;

    while (m)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    // Try in notebook with multiple questions
    int ans = (~n) & mask;
    cout << ans;
}
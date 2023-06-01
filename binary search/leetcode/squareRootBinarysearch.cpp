#include <iostream>
using namespace std;

int squareRoot(int n)
{
    int start = 0, end = n, mid = start + (end - start) / 2, ans = -1;
    while (start <= end)
    {
        int square = mid * mid;
        if (square > n)
        {
            end = mid - 1;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        if (square == n)
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n = 36;
    int ans = squareRoot(n);

    cout << ans << endl;
}
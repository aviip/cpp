#include <iostream>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int update(int a)
{
    int ans = a * a;
    return ans;
}

int main()
{
    // int n;
    // cin >> n;
    // int ans = isPrime(n);
    // cout << ans;

    int a = 14;
    a = update(a);
    cout << a;
}
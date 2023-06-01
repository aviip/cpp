#include <iostream>
using namespace std;

int ncr(int a, int b)
{
    float ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a / i;
        a--;
    }

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ncr(a, b);
}
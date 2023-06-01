#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        /* code */
        ans = ans * a;
    }
    return ans;
}

bool evenodd(int num)
{
    if (num % 2 == 0)
        return 1;

    return 0;
}

int main()
{
    // cout << power();

    int num;
    cin >> num;
    cout << evenodd(num);
}
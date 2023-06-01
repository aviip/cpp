#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int mul = 1;

    for (int i = 0; i <= n; i++)
    {
        cout << "n : " << n << endl;
        int remain = n % 10;
        sum += remain;
        mul *= remain;
        // cout << "remain" << remain << endl;

        // cout << "sum : " << sum << endl;
        // cout << "mul : " << mul << endl;
        n /= 10;
    }

    cout << mul - sum;
}
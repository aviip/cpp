#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     /* code */
    //     cout << i << " ";
    // }

    for (int i = 1, j = 10; i < n, j >= n; i++, j--)
    {
        cout << "" << i;
        cout << endl;
        cout << "" << j;
    }
}
#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        cout << ans << endl;
    }

    return ans;
}

int main()
{
    int arr[1000] = {1, 2, 0, 2, 1};

    int arraySize = sizeof(arr) / sizeof(int);
    unique(arr, 5);

    // cout << ans;
}
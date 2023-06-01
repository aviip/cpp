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
    int arr[5] = {1, 2, 4, 1, 3};
    // int arr[2] = {1, 2};
    // int arr[6] = {1, 2, 2, 1, 1, 3};

    int arraySize = sizeof(arr) / sizeof(int);
    unique(arr, arraySize);

    // cout << ans;
}
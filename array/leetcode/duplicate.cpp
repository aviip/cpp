#include <iostream>
using namespace std;

int duplicate(int arr[], int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i; j < size; j++)
    //     {
    //         int a = arr[i] ^ arr[j + 1];
    //         if (a == 0)
    //         {
    //             return arr[i];
    //         }
    //     }
    // }

    // return 0;

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int arr[5] = {1, 2, 2, 4, 3};
    // int arr[2] = {1, 2};
    // int arr[6] = {1, 2, 2, 1, 1, 3};

    int arraySize = sizeof(arr) / sizeof(int);
    int res = duplicate(arr, arraySize);

    cout << res;
}
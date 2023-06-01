#include <iostream>
using namespace std;

int sumofArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cin >> size;

    int arr[10];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int res = sumofArray(arr, size);

    cout << res;
}
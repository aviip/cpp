#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }

    return 0;
}

int main()
{
    int key;
    cin >> key;
    int arr[5] = {1, 5, -2, 2, 4};

    int res = binarySearch(arr, 5, key);

    if (res)
    {
        cout << key << " is present";
    }
    else
    {
        cout << key << " is not present";
    }
}
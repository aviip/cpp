#include <iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    // int arr[5] = {1, 3, 4, 5, 7};
    int arr[6] = {2, 3, 5, 7, 8, 12};

    int result = binary(arr, 6, 12);
    cout << result << endl;
}
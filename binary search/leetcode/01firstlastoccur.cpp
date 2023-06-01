#include <iostream>
using namespace std;

int firstoccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastoccur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[5] = {2, 2, 2, 3, 4};
    // int arr[6] = {0, 1, 1, 2, 4, 5};

    int first = firstoccur(arr, 5, 1);
    int last = lastoccur(arr, 5, 1);

    cout << "first occurence is " << first << endl;
    cout << "last occurence is " << last;
}
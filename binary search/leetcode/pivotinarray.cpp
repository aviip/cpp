#include <iostream>
using namespace std;

int findPivot(int arr[], int size)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5] = {4, 6, 1, 2, 3};
    int ans = findPivot(arr, 5);
    cout << "The pivoted element is: " << arr[ans] << endl;
}
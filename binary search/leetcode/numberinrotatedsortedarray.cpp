#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    int ans = -1, start = 0, end = size - 1, mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            break;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int res = search(arr, 5, 2);

    cout << "The key is at index: " << res << endl;
}
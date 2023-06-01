#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 5, 0};
    int sizeofArray = sizeof(arr) / sizeof(int);

    reverse(arr, sizeofArray);
    printArray(arr, sizeofArray);
}
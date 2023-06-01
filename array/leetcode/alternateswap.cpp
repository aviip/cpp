#include <iostream>
using namespace std;

void alternateSwap(int arr[], int size)
{
    int start = 0;
    int end = 1;

    while (end <= size - 1)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
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
    int arr[5] = {1, 2, 4, -5, 6};
    int sizeofArray = sizeof(arr) / sizeof(int);
    alternateSwap(arr, sizeofArray);
    printArray(arr, sizeofArray);
}
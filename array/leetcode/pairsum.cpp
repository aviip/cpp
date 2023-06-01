#include <iostream>
#include <math.h>
using namespace std;

void sumPair(int arr[], int size)
{
    // int n = 6;
    int n = 0;
    int i = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                // int min = (min(arr[i], arr[j]));
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr1[5] = {1, 2, 4, 3, 5};
    int arr2[5] = {2, -3, 3, 3, -2};

    sumPair(arr2, 5);
}
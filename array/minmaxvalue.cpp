#include <iostream>
using namespace std;

int greaterVal(int arr[], int size)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (mini >= arr[i])
        // {
        //     mini = arr[i];
        // }

        maxi = max(maxi, arr[i]);
        // if (maxi < arr[i])
        // {
        //     maxi = arr[i];
        // }
    }

    cout << mini << " min " << endl;
    cout << maxi << " max" << endl;
    return 0;
}

int main()
{
    int size;
    cin >> size;

    int num[10];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // int array[4] = {1, 0, -2, 1};
    // int sizeofArray = sizeof(num) / sizeof(int);
    greaterVal(num, size);
}
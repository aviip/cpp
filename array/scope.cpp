#include <iostream>
using namespace std;

void update(int arr[], int size)
{
    cout << "Inside function" << endl;

    arr[0] = 12;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Returning to main function" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
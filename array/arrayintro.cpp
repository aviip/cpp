#include <iostream>
using namespace std;

void printValues(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int array[5] = {1};
    int sizeofArray = sizeof(array) / sizeof(int);

    printValues(array, sizeofArray);
}
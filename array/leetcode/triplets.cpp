#include <iostream>
using namespace std;

void triplets(int arr[], int size)
{
    int sum = 6;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int arr[5] = {1, 3, 5, 2, 4};
    triplets(arr, 5);
}
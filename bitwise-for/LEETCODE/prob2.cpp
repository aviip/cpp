#include <iostream>
using namespace std;

int main()
{
    int n = 10001100;
    // cin>>n;

    int count = 0;
    while (n)
    {
        int remain = n % 10;
        // cout << "remain : " << remain << endl;
        if (remain)
        {
            count++;
        }
        n /= 10;
    }

    cout << count << endl;
}
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // switch (i)
        // {
        // case 1:
        //     cout << "for 1" << endl;
        //     continue;

        // default:
        //     cout << i << endl;
        //     break;
        // }

        if (i == 1)
        {
            cout << "for 1" << endl;
            continue;
        }
        cout << i << endl;
    }
}